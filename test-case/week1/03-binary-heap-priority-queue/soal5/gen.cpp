#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    auto randInt = [&](int lo, int hi) -> int {
        return lo + (int)(rng() % (hi - lo + 1));
    };

    int n = randInt(2, 10);
    cout << n << "\n";

    // Hasilkan n karakter unik A–Z beserta frekuensinya
    for (int i = 0; i < n; i++) {
        char c = 'A' + i;
        int freq = randInt(1, 100);
        cout << c << " " << freq << "\n";
    }

    return 0;
}
