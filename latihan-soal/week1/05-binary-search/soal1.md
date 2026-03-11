# Soal 1 – Pencarian Nilai dalam Array Terurut

## Deskripsi

Diberikan sebuah array bilangan bulat yang sudah terurut secara menaik dan terdiri dari N elemen yang semuanya berbeda. Kamu perlu menjawab Q pertanyaan, di mana setiap pertanyaan menanyakan apakah suatu nilai tertentu ada di dalam array tersebut.

Untuk setiap pertanyaan, jika nilai yang dicari ditemukan, cetak posisinya dalam array (dimulai dari 1). Jika tidak ditemukan, cetak -1. Tantangan utama dalam soal ini adalah menjawab setiap pertanyaan dengan efisien, mengingat ukuran array dan jumlah pertanyaan yang bisa sangat besar.

Gunakan algoritma binary search untuk mencari nilai dalam array terurut secara efisien dengan kompleksitas O(log N) per pertanyaan.

## Format Masukan

Baris pertama berisi dua bilangan bulat N dan Q, yaitu ukuran array dan jumlah pertanyaan.
Baris kedua berisi N bilangan bulat A[1], A[2], ..., A[N] yang terurut secara menaik dan semuanya berbeda.
Q baris berikutnya masing-masing berisi satu bilangan bulat X[i], yaitu nilai yang ingin dicari.

## Format Keluaran

Untuk setiap pertanyaan, cetak satu baris berisi posisi (1-indexed) dari nilai X[i] dalam array, atau -1 jika tidak ditemukan.

## Contoh Masukan 1

```
5 3
2 5 8 12 16
5
1
12
```

## Contoh Keluaran 1

```
2
-1
4
```

### Penjelasan Contoh 1

Nilai 5 berada di posisi ke-2 dalam array. Nilai 1 tidak ada dalam array sehingga jawabannya -1. Nilai 12 berada di posisi ke-4 dalam array.

## Contoh Masukan 2

```
6 4
3 7 11 15 20 25
7
25
10
3
```

## Contoh Keluaran 2

```
2
6
-1
1
```

### Penjelasan Contoh 2

Nilai 7 berada di posisi ke-2. Nilai 25 berada di posisi ke-6. Nilai 10 tidak ada dalam array sehingga jawabannya -1. Nilai 3 berada di posisi ke-1.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N, Q ≤ 100 | 30 |
| 2 | 1 ≤ N, Q ≤ 1.000 | 30 |
| 3 | 1 ≤ N, Q ≤ 100.000 | 40 |

- 1 ≤ N, Q ≤ 100.000
- 1 ≤ A[i], X[i] ≤ 10^9
- Array terurut secara menaik dan semua elemen berbeda
