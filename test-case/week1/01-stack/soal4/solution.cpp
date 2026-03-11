// Solusi: Nilai Saham Berikutnya (Next Greater Element)
// Menggunakan stack monoton untuk menyelesaikan dalam O(N)
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> harga(n);
    for (int i = 0; i < n; i++) cin >> harga[i];

    // jawaban[i] = harga hari berikutnya yang lebih tinggi, atau -1
    vector<long long> jawaban(n, -1);

    // Stack menyimpan indeks hari yang belum ditemukan jawabannya
    stack<int> st;

    for (int i = 0; i < n; i++) {
        // Selama tumpukan tidak kosong dan harga hari ini lebih besar dari
        // harga pada indeks di atas tumpukan, maka hari ini adalah jawabannya
        while (!st.empty() && harga[st.top()] < harga[i]) {
            jawaban[st.top()] = harga[i];
            st.pop();
        }
        st.push(i);
    }
    // Indeks yang masih tersisa di tumpukan tidak memiliki jawaban → tetap -1

    for (int i = 0; i < n; i++) {
        cout << jawaban[i];
        if (i < n - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}
