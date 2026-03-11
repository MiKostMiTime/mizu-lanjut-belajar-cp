#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = atoi(argv[1]);
    int n = (argc > 2) ? atoi(argv[2]) : 20;

    mt19937 rng(seed);

    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << (rng() % 1000000 + 1);
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";

    return 0;
}
