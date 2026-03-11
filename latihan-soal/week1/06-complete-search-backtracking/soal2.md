# Soal 2 – Semua Permutasi

## Deskripsi

Diberikan sebuah bilangan bulat N. Cetaklah semua permutasi dari bilangan 1 sampai N dalam urutan leksikografis (kamus).

Sebuah permutasi adalah susunan dari N bilangan berbeda yang masing-masing muncul tepat satu kali. Dengan backtracking, kita dapat menghasilkan semua N! permutasi secara sistematis.

## Format Masukan

Satu bilangan bulat N.

## Format Keluaran

N! baris, masing-masing berisi satu permutasi dari 1 sampai N, dengan bilangan-bilangan dipisahkan spasi, dalam urutan leksikografis.

## Contoh Masukan 1

```
2
```

## Contoh Keluaran 1

```
1 2
2 1
```

### Penjelasan Contoh 1

Terdapat 2! = 2 permutasi dari [1, 2]:
- 1 2 (leksikografis pertama)
- 2 1 (leksikografis kedua)

## Contoh Masukan 2

```
3
```

## Contoh Keluaran 2

```
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
```

### Penjelasan Contoh 2

Terdapat 3! = 6 permutasi dari [1, 2, 3] yang ditampilkan dalam urutan leksikografis. Backtracking dimulai dari bilangan terkecil yang belum digunakan pada setiap posisi.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 5 | 30 |
| 2 | 1 ≤ N ≤ 7 | 30 |
| 3 | 1 ≤ N ≤ 8 | 40 |

- 1 ≤ N ≤ 8
