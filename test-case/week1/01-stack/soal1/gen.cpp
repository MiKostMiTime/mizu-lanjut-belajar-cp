// Generator test case: Tumpukan Piring
// Penggunaan: ./gen <seed> [ukuran]
// Menghasilkan operasi PUSH/POP/TOP/EMPTY yang valid (stack tidak pernah kosong saat POP/TOP)
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    // Ukuran default: 1000, bisa diubah via argv[2]
    int n = (argc > 2) ? atoi(argv[2]) : 1000;
    n = max(1, min(n, 100000));

    cout << n << "\n";

    int ukuran_stack = 0; // lacak ukuran stack agar tidak POP saat kosong

    for (int i = 0; i < n; i++) {
        int r = rng() % 4;

        if (ukuran_stack == 0) {
            // Stack kosong: hanya boleh PUSH atau EMPTY
            if (r == 0 || r == 1 || r == 2) {
                // Konversi ke PUSH agar tidak melanggar batasan
                r = 0;
            }
            // r == 3 tetap EMPTY
        }

        if (r == 0) {
            // PUSH
            long long x = (long long)(rng() % 1000000000) + 1;
            cout << "PUSH " << x << "\n";
            ukuran_stack++;
        } else if (r == 1) {
            // POP (hanya jika stack tidak kosong, dijamin oleh kondisi di atas)
            cout << "POP\n";
            ukuran_stack--;
        } else if (r == 2) {
            // TOP (hanya jika stack tidak kosong, dijamin oleh kondisi di atas)
            cout << "TOP\n";
        } else {
            // EMPTY
            cout << "EMPTY\n";
        }
    }

    return 0;
}
