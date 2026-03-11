#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int,int>> pertemuan(n);
    for(int i = 0; i < n; i++){
        cin >> pertemuan[i].first >> pertemuan[i].second; // {mulai, selesai}
    }

    // Algoritma Greedy: urutkan berdasarkan waktu selesai (ascending)
    sort(pertemuan.begin(), pertemuan.end(), [](const pair<int,int>& a, const pair<int,int>& b){
        return a.second < b.second;
    });

    int jumlah = 0;
    int selesai_terakhir = 0; // Waktu selesai pertemuan terakhir yang dihadiri

    for(int i = 0; i < n; i++){
        // Hadiri pertemuan ini jika dimulai tidak sebelum pertemuan terakhir selesai
        if(pertemuan[i].first >= selesai_terakhir){
            jumlah++;
            selesai_terakhir = pertemuan[i].second;
        }
    }

    cout << jumlah << "\n";

    return 0;
}
