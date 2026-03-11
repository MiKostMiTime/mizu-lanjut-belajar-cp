# Soal 3 – N-Ratu

## Deskripsi

Masalah N-Ratu adalah masalah klasik dalam ilmu komputer. Diberikan papan catur berukuran N×N, tempatkan N buah ratu sedemikian rupa sehingga tidak ada dua ratu yang saling menyerang.

Dua ratu saling menyerang jika berada pada baris, kolom, atau diagonal yang sama. Hitunglah berapa banyak cara yang valid untuk menempatkan N ratu pada papan N×N.

Gunakan backtracking baris per baris: tempatkan tepat satu ratu pada setiap baris, dan lacak kolom serta diagonal yang sudah terserang.

## Format Masukan

Satu bilangan bulat N.

## Format Keluaran

Satu bilangan bulat: banyaknya cara valid menempatkan N ratu pada papan N×N.

## Contoh Masukan 1

```
4
```

## Contoh Keluaran 1

```
2
```

### Penjelasan Contoh 1

Untuk papan 4×4, terdapat tepat 2 konfigurasi valid:
- Konfigurasi 1: kolom [1, 3, 0, 2] (ratu di baris 0 kolom 1, baris 1 kolom 3, dst.)
- Konfigurasi 2: kolom [2, 0, 3, 1]

## Contoh Masukan 2

```
8
```

## Contoh Keluaran 2

```
92
```

### Penjelasan Contoh 2

Masalah 8-Ratu pada papan catur standar 8×8 memiliki **92** solusi yang valid. Ini adalah hasil klasik yang terkenal dalam kombinatorika.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 6 | 30 |
| 2 | 1 ≤ N ≤ 10 | 30 |
| 3 | 1 ≤ N ≤ 12 | 40 |

- 1 ≤ N ≤ 12
