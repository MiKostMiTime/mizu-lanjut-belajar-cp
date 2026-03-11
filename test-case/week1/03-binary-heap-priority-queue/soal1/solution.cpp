#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Simpan sebagai (keparahan, -urutan_datang, nama)
    // Max-heap: keparahan lebih tinggi = prioritas lebih tinggi
    // Untuk keparahan sama: -urutan_datang lebih besar berarti datang lebih awal (FIFO)
    priority_queue<tuple<int, int, string>> pq;

    for (int i = 0; i < n; i++) {
        string nama;
        int keparahan;
        cin >> nama >> keparahan;
        pq.push({keparahan, -i, nama});
    }

    while (!pq.empty()) {
        auto [kep, neg_urutan, nama] = pq.top();
        pq.pop();
        cout << nama << "\n";
    }

    return 0;
}
