#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // 5 antrian terpisah untuk setiap level prioritas (1 terendah, 5 tertinggi)
    // Setiap elemen: {nama, jumlah_halaman}
    queue<pair<string,int>> antrian[6]; // indeks 1..5

    for (int i = 0; i < n; i++) {
        string nama;
        int halaman, prioritas;
        cin >> nama >> halaman >> prioritas;
        antrian[prioritas].push({nama, halaman});
    }

    int total_halaman = 0; // akumulasi halaman yang sudah dicetak

    // Cetak dari prioritas tertinggi (5) ke terendah (1)
    // Dalam setiap prioritas, urutan FIFO dipertahankan oleh queue
    for (int p = 5; p >= 1; p--) {
        while (!antrian[p].empty()) {
            auto [nama, halaman] = antrian[p].front();
            antrian[p].pop();
            total_halaman += halaman;
            cout << nama << " " << total_halaman << "\n";
        }
    }

    return 0;
}
