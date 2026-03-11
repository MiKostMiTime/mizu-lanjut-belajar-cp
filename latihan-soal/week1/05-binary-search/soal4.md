# Soal 4 – Penempatan Sapi di Kandang

## Deskripsi

Seorang peternak memiliki N kandang yang terletak di berbagai posisi pada garis bilangan. Ia ingin menempatkan C ekor sapi ke dalam kandang-kandang tersebut (satu sapi per kandang) sedemikian sehingga jarak minimum antara dua sapi yang bertetangga sejauh mungkin. Hal ini bertujuan agar sapi-sapi tidak saling mengganggu satu sama lain.

Tugasmu adalah menentukan jarak minimum maksimum yang dapat dicapai antara dua sapi manapun. Dengan kata lain, cari penempatan C sapi pada N kandang yang memaksimalkan jarak terdekat antara dua sapi.

Masalah ini diselesaikan dengan binary search pada jawaban (jarak minimum). Untuk setiap kandidat jarak minimum d, kita dapat mengecek secara greedy apakah mungkin menempatkan C sapi dengan jarak antar sapi setidaknya d.

## Format Masukan

Baris pertama berisi dua bilangan bulat N dan C, yaitu jumlah kandang dan jumlah sapi.
N baris berikutnya masing-masing berisi satu bilangan bulat pos[i], yaitu posisi kandang ke-i pada garis bilangan.

## Format Keluaran

Cetak satu bilangan bulat, yaitu jarak minimum maksimum yang dapat dicapai.

## Contoh Masukan 1

```
5 3
1
2
8
4
9
```

## Contoh Keluaran 1

```
3
```

### Penjelasan Contoh 1

Setelah diurutkan, posisi kandang adalah [1, 2, 4, 8, 9]. Dengan d=3: tempatkan sapi di posisi 1, berikutnya ≥4 yaitu 4, berikutnya ≥7 yaitu 8 atau 9 yaitu 8. Tiga sapi ditempatkan, jarak minimum adalah 3. Dengan d=4: sapi di 1, berikutnya ≥5 yaitu 8, berikutnya ≥12: tidak ada. Hanya 2 sapi < 3. Sehingga jawaban adalah 3.

## Contoh Masukan 2

```
6 4
1
3
5
10
15
20
```

## Contoh Keluaran 2

```
5
```

### Penjelasan Contoh 2

Posisi terurut: [1, 3, 5, 10, 15, 20]. Dengan d=5: sapi di 1, berikutnya ≥6 yaitu 10, berikutnya ≥15 yaitu 15, berikutnya ≥20 yaitu 20. Tepat 4 sapi. Dengan d=6: sapi di 1, berikutnya ≥7 yaitu 10, berikutnya ≥16 yaitu 20. Hanya 3 sapi < 4. Sehingga jawaban adalah 5.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 2 ≤ N ≤ 100 | 30 |
| 2 | 2 ≤ N ≤ 1.000 | 30 |
| 3 | 2 ≤ N ≤ 100.000 | 40 |

- 2 ≤ C ≤ N ≤ 100.000
- 1 ≤ pos[i] ≤ 10^9
- Semua posisi kandang berbeda
