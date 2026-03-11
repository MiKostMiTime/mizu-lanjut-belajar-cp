#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    // Jumlah elemen (5 hingga 20 untuk test kecil-menengah)
    int n = rng() % 16 + 5;
    cout << n << "\n";

    for(int i = 0; i < n; i++){
        // Nilai antara 1 hingga 1000
        int val = rng() % 1000 + 1;
        cout << val;
        if(i < n - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}
