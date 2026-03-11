# Soal 2 – Menghitung Elemen Tidak Melebihi Batas

## Deskripsi

Diberikan sebuah array bilangan bulat yang sudah terurut secara menaik dengan N elemen (boleh ada duplikat). Kamu perlu menjawab Q pertanyaan, di mana setiap pertanyaan menanyakan berapa banyak elemen dalam array yang nilainya tidak melebihi (kurang dari atau sama dengan) suatu batas tertentu.

Masalah ini sering muncul dalam berbagai konteks, seperti menghitung berapa banyak produk yang harganya tidak melebihi anggaran, atau berapa banyak siswa yang nilainya tidak melebihi suatu ambang batas. Dengan array yang sudah terurut, kita dapat menjawab setiap pertanyaan secara efisien.

Gunakan algoritma binary search dengan upper_bound untuk menemukan posisi elemen pertama yang lebih besar dari batas yang diberikan. Jumlah elemen yang tidak melebihi batas adalah indeks dari posisi tersebut.

## Format Masukan

Baris pertama berisi dua bilangan bulat N dan Q, yaitu ukuran array dan jumlah pertanyaan.
Baris kedua berisi N bilangan bulat A[1], A[2], ..., A[N] yang terurut secara menaik.
Q baris berikutnya masing-masing berisi satu bilangan bulat X[i], yaitu batas nilai yang ditanyakan.

## Format Keluaran

Untuk setiap pertanyaan, cetak satu baris berisi jumlah elemen dalam array yang nilainya tidak melebihi X[i].

## Contoh Masukan 1

```
6 3
1 3 3 5 7 9
4
3
8
```

## Contoh Keluaran 1

```
3
3
5
```

### Penjelasan Contoh 1

Untuk X=4: elemen yang tidak melebihi 4 adalah {1, 3, 3}, sehingga jawabannya 3. Untuk X=3: elemen yang tidak melebihi 3 adalah {1, 3, 3}, sehingga jawabannya 3. Untuk X=8: elemen yang tidak melebihi 8 adalah {1, 3, 3, 5, 7}, sehingga jawabannya 5.

## Contoh Masukan 2

```
7 4
2 4 4 6 6 8 10
5
4
9
1
```

## Contoh Keluaran 2

```
3
3
6
0
```

### Penjelasan Contoh 2

Untuk X=5: elemen yang tidak melebihi 5 adalah {2, 4, 4}, sehingga jawabannya 3. Untuk X=4: elemen yang tidak melebihi 4 adalah {2, 4, 4}, sehingga jawabannya 3. Untuk X=9: elemen yang tidak melebihi 9 adalah {2, 4, 4, 6, 6, 8}, sehingga jawabannya 6. Untuk X=1: tidak ada elemen yang tidak melebihi 1, sehingga jawabannya 0.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N, Q ≤ 100 | 30 |
| 2 | 1 ≤ N, Q ≤ 1.000 | 30 |
| 3 | 1 ≤ N, Q ≤ 100.000 | 40 |

- 1 ≤ N, Q ≤ 100.000
- 1 ≤ A[i], X[i] ≤ 10^9
- Array terurut secara menaik (boleh ada duplikat)
