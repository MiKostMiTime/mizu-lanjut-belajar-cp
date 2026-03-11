#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Simpan setiap tugas sebagai (deadline, profit, indeks_1based)
    vector<tuple<int, int, int>> tugas(n);
    for (int i = 0; i < n; i++) {
        int profit, deadline;
        cin >> profit >> deadline;
        tugas[i] = {deadline, profit, i + 1};
    }

    // Urutkan berdasarkan deadline (lalu profit, lalu indeks) agar deterministik
    sort(tugas.begin(), tugas.end());

    // Min-heap menyimpan (profit, indeks_tugas) dari tugas-tugas terpilih
    // Jika ukuran heap > deadline saat ini, hapus tugas dengan profit terkecil
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (auto& [deadline, profit, idx] : tugas) {
        pq.push({profit, idx});
        // Kapasitas slot untuk deadline ini adalah sebanyak deadline itu sendiri
        if ((int)pq.size() > deadline) {
            pq.pop(); // Buang tugas paling tidak menguntungkan
        }
    }

    // Kumpulkan hasil
    long long totalProfit = 0;
    vector<int> dipilih;
    while (!pq.empty()) {
        auto [profit, idx] = pq.top();
        pq.pop();
        totalProfit += profit;
        dipilih.push_back(idx);
    }

    sort(dipilih.begin(), dipilih.end());

    cout << totalProfit << "\n";
    for (int i = 0; i < (int)dipilih.size(); i++) {
        if (i > 0) cout << " ";
        cout << dipilih[i];
    }
    cout << "\n";

    return 0;
}
