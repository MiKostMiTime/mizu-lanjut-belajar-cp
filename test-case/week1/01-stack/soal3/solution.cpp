// Solusi: Histori Browser
// Menggunakan dua stack: satu untuk histori back, satu untuk histori forward
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<string> back_stack;    // histori halaman sebelumnya
    stack<string> forward_stack; // histori halaman berikutnya
    string halaman_saat_ini = "";

    while (n--) {
        string op;
        cin >> op;

        if (op == "VISIT") {
            string url;
            cin >> url;

            // Simpan halaman saat ini ke histori back (jika ada)
            if (!halaman_saat_ini.empty()) {
                back_stack.push(halaman_saat_ini);
            }

            // Pindah ke halaman baru dan hapus semua histori forward
            halaman_saat_ini = url;
            while (!forward_stack.empty()) forward_stack.pop();

        } else if (op == "BACK") {
            // Kembali ke halaman sebelumnya jika ada
            if (!back_stack.empty()) {
                forward_stack.push(halaman_saat_ini);
                halaman_saat_ini = back_stack.top();
                back_stack.pop();
            }

        } else if (op == "FORWARD") {
            // Maju ke halaman berikutnya jika ada
            if (!forward_stack.empty()) {
                back_stack.push(halaman_saat_ini);
                halaman_saat_ini = forward_stack.top();
                forward_stack.pop();
            }

        } else {
            // op == "CURRENT": cetak halaman yang sedang dibuka
            cout << halaman_saat_ini << "\n";
        }
    }

    return 0;
}
