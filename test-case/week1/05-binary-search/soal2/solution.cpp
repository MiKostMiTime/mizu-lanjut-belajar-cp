// Solusi: Menghitung Elemen Tidak Melebihi Batas
// Menggunakan upper_bound untuk menghitung elemen <= X
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    while (q--) {
        int x;
        cin >> x;
        cout << (upper_bound(a.begin(), a.end(), x) - a.begin()) << "\n";
    }

    return 0;
}
