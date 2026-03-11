#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int R, C;
    cin >> R >> C;

    vector<string> grid(R);
    int sr = 0, sc = 0, er = 0, ec = 0;

    for (int i = 0; i < R; i++) {
        cin >> grid[i];
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == 'S') { sr = i; sc = j; }
            if (grid[i][j] == 'E') { er = i; ec = j; }
        }
    }

    // Jarak BFS: -1 berarti belum dikunjungi
    vector<vector<int>> jarak(R, vector<int>(C, -1));
    queue<pair<int,int>> q;

    // Mulai BFS dari posisi S
    q.push({sr, sc});
    jarak[sr][sc] = 0;

    // 4 arah: kanan, kiri, bawah, atas
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        // Eksplorasi 4 tetangga
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            // Cek batas, bukan dinding, belum dikunjungi
            if (nx >= 0 && nx < R && ny >= 0 && ny < C &&
                grid[nx][ny] != '#' && jarak[nx][ny] == -1) {
                jarak[nx][ny] = jarak[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    // Output jarak ke E (-1 jika tidak tercapai)
    cout << jarak[er][ec] << "\n";

    return 0;
}
