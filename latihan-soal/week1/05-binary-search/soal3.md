# Soal 3 – Kapasitas Pengiriman Minimum

## Deskripsi

Sebuah perusahaan logistik memiliki N paket yang harus dikirimkan dalam urutan tertentu (tidak boleh diubah urutannya). Perusahaan memiliki tepat K hari untuk menyelesaikan semua pengiriman. Setiap hari, perusahaan mengirimkan sejumlah paket berurutan, dan kapasitas truk (total berat yang bisa diangkut dalam satu hari) harus sama setiap harinya.

Tugas kamu adalah menentukan kapasitas minimum truk yang dibutuhkan agar semua paket dapat dikirimkan dalam tepat K hari. Kapasitas truk harus cukup untuk mengangkut setidaknya satu paket per hari, dan paket tidak boleh dipecah (setiap paket harus dikirim utuh dalam satu hari).

Masalah ini dapat diselesaikan dengan binary search pada jawaban (kapasitas). Untuk setiap kandidat kapasitas, kita dapat mengecek secara greedy apakah pengiriman dapat diselesaikan dalam K hari atau kurang.

## Format Masukan

Baris pertama berisi dua bilangan bulat N dan K, yaitu jumlah paket dan jumlah hari yang tersedia.
Baris kedua berisi N bilangan bulat W[1], W[2], ..., W[N] yang menyatakan berat masing-masing paket.

## Format Keluaran

Cetak satu bilangan bulat, yaitu kapasitas minimum truk yang dibutuhkan.

## Contoh Masukan 1

```
5 2
3 2 2 4 1
```

## Contoh Keluaran 1

```
7
```

### Penjelasan Contoh 1

Dengan kapasitas 7: hari pertama mengangkut paket [3,2,2]=7, hari kedua mengangkut paket [4,1]=5. Total 2 hari, sehingga kapasitas 7 cukup. Dengan kapasitas 6: greedy menghasilkan [3,2]=5, [2,4]=6, [1]=1, membutuhkan 3 hari > 2. Sehingga kapasitas minimum adalah 7.

## Contoh Masukan 2

```
7 3
1 2 3 4 5 6 7
```

## Contoh Keluaran 2

```
11
```

### Penjelasan Contoh 2

Dengan kapasitas 11: [1,2,3,4]=10, [5,6]=11, [7]=7, total 3 hari. Dengan kapasitas 10: [1,2,3,4]=10, [5]=5, [6,7]=13>10 tidak bisa, sehingga [5,6]=11>10 tidak bisa, [6]=6, [7]=7, membutuhkan lebih dari 3 hari. Sehingga kapasitas minimum adalah 11.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 10 | 30 |
| 2 | 1 ≤ N ≤ 1.000 | 30 |
| 3 | 1 ≤ N ≤ 100.000 | 40 |

- 1 ≤ K ≤ N ≤ 100.000
- 1 ≤ W[i] ≤ 500
