#include <bits/stdc++.h>
using namespace std;

int n, ans;
bool col[13], diag1[25], diag2[25];

void solve(int row) {
    if (row == n) {
        ans++;
        return;
    }
    for (int c = 0; c < n; c++) {
        if (!col[c] && !diag1[row - c + n] && !diag2[row + c]) {
            col[c] = diag1[row - c + n] = diag2[row + c] = true;
            solve(row + 1);
            col[c] = diag1[row - c + n] = diag2[row + c] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    ans = 0;
    memset(col, false, sizeof(col));
    memset(diag1, false, sizeof(diag1));
    memset(diag2, false, sizeof(diag2));
    solve(0);
    cout << ans << "\n";

    return 0;
}
