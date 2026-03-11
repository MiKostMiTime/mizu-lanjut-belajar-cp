#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = atoi(argv[1]);
    int n = (argc > 2) ? atoi(argv[2]) : -1;
    int m = (argc > 3) ? atoi(argv[3]) : -1;

    mt19937 rng(seed);
    if (n == -1) n = rng() % 15 + 1;
    if (m == -1) m = rng() % 15 + 1;

    cout << n << " " << m << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i == 0 && j == 0) || (i == n-1 && j == m-1)) {
                cout << '.';
            } else {
                cout << (rng() % 5 == 0 ? '*' : '.');
            }
        }
        cout << "\n";
    }

    return 0;
}
