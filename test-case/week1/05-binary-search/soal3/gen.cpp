// Generator test case: Kapasitas Pengiriman Minimum
// Penggunaan: ./gen <seed> [N]
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = atoi(argv[1]);
    int n = (argc > 2) ? atoi(argv[2]) : 1000;

    mt19937 rng(seed);

    int k = rng() % n + 1; // K in [1, N]

    cout << n << " " << k << "\n";
    for (int i = 0; i < n; i++) {
        cout << (rng() % 500 + 1);
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";

    return 0;
}
