// Solusi: Kalkulator Ekspresi Postfix
// Menggunakan stack untuk mengevaluasi ekspresi postfix (Reverse Polish Notation)
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore(); // abaikan newline setelah angka T

    while (t--) {
        string baris;
        getline(cin, baris);

        stack<long long> st;
        istringstream iss(baris);
        string token;

        while (iss >> token) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // Ambil dua operand teratas (urutan penting!)
                long long b = st.top(); st.pop(); // operand kedua
                long long a = st.top(); st.pop(); // operand pertama

                if (token == "+")      st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else                   st.push(a / b); // pembagian bulat
            } else {
                // Token adalah bilangan, masukkan ke tumpukan
                st.push(stoll(token));
            }
        }

        // Hasil akhir adalah satu-satunya nilai di tumpukan
        cout << st.top() << "\n";
    }

    return 0;
}
