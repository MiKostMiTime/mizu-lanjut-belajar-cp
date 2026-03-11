#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // LSD Radix Sort: proses dari digit paling kanan (satuan) ke kiri
    int divisor = 1;
    for(int digit = 1; digit <= d; digit++){
        // --- Counting Sort Stabil berdasarkan digit saat ini ---

        // Hitung frekuensi setiap nilai digit (0-9)
        vector<int> cacah(10, 0);
        for(int i = 0; i < n; i++){
            int nilai_digit = (arr[i] / divisor) % 10;
            cacah[nilai_digit]++;
        }

        // Hitung prefix sum: posisi awal setiap ember dalam output
        vector<int> posisi(10, 0);
        for(int k = 1; k < 10; k++){
            posisi[k] = posisi[k-1] + cacah[k-1];
        }

        // Bangun array output secara stabil (kiri ke kanan)
        vector<int> output(n);
        for(int i = 0; i < n; i++){
            int nilai_digit = (arr[i] / divisor) % 10;
            output[posisi[nilai_digit]++] = arr[i];
        }

        // Salin output kembali ke arr
        arr = output;

        // Tampilkan kondisi array setelah pengurutan digit ini
        cout << "Digit ke-" << digit << ":";
        for(int i = 0; i < n; i++){
            // Cetak dengan zero-padding sebanyak D digit
            cout << " " << setfill('0') << setw(d) << arr[i];
        }
        cout << "\n";

        divisor *= 10;
    }

    return 0;
}
