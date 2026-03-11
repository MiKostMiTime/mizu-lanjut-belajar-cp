// Solusi: Ekspresi Kurung
// Menggunakan stack untuk memvalidasi pasangan kurung
#include <bits/stdc++.h>
using namespace std;

// Mengembalikan true jika string s adalah ekspresi kurung yang valid
bool cekValid(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            // Kurung buka: masukkan ke tumpukan
            st.push(c);
        } else {
            // Kurung tutup: periksa apakah tumpukan kosong atau tidak cocok
            if (st.empty()) return false;

            char atas = st.top();
            st.pop();

            if (c == ')' && atas != '(') return false;
            if (c == ']' && atas != '[') return false;
            if (c == '}' && atas != '{') return false;
        }
    }

    // Valid hanya jika semua kurung buka sudah ditutup
    return st.empty();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << (cekValid(s) ? "VALID" : "TIDAK VALID") << "\n";
    }

    return 0;
}
