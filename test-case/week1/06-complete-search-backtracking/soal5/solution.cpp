#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a(n);
    long long total = 0;
    for (int i = 0; i < n; i++) { cin >> a[i]; total += a[i]; }

    long long ans = LLONG_MAX;
    for (int mask = 1; mask < (1 << n) - 1; mask++) {
        long long sum1 = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) sum1 += a[i];
        }
        long long sum2 = total - sum1;
        ans = min(ans, abs(sum1 - sum2));
    }

    cout << ans << "\n";
    return 0;
}
