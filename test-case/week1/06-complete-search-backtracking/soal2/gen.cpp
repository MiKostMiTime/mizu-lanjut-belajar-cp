#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = atoi(argv[1]);
    int n = (argc > 2) ? atoi(argv[2]) : -1;

    mt19937 rng(seed);
    if (n == -1) {
        n = rng() % 8 + 1;
    }

    cout << n << "\n";
    return 0;
}
