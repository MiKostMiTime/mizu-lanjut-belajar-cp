# Soal 5 – Pemotongan Tali Optimal

## Deskripsi

Diberikan N buah tali dengan panjang bilangan bulat masing-masing. Kamu ingin memotong semua tali menjadi potongan-potongan dengan panjang yang sama persis, yaitu L satuan. Setiap potongan sisa yang lebih pendek dari L dibuang. Tujuanmu adalah mendapatkan setidaknya K potongan dengan panjang L.

Tentukan panjang potongan integer maksimum L ≥ 1 sedemikian sehingga total potongan yang didapatkan dari semua tali minimal K buah. Jika tidak mungkin mendapatkan K potongan bahkan dengan L=1, cetak 0.

Masalah ini diselesaikan dengan binary search pada jawaban (panjang potongan L). Untuk setiap kandidat L, hitung total potongan yang didapat sebagai jumlah floor(panjang[i] / L) untuk semua tali. Cari nilai L terbesar yang masih menghasilkan total potongan ≥ K.

## Format Masukan

Baris pertama berisi dua bilangan bulat N dan K, yaitu jumlah tali dan jumlah potongan minimum yang diinginkan.
Baris kedua berisi N bilangan bulat L[1], L[2], ..., L[N] yang menyatakan panjang masing-masing tali.

## Format Keluaran

Cetak satu bilangan bulat, yaitu panjang potongan integer maksimum yang menghasilkan setidaknya K potongan. Cetak 0 jika tidak mungkin.

## Contoh Masukan 1

```
4 11
8 11 6 4
```

## Contoh Keluaran 1

```
2
```

### Penjelasan Contoh 1

Dengan L=2: dari tali [8,11,6,4] didapat [4,5,3,2]=14 potongan ≥ 11. Dengan L=3: didapat [2,3,2,1]=8 potongan < 11. Sehingga panjang potongan maksimum adalah 2.

## Contoh Masukan 2

```
3 6
15 12 9
```

## Contoh Keluaran 2

```
5
```

### Penjelasan Contoh 2

Dengan L=5: dari tali [15,12,9] didapat [3,2,1]=6 potongan = 6. Dengan L=6: didapat [2,2,1]=5 potongan < 6. Sehingga panjang potongan maksimum adalah 5.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 10, 1 ≤ K ≤ 1.000 | 30 |
| 2 | 1 ≤ N ≤ 1.000, 1 ≤ K ≤ 10^6 | 30 |
| 3 | 1 ≤ N ≤ 100.000, 1 ≤ K ≤ 10^7 | 40 |

- 1 ≤ N ≤ 100.000
- 1 ≤ K ≤ 10^7
- 1 ≤ L[i] ≤ 10^7
