# Soal 1 – Jumlah Subset

## Deskripsi

Diberikan N bilangan bulat dan sebuah target T. Tugasmu adalah menghitung berapa banyak subset dari N bilangan tersebut yang memiliki jumlah tepat sama dengan T.

Subset kosong dihitung jika T = 0. Dua subset dianggap berbeda jika mereka menggunakan elemen pada indeks yang berbeda, meskipun nilainya sama.

Gunakan enumerasi bitmask untuk memeriksa semua 2^N kemungkinan subset secara menyeluruh.

## Format Masukan

Baris pertama berisi dua bilangan bulat N dan T.

Baris kedua berisi N bilangan bulat A[1], A[2], ..., A[N].

## Format Keluaran

Satu bilangan bulat: banyaknya subset yang berjumlah tepat T.

## Contoh Masukan 1

```
4 5
1 2 3 4
```

## Contoh Keluaran 1

```
2
```

### Penjelasan Contoh 1

Dari array [1, 2, 3, 4], subset yang berjumlah 5 adalah:
- {1, 4} → 1 + 4 = 5 ✓
- {2, 3} → 2 + 3 = 5 ✓

Total: **2** subset.

## Contoh Masukan 2

```
5 4
1 1 2 3 4
```

## Contoh Keluaran 2

```
4
```

### Penjelasan Contoh 2

Dari array [1, 1, 2, 3, 4] (indeks 0–4), subset yang berjumlah 4 adalah:
- {A[4]} = {4} → 4 ✓
- {A[0], A[3]} = {1, 3} → 1 + 3 = 4 ✓
- {A[1], A[3]} = {1, 3} → 1 + 3 = 4 ✓
- {A[0], A[1], A[2]} = {1, 1, 2} → 1 + 1 + 2 = 4 ✓

Total: **4** subset.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 10 | 30 |
| 2 | 1 ≤ N ≤ 15 | 30 |
| 3 | 1 ≤ N ≤ 20 | 40 |

- 1 ≤ N ≤ 20
- 0 ≤ T ≤ 10^6
- 1 ≤ A[i] ≤ 10^5
