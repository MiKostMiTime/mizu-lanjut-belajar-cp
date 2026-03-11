#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = atoi(argv[1]);
    int n = (argc > 2) ? atoi(argv[2]) : 20;

    mt19937 rng(seed);

    int t = rng() % 1000001;

    cout << n << " " << t << "\n";
    for (int i = 0; i < n; i++) {
        cout << (rng() % 100000 + 1);
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";

    return 0;
}
