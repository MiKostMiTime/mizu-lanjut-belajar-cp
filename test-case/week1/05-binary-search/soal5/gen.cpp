// Generator test case: Pemotongan Tali Optimal
// Penggunaan: ./gen <seed> [N]
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = atoi(argv[1]);
    int n = (argc > 2) ? atoi(argv[2]) : 1000;

    mt19937 rng(seed);

    vector<long long> l(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        l[i] = rng() % 10000000 + 1;
        total += l[i];
    }

    // K = random fraction of total, capped at 1e7
    long long k = (long long)(rng() % total) / 2 + 1;
    k = min(k, (long long)10000000);
    k = max(k, 1LL);

    cout << n << " " << k << "\n";
    for (int i = 0; i < n; i++) {
        cout << l[i];
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";

    return 0;
}
