// Generator test case: Pencarian Nilai dalam Array Terurut
// Penggunaan: ./gen <seed> [N] [Q]
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = atoi(argv[1]);
    int n = (argc > 2) ? atoi(argv[2]) : 1000;
    int q = (argc > 3) ? atoi(argv[3]) : 1000;

    mt19937 rng(seed);

    // Generate N distinct sorted integers in [1, 1e9]
    set<int> st;
    while ((int)st.size() < n) {
        st.insert(rng() % 1000000000 + 1);
    }
    vector<int> a(st.begin(), st.end());

    cout << n << " " << q << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";

    // 50% queries from array, 50% random
    for (int i = 0; i < q; i++) {
        if (rng() % 2 == 0) {
            cout << a[rng() % n] << "\n";
        } else {
            cout << (rng() % 1000000000 + 1) << "\n";
        }
    }

    return 0;
}
