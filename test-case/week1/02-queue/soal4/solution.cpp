#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> suhu(n);
    for (int i = 0; i < n; i++) cin >> suhu[i];

    // Deque menyimpan INDEKS elemen kandidat maksimum
    // Elemen di depan deque selalu merupakan maksimum jendela saat ini
    deque<int> dq;

    bool pertama = true;
    for (int i = 0; i < n; i++) {
        // Hapus indeks yang sudah keluar dari jendela [i-k+1, i]
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Hapus indeks dari belakang yang nilainya <= suhu[i]
        // (tidak akan pernah menjadi maksimum selagi suhu[i] ada di jendela)
        while (!dq.empty() && suhu[dq.back()] <= suhu[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        // Mulai output setelah jendela pertama penuh (indeks >= k-1)
        if (i >= k - 1) {
            if (!pertama) cout << " ";
            cout << suhu[dq.front()];
            pertama = false;
        }
    }
    cout << "\n";

    return 0;
}
