# Soal 5 – Partisi Seimbang

## Deskripsi

Diberikan N bilangan bulat. Bagilah semua bilangan tersebut menjadi dua kelompok yang masing-masing **tidak kosong**, sedemikian rupa sehingga selisih absolut antara jumlah kedua kelompok seminimal mungkin.

Setiap bilangan harus masuk ke tepat salah satu kelompok. Gunakan enumerasi bitmask untuk mencoba semua cara pembagian yang mungkin.

## Format Masukan

Baris pertama berisi satu bilangan bulat N.

Baris kedua berisi N bilangan bulat A[1], A[2], ..., A[N].

## Format Keluaran

Satu bilangan bulat: selisih absolut minimum antara jumlah dua kelompok.

## Contoh Masukan 1

```
4
3 1 4 2
```

## Contoh Keluaran 1

```
0
```

### Penjelasan Contoh 1

Total = 3 + 1 + 4 + 2 = 10. Pembagian optimal:
- Kelompok 1: {1, 4} → jumlah = 5
- Kelompok 2: {3, 2} → jumlah = 5

Selisih = |5 - 5| = **0**.

## Contoh Masukan 2

```
5
7 2 5 1 4
```

## Contoh Keluaran 2

```
1
```

### Penjelasan Contoh 2

Total = 7 + 2 + 5 + 1 + 4 = 19. Pembagian optimal:
- Kelompok 1: {7, 2} → jumlah = 9
- Kelompok 2: {5, 1, 4} → jumlah = 10

Selisih = |9 - 10| = **1**. Tidak ada pembagian dengan selisih 0 karena total ganjil.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 2 ≤ N ≤ 10 | 30 |
| 2 | 2 ≤ N ≤ 15 | 30 |
| 3 | 2 ≤ N ≤ 20 | 40 |

- 2 ≤ N ≤ 20
- 1 ≤ A[i] ≤ 10^6
