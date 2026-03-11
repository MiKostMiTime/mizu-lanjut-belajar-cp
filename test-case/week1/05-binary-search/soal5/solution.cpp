// Solusi: Pemotongan Tali Optimal
// Binary search pada panjang potongan, maksimalkan L dengan total potongan >= K
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> l(n);
    long long maxl = 0;
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        maxl = max(maxl, l[i]);
    }

    // Check if even L=1 gives enough pieces
    long long total = 0;
    for (int i = 0; i < n; i++) total += l[i];
    if (total < k) {
        cout << 0 << "\n";
        return 0;
    }

    auto count = [&](long long mid) -> long long {
        long long cnt = 0;
        for (int i = 0; i < n; i++) cnt += l[i] / mid;
        return cnt;
    };

    long long lo = 1, hi = maxl, ans = 0;
    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        if (count(mid) >= k) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
