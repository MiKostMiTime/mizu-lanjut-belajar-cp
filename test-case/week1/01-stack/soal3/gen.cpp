// Generator test case: Histori Browser
// Penggunaan: ./gen <seed> [N]
// Menghasilkan N operasi browser yang valid
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    int n = (argc > 2) ? atoi(argv[2]) : 500;
    n = max(1, min(n, 100000));

    // Daftar URL contoh yang mungkin dikunjungi
    vector<string> daftar_url = {
        "google.com", "youtube.com", "github.com", "wikipedia.org",
        "stackoverflow.com", "twitter.com", "facebook.com", "instagram.com",
        "reddit.com", "linkedin.com", "amazon.com", "netflix.com",
        "berita.id", "olahraga.net", "teknologi.co.id", "musik.com",
        "belajar.id", "kampus.ac.id", "toko.com", "forum.net"
    };

    cout << n << "\n";

    bool ada_halaman = false;    // apakah sudah ada halaman saat ini
    bool ada_back = false;       // perkiraan apakah histori back ada
    bool ada_forward = false;    // perkiraan apakah histori forward ada
    int ukuran_back = 0;
    int ukuran_forward = 0;

    for (int i = 0; i < n; i++) {
        // Tentukan operasi yang mungkin
        // Selalu boleh VISIT, tapi CURRENT hanya jika sudah ada halaman
        int r = rng() % 5;

        if (!ada_halaman || r == 0) {
            // VISIT
            string url = daftar_url[rng() % daftar_url.size()];
            cout << "VISIT " << url << "\n";
            if (ada_halaman) ukuran_back++;
            ada_halaman = true;
            ukuran_forward = 0;
            ada_back = (ukuran_back > 0);
            ada_forward = false;
        } else if (r == 1) {
            // BACK
            cout << "BACK\n";
            if (ukuran_back > 0) {
                ukuran_forward++;
                ukuran_back--;
                ada_forward = true;
                ada_back = (ukuran_back > 0);
            }
        } else if (r == 2) {
            // FORWARD
            cout << "FORWARD\n";
            if (ukuran_forward > 0) {
                ukuran_back++;
                ukuran_forward--;
                ada_back = true;
                ada_forward = (ukuran_forward > 0);
            }
        } else {
            // CURRENT
            cout << "CURRENT\n";
        }
    }

    return 0;
}
