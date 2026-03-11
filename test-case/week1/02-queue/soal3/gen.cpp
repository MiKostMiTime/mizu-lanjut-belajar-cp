#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    int R = rng() % 8 + 3;  // baris: 3 sampai 10
    int C = rng() % 8 + 3;  // kolom: 3 sampai 10

    cout << R << " " << C << "\n";

    vector<string> grid(R, string(C, '.'));

    // Tambahkan dinding secara acak (sekitar 25% sel)
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (rng() % 4 == 0) {
                grid[i][j] = '#';
            }
        }
    }

    // Pilih posisi S (bukan dinding)
    int sr, sc;
    do {
        sr = rng() % R;
        sc = rng() % C;
    } while (grid[sr][sc] == '#');

    // Pilih posisi E (bukan dinding, bukan S)
    int er, ec;
    do {
        er = rng() % R;
        ec = rng() % C;
    } while (grid[er][ec] == '#' || (er == sr && ec == sc));

    grid[sr][sc] = 'S';
    grid[er][ec] = 'E';

    for (int i = 0; i < R; i++) {
        cout << grid[i] << "\n";
    }

    return 0;
}
