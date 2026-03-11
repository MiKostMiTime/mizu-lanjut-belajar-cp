// Generator test case: Penempatan Sapi di Kandang
// Penggunaan: ./gen <seed> [N] [C]
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = atoi(argv[1]);
    int n = (argc > 2) ? atoi(argv[2]) : 1000;

    mt19937 rng(seed);

    int c = (argc > 3) ? atoi(argv[3]) : max(2, n / 3);
    c = max(2, min(c, n));

    // Generate N distinct positions in [1, 1e9]
    set<long long> st;
    while ((int)st.size() < n) {
        st.insert((long long)(rng() % 1000000000) + 1);
    }

    cout << n << " " << c << "\n";
    for (long long p : st) {
        cout << p << "\n";
    }

    return 0;
}
