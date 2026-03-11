# Soal 4 – Lintasan Grid

## Deskripsi

Diberikan sebuah grid berukuran N baris dan M kolom. Setiap sel berisi karakter '.' (bisa dilalui) atau '*' (rintangan, tidak bisa dilalui). Kamu berada di pojok kiri atas (baris 1, kolom 1) dan ingin mencapai pojok kanan bawah (baris N, kolom M).

Kamu hanya boleh bergerak ke **kanan** atau ke **bawah** pada setiap langkah. Hitung berapa banyak lintasan yang berbeda dari (1,1) ke (N,M). Karena jawabannya bisa sangat besar, cetak hasilnya modulo 10^9 + 7.

Gunakan pemrograman dinamis (DP) 2D di mana dp[i][j] menyatakan jumlah lintasan menuju sel (i,j).

## Format Masukan

Baris pertama berisi dua bilangan bulat N dan M.

N baris berikutnya masing-masing berisi string sepanjang M karakter, terdiri dari '.' dan '*'.

## Format Keluaran

Satu bilangan bulat: jumlah lintasan dari (1,1) ke (N,M) modulo 10^9 + 7.

## Contoh Masukan 1

```
3 3
...
.*.
...
```

## Contoh Keluaran 1

```
2
```

### Penjelasan Contoh 1

Pada grid 3×3 dengan rintangan di tengah (1,1) (indeks 0-based), terdapat 2 lintasan:
- Kanan → Kanan → Bawah → Bawah
- Bawah → Bawah → Kanan → Kanan

Lintasan melalui baris tengah terhalang oleh rintangan '*'.

## Contoh Masukan 2

```
2 4
....
....
```

## Contoh Keluaran 2

```
4
```

### Penjelasan Contoh 2

Pada grid 2×4 tanpa rintangan, terdapat C(1+3, 1) = C(4,1) = 4 lintasan:
- RRRB, RRBR, RBRR, BRRR (R=kanan, B=bawah)

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N, M ≤ 5 | 30 |
| 2 | 1 ≤ N, M ≤ 10 | 30 |
| 3 | 1 ≤ N, M ≤ 15 | 40 |

- 1 ≤ N, M ≤ 15
- Sel (1,1) dan (N,M) dijamin berupa '.'
