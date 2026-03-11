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

    // K = random value in [1, min(total/2, 1e7)] using proper distribution
    long long k_max = min(total / 2 + 1, (long long)10000000);
    k_max = max(k_max, 1LL);
    uniform_int_distribution<long long> dist_k(1, k_max);
    long long k = dist_k(rng);

    cout << n << " " << k << "\n";
    for (int i = 0; i < n; i++) {
        cout << l[i];
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";

    return 0;
}
