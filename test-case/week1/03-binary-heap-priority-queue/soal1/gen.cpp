#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    auto randInt = [&](int lo, int hi) -> int {
        return lo + (int)(rng() % (hi - lo + 1));
    };

    // Daftar nama pasien yang tersedia
    vector<string> namaPool = {
        "Budi", "Ani", "Cici", "Dedi", "Eko", "Fajar", "Gita", "Haris",
        "Indah", "Joko", "Kiki", "Lina", "Mira", "Nani", "Oki", "Putra",
        "Qila", "Rini", "Sari", "Tono", "Umi", "Vina", "Wati", "Xena",
        "Yudi", "Zara", "Agus", "Bela", "Candra", "Dina"
    };

    int n = randInt(5, 20);
    cout << n << "\n";

    shuffle(namaPool.begin(), namaPool.end(), rng);

    // Jika n > ukuran pool, gunakan nama "PasienX"
    for (int i = 0; i < n; i++) {
        string nama = (i < (int)namaPool.size()) ? namaPool[i] : ("Pasien" + to_string(i + 1));
        int keparahan = randInt(1, 10);
        cout << nama << " " << keparahan << "\n";
    }

    return 0;
}
