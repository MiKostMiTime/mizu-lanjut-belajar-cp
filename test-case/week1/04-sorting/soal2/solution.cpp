#include<bits/stdc++.h>
using namespace std;

// Menggabungkan dua sub-array dan menghitung jumlah inversi
// arr[l..mid-1] dan arr[mid..r-1]
long long mergeHitung(vector<int>& arr, int l, int r){
    if(r - l <= 1) return 0;

    int mid = (l + r) / 2;

    // Hitung inversi dari sub-array kiri dan kanan secara rekursif
    long long cnt = mergeHitung(arr, l, mid) + mergeHitung(arr, mid, r);

    // Gabungkan dua sub-array yang sudah terurut
    vector<int> temp;
    int i = l, j = mid;

    while(i < mid && j < r){
        if(arr[i] <= arr[j]){
            // Tidak ada inversi baru; arr[i] <= arr[j]
            temp.push_back(arr[i++]);
        } else {
            // arr[i] > arr[j]: semua elemen arr[i..mid-1] lebih besar dari arr[j]
            // sehingga ada (mid - i) inversi baru
            cnt += (long long)(mid - i);
            temp.push_back(arr[j++]);
        }
    }

    // Sisa elemen sub-array kiri
    while(i < mid) temp.push_back(arr[i++]);
    // Sisa elemen sub-array kanan
    while(j < r) temp.push_back(arr[j++]);

    // Salin kembali ke arr
    for(int k = l; k < r; k++) arr[k] = temp[k - l];

    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Hitung total inversi menggunakan merge sort
    cout << mergeHitung(arr, 0, n) << "\n";

    return 0;
}
