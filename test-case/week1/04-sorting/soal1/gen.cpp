#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    int seed = (argc > 1) ? atoi(argv[1]) : 42;
    mt19937 rng(seed);

    // Daftar nama valid untuk generator
    vector<string> namaPool = {
        "Adi","Budi","Citra","Deni","Eka","Fira","Gani","Hani","Ira","Joko",
        "Kiki","Lina","Mira","Nani","Oki","Pita","Qori","Rini","Sari","Tono",
        "Umi","Vino","Wati","Xian","Yudi","Zara","Bagas","Cahya","Dinda","Erwin"
    };

    // Jumlah siswa (3 hingga 20 untuk test kecil; sesuaikan range)
    int n = rng() % 18 + 3;
    cout << n << "\n";

    // Acak urutan nama dan ambil n nama unik
    shuffle(namaPool.begin(), namaPool.end(), rng);

    for(int i = 0; i < n; i++){
        // Waktu antara 1000 (10.00) hingga 9999 (99.99)
        int waktuInt = rng() % 9000 + 1000;
        int bagianBulat = waktuInt / 100;
        int bagianDesimal = waktuInt % 100;
        cout << namaPool[i] << " "
             << bagianBulat << "."
             << setfill('0') << setw(2) << bagianDesimal
             << "\n";
    }

    return 0;
}
