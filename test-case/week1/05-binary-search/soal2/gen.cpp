// Generator test case: Menghitung Elemen Tidak Melebihi Batas
// Penggunaan: ./gen <seed> [N] [Q]
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = atoi(argv[1]);
    int n = (argc > 2) ? atoi(argv[2]) : 1000;
    int q = (argc > 3) ? atoi(argv[3]) : 1000;

    mt19937 rng(seed);

    // Generate sorted array with possible duplicates
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = rng() % 1000000000 + 1;
    }
    sort(a.begin(), a.end());

    cout << n << " " << q << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";

    for (int i = 0; i < q; i++) {
        cout << (rng() % 1000000000 + 1) << "\n";
    }

    return 0;
}
