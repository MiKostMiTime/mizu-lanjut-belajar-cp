#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    // Parameter: jumlah elemen (5-15) dan jumlah digit (1-4)
    int n = rng() % 11 + 5;
    int d = rng() % 4 + 1;

    // Batas atas: 10^d - 1
    int batas = 1;
    for(int k = 0; k < d; k++) batas *= 10;
    batas--; // 10^d - 1

    cout << n << " " << d << "\n";

    for(int i = 0; i < n; i++){
        int val = rng() % (batas + 1);
        // Cetak dengan zero-padding sebanyak d digit
        cout << setfill('0') << setw(d) << val;
        if(i < n - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}
