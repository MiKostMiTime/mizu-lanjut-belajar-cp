// Solusi: Penempatan Sapi di Kandang
// Binary search pada jawaban, maksimalkan jarak minimum antar sapi
#include <bits/stdc++.h>
using namespace std;

bool feasible(vector<long long>& pos, long long d, int c) {
    int cnt = 1;
    long long last = pos[0];
    for (int i = 1; i < (int)pos.size(); i++) {
        if (pos[i] - last >= d) {
            cnt++;
            last = pos[i];
        }
    }
    return cnt >= c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    cin >> n >> c;

    vector<long long> pos(n);
    for (int i = 0; i < n; i++) cin >> pos[i];
    sort(pos.begin(), pos.end());

    long long lo = 1, hi = pos[n - 1] - pos[0];
    long long ans = 0;

    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        if (feasible(pos, mid, c)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
