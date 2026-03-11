#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    auto randInt = [&](int lo, int hi) -> int {
        return lo + (int)(rng() % (hi - lo + 1));
    };

    int n = randInt(5, 30);
    int k = randInt(1, n);

    cout << n << " " << k << "\n";

    // Hasilkan n nilai acak dalam rentang [1, 100]
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << randInt(1, 100);
    }
    cout << "\n";

    return 0;
}
