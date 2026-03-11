// Solusi: Tumpukan Piring
// Simulasi operasi stack sederhana menggunakan std::stack
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<long long> tumpukan;

    while (n--) {
        string op;
        cin >> op;

        if (op == "PUSH") {
            long long x;
            cin >> x;
            tumpukan.push(x);
        } else if (op == "POP") {
            // Buang piring paling atas (dijamin tidak kosong)
            tumpukan.pop();
        } else if (op == "TOP") {
            // Cetak nomor piring paling atas
            cout << tumpukan.top() << "\n";
        } else {
            // op == "EMPTY": cek apakah tumpukan kosong
            cout << (tumpukan.empty() ? "YA" : "TIDAK") << "\n";
        }
    }

    return 0;
}
