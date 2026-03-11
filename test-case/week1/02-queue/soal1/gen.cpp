#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    vector<string> namaList = {
        "Andi", "Budi", "Cici", "Dodi", "Eka",
        "Fani", "Gani", "Hani", "Ika", "Joko",
        "Kiki", "Lala", "Mira", "Nana", "Oki"
    };

    int n = rng() % 10 + 3; // 3 sampai 12 pelanggan
    cout << n << "\n";

    int waktu = 0;
    for (int i = 0; i < n; i++) {
        waktu += rng() % 3; // selisih 0, 1, atau 2 menit (non-decreasing)
        cout << namaList[i % namaList.size()] << " " << waktu << "\n";
    }

    return 0;
}
