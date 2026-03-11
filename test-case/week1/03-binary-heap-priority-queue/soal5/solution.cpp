#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Min-heap untuk membangun pohon Huffman
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 0; i < n; i++) {
        char c;
        long long freq;
        cin >> c >> freq;
        pq.push(freq);
    }

    // Kasus khusus: hanya 1 karakter → setiap kemunculan dikodekan 1 bit
    if (n == 1) {
        cout << pq.top() << "\n";
        return 0;
    }

    // Bangun pohon Huffman: gabungkan dua simpul terkecil berulang kali
    // Total bit = jumlah semua nilai simpul internal
    long long totalBit = 0;
    while (pq.size() > 1) {
        long long a = pq.top(); pq.pop();
        long long b = pq.top(); pq.pop();
        long long gabung = a + b;
        totalBit += gabung;  // Bobot simpul internal = kontribusi ke total bit
        pq.push(gabung);
    }

    cout << totalBit << "\n";

    return 0;
}
