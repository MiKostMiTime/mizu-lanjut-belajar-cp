// Solusi: Kapasitas Pengiriman Minimum
// Binary search pada jawaban dengan pengecekan greedy
#include <bits/stdc++.h>
using namespace std;

bool feasible(vector<int>& w, long long cap, int k) {
    int days = 1;
    long long cur = 0;
    for (int x : w) {
        if (x > cap) return false;
        if (cur + x > cap) {
            days++;
            cur = 0;
        }
        cur += x;
    }
    return days <= k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> w(n);
    long long lo = 0, hi = 0;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
        lo = max(lo, (long long)w[i]);
        hi += w[i];
    }

    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (feasible(w, mid, k)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }

    cout << lo << "\n";

    return 0;
}
