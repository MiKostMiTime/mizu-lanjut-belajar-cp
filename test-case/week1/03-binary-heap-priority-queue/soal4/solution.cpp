#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    vector<vector<int>> arr(k);

    // Min-heap menyimpan (nilai, indeks_array, indeks_elemen)
    // Selalu ambil elemen terkecil dari kepala semua array
    priority_queue<tuple<int, int, int>,
                   vector<tuple<int, int, int>>,
                   greater<tuple<int, int, int>>> pq;

    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        arr[i].resize(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
        // Masukkan elemen pertama setiap array ke heap
        if (n > 0) {
            pq.push({arr[i][0], i, 0});
        }
    }

    bool pertama = true;
    while (!pq.empty()) {
        auto [val, ai, ei] = pq.top();
        pq.pop();

        if (!pertama) cout << " ";
        cout << val;
        pertama = false;

        // Masukkan elemen berikutnya dari array yang sama
        if (ei + 1 < (int)arr[ai].size()) {
            pq.push({arr[ai][ei + 1], ai, ei + 1});
        }
    }
    cout << "\n";

    return 0;
}
