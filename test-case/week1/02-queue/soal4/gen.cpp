#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    int n = rng() % 16 + 5;        // N: 5 sampai 20
    int k = rng() % (n - 1) + 2;  // K: 2 sampai N

    cout << n << " " << k << "\n";

    for (int i = 0; i < n; i++) {
        int suhu = rng() % 100 + 1; // suhu: 1 sampai 100
        if (i > 0) cout << " ";
        cout << suhu;
    }
    cout << "\n";

    return 0;
}
