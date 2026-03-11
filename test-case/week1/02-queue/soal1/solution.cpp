#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Masukkan semua pelanggan ke antrian
    queue<pair<string, int>> antrian; // {nama, waktu_datang}
    for (int i = 0; i < n; i++) {
        string nama;
        int waktu_datang;
        cin >> nama >> waktu_datang;
        antrian.push({nama, waktu_datang});
    }

    int waktu_sekarang = 0; // waktu kasir selesai melayani pelanggan terakhir

    while (!antrian.empty()) {
        auto [nama, waktu_datang] = antrian.front();
        antrian.pop();

        // Pelanggan mulai dilayani setelah kasir bebas atau setelah datang
        int mulai = max(waktu_sekarang, waktu_datang);
        int selesai = mulai + 1; // setiap pelanggan butuh 1 menit

        waktu_sekarang = selesai;
        cout << nama << " " << selesai << "\n";
    }

    return 0;
}
