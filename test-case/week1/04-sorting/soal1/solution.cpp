#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Simpan waktu sebagai string agar perbandingan aman
    // Format waktu selalu XX.XX (5 karakter), sehingga urutan leksikografis = urutan numerik
    vector<pair<string,string>> peserta(n); // {waktu, nama}
    for(int i = 0; i < n; i++){
        string nama, waktu;
        cin >> nama >> waktu;
        peserta[i] = {waktu, nama};
    }

    // Urutkan: pertama berdasarkan waktu (ascending), lalu nama (alfabetis)
    sort(peserta.begin(), peserta.end());

    // Cetak peringkat
    for(int i = 0; i < n; i++){
        cout << i + 1 << " " << peserta[i].second << " " << peserta[i].first << "\n";
    }

    return 0;
}
