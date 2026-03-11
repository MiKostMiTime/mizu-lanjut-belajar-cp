#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    vector<string> prefixNama = {
        "Laporan", "Tugas", "Foto", "Makalah", "Sertifikat",
        "Proposal", "Undangan", "Invoice", "Memo", "Surat",
        "Dokumen", "Brosur", "Formulir", "Bukti", "Jadwal"
    };

    int n = rng() % 8 + 3; // N: 3 sampai 10 dokumen
    cout << n << "\n";

    for (int i = 0; i < n; i++) {
        string nama = prefixNama[i % prefixNama.size()] + to_string(i + 1);
        int halaman   = rng() % 20 + 1;  // 1 sampai 20 halaman
        int prioritas = rng() % 5 + 1;   // prioritas 1 sampai 5
        cout << nama << " " << halaman << " " << prioritas << "\n";
    }

    return 0;
}
