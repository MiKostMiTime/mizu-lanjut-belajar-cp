#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> nilai(n);
    for(int i = 0; i < n; i++) cin >> nilai[i];

    // Buat salinan terurut untuk pencarian biner
    vector<int> terurut(nilai);
    sort(terurut.begin(), terurut.end());

    for(int i = 0; i < n; i++){
        // Hitung jumlah siswa dengan nilai LEBIH TINGGI (untuk menentukan peringkat)
        // upper_bound menunjuk ke elemen pertama yang > nilai[i]
        int lebih_tinggi = (int)(terurut.end() - upper_bound(terurut.begin(), terurut.end(), nilai[i]));
        int peringkat = lebih_tinggi + 1;

        // Hitung jumlah siswa dengan nilai LEBIH RENDAH (untuk persentil)
        // lower_bound menunjuk ke elemen pertama yang >= nilai[i]
        int lebih_rendah = (int)(lower_bound(terurut.begin(), terurut.end(), nilai[i]) - terurut.begin());
        double persentil = (double)lebih_rendah / n * 100.0;

        cout << peringkat << " " << fixed << setprecision(2) << persentil << "\n";
    }

    return 0;
}
