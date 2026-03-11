#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    auto randInt = [&](int lo, int hi) -> int {
        return lo + (int)(rng() % (hi - lo + 1));
    };

    int k = randInt(2, 5);
    cout << k << "\n";

    for (int i = 0; i < k; i++) {
        int n = randInt(2, 8);
        cout << n;

        // Buat array terurut menaik dengan selisih acak
        int cur = randInt(1, 10);
        for (int j = 0; j < n; j++) {
            cout << " " << cur;
            cur += randInt(1, 15); // Naikkan nilai secara acak
        }
        cout << "\n";
    }

    return 0;
}
