#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    auto randInt = [&](int lo, int hi) -> int {
        return lo + (int)(rng() % (hi - lo + 1));
    };

    int n = randInt(3, 10);
    cout << n << "\n";

    // Buat profit unik agar output deterministik (tidak ada ambiguitas tugas terpilih)
    vector<int> profitPool;
    for (int p = 1; p <= 1000; p++) profitPool.push_back(p);
    shuffle(profitPool.begin(), profitPool.end(), rng);

    for (int i = 0; i < n; i++) {
        int profit = profitPool[i];
        int deadline = randInt(1, n);
        cout << profit << " " << deadline << "\n";
    }

    return 0;
}
