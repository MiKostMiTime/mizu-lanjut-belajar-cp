#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    // Jumlah siswa (5 hingga 20)
    int n = rng() % 16 + 5;
    cout << n << "\n";

    for(int i = 0; i < n; i++){
        // Nilai antara 50 hingga 100 (realistis untuk ujian)
        int nilai = rng() % 51 + 50;
        cout << nilai;
        if(i < n - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}
