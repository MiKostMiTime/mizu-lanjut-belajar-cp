#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    // Min-heap berukuran K untuk mencari K nilai terbesar secara efisien
    // Elemen terkecil di heap adalah "batas bawah" K nilai terbesar saat ini
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        int nilai;
        cin >> nilai;
        pq.push(nilai);
        // Jika ukuran heap melebihi K, keluarkan nilai terkecil
        if ((int)pq.size() > k) {
            pq.pop();
        }
    }

    // Kumpulkan K nilai terbesar dari heap
    vector<int> hasil;
    while (!pq.empty()) {
        hasil.push_back(pq.top());
        pq.pop();
    }

    // Tampilkan dalam urutan menurun
    sort(hasil.rbegin(), hasil.rend());
    for (int x : hasil) {
        cout << x << "\n";
    }

    return 0;
}
