// Generator test case: Nilai Saham Berikutnya
// Penggunaan: ./gen <seed> [N]
// Menghasilkan array harga saham secara acak
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    int n = (argc > 2) ? atoi(argv[2]) : 100000;
    n = max(1, min(n, 100000));

    cout << n << "\n";

    int mode = seed % 4;

    if (mode == 0) {
        // Harga acak murni
        for (int i = 0; i < n; i++) {
            long long p = (long long)(rng() % 1000000000) + 1;
            cout << p;
            if (i < n - 1) cout << " ";
        }
    } else if (mode == 1) {
        // Harga menurun (worst case: semua jawaban -1)
        long long p = (long long)(rng() % 1000000000) + n;
        for (int i = 0; i < n; i++) {
            cout << max(1LL, p - (long long)i);
            if (i < n - 1) cout << " ";
        }
    } else if (mode == 2) {
        // Harga naik (setiap elemen jawabannya adalah elemen berikutnya)
        long long p = 1;
        for (int i = 0; i < n; i++) {
            cout << p;
            p += rng() % 100 + 1;
            if (i < n - 1) cout << " ";
        }
    } else {
        // Harga dengan banyak nilai duplikat
        for (int i = 0; i < n; i++) {
            long long p = (long long)(rng() % 1000) + 1;
            cout << p;
            if (i < n - 1) cout << " ";
        }
    }

    cout << "\n";
    return 0;
}
