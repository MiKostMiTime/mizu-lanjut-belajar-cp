// Generator test case: Ekspresi Kurung
// Penggunaan: ./gen <seed> [T] [panjang_max]
// Menghasilkan T kasus uji, sebagian valid dan sebagian tidak
#include <bits/stdc++.h>
using namespace std;

// Hasilkan ekspresi kurung yang valid dengan kedalaman acak
string buatValid(mt19937& rng, int panjang) {
    string hasil = "";
    int buka = 0;
    string pasangan = "([{";
    string tutup = ")]}";
    int sisa = panjang;

    while (sisa > 0) {
        if (buka == 0) {
            // Harus buka kurung baru
            int jenis = rng() % 3;
            hasil += pasangan[jenis];
            buka++;
            sisa--;
        } else if (sisa == buka) {
            // Harus tutup semua kurung yang terbuka
            // Cari pasangan dari karakter terakhir yang buka
            for (int i = hasil.size() - 1; i >= 0; i--) {
                for (int j = 0; j < 3; j++) {
                    if (hasil[i] == pasangan[j]) {
                        hasil += tutup[j];
                        sisa--;
                        buka--;
                        break;
                    }
                }
                if (sisa == buka) break;
            }
        } else {
            int r = rng() % 3;
            if (r == 0) {
                // Buka kurung baru
                int jenis = rng() % 3;
                hasil += pasangan[jenis];
                buka++;
                sisa--;
            } else {
                // Tutup kurung terakhir
                for (int i = hasil.size() - 1; i >= 0; i--) {
                    for (int j = 0; j < 3; j++) {
                        if (hasil[i] == pasangan[j]) {
                            hasil += tutup[j];
                            sisa--;
                            buka--;
                            goto keluar;
                        }
                    }
                }
                keluar:;
            }
        }
    }
    return hasil;
}

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    int T = (argc > 2) ? atoi(argv[2]) : 10;
    int panjang_max = (argc > 3) ? atoi(argv[3]) : 20;

    T = max(1, min(T, 100));
    panjang_max = max(2, min(panjang_max, 100));
    // Pastikan panjang_max genap (agar bisa membuat ekspresi valid)
    if (panjang_max % 2 != 0) panjang_max--;

    cout << T << "\n";

    string semua_kurung = "()[]{}";

    for (int i = 0; i < T; i++) {
        int panjang = (rng() % (panjang_max / 2) + 1) * 2;
        int r = rng() % 2;

        if (r == 0) {
            // Hasilkan string acak (mungkin tidak valid)
            string s = "";
            for (int j = 0; j < panjang; j++) {
                s += semua_kurung[rng() % 6];
            }
            cout << s << "\n";
        } else {
            // Hasilkan string valid
            cout << buatValid(rng, panjang) << "\n";
        }
    }

    return 0;
}
