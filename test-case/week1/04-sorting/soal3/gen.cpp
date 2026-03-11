#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    // Jumlah pertemuan (3 hingga 15)
    int n = rng() % 13 + 3;
    cout << n << "\n";

    for(int i = 0; i < n; i++){
        // Waktu mulai antara 1 hingga 100
        int mulai = rng() % 100 + 1;
        // Durasi antara 1 hingga 20
        int durasi = rng() % 20 + 1;
        int selesai = mulai + durasi;
        cout << mulai << " " << selesai << "\n";
    }

    return 0;
}
