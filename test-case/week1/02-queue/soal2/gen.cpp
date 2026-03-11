#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    int n = rng() % 18 + 3;   // N: 3 sampai 20
    int k = rng() % n + 1;    // K: 1 sampai N
    int m = rng() % 100 + 1;  // M: 1 sampai 100

    cout << n << " " << k << " " << m << "\n";

    return 0;
}
