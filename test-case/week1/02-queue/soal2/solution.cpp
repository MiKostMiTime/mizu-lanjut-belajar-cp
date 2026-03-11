#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, m;
    cin >> n >> k >> m;

    // Inisialisasi antrian melingkar dengan anak bernomor 1..N
    queue<int> antrian;
    for (int i = 1; i <= n; i++) {
        antrian.push(i);
    }

    int penerima_terakhir = -1;

    for (int giliran = 0; giliran < m; giliran++) {
        // Lewatkan pesan K-1 posisi (pindahkan K-1 anak dari depan ke belakang)
        for (int langkah = 0; langkah < k - 1; langkah++) {
            antrian.push(antrian.front());
            antrian.pop();
        }

        // Anak ke-K menerima pesan (posisi depan antrian sekarang)
        penerima_terakhir = antrian.front();

        // Pindahkan penerima ke belakang agar penghitungan selanjutnya
        // dimulai dari anak berikutnya
        antrian.push(antrian.front());
        antrian.pop();
    }

    cout << penerima_terakhir << "\n";

    return 0;
}
