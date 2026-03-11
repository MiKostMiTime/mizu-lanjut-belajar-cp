#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> perm;
bool used[9];

void backtrack() {
    if ((int)perm.size() == n) {
        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << perm[i];
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            used[i] = true;
            perm.push_back(i);
            backtrack();
            perm.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    memset(used, false, sizeof(used));
    backtrack();

    return 0;
}
