// Generator test case: Kalkulator Ekspresi Postfix
// Penggunaan: ./gen <seed> [T] [kedalaman_max]
// Menghasilkan T ekspresi postfix yang valid
#include <bits/stdc++.h>
using namespace std;

string ops[] = {"+", "-", "*", "/"};

// Hasilkan ekspresi postfix valid secara rekursif
// Mengembalikan string ekspresi dan nilai hasilnya
pair<string, long long> buatEkspresi(mt19937& rng, int kedalaman) {
    if (kedalaman == 0 || rng() % 3 == 0) {
        // Daun: bilangan acak
        long long val = (long long)(rng() % 100) + 1;
        return {to_string(val), val};
    }

    // Node internal: operator dengan dua sub-ekspresi
    auto [ekspresi_kiri, val_kiri] = buatEkspresi(rng, kedalaman - 1);
    auto [ekspresi_kanan, val_kanan] = buatEkspresi(rng, kedalaman - 1);

    // Pilih operator, hindari pembagian dengan nol
    int op_idx;
    long long hasil;
    do {
        op_idx = rng() % 4;
        if (op_idx == 3 && val_kanan == 0) continue;

        if (ops[op_idx] == "+")      hasil = val_kiri + val_kanan;
        else if (ops[op_idx] == "-") hasil = val_kiri - val_kanan;
        else if (ops[op_idx] == "*") hasil = val_kiri * val_kanan;
        else {
            if (val_kanan == 0) { op_idx = 0; hasil = val_kiri + val_kanan; }
            else hasil = val_kiri / val_kanan;
        }
        break;
    } while (true);

    string ekspresi = ekspresi_kiri + " " + ekspresi_kanan + " " + ops[op_idx];
    return {ekspresi, hasil};
}

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    int T = (argc > 2) ? atoi(argv[2]) : 10;
    int kedalaman_max = (argc > 3) ? atoi(argv[3]) : 4;

    T = max(1, min(T, 50));
    kedalaman_max = max(1, min(kedalaman_max, 6));

    cout << T << "\n";

    for (int i = 0; i < T; i++) {
        int kedalaman = (rng() % kedalaman_max) + 1;
        auto [ekspresi, hasil] = buatEkspresi(rng, kedalaman);
        cout << ekspresi << "\n";
    }

    return 0;
}
