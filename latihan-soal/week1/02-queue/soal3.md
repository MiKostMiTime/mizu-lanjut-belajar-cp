# Soal 3: BFS Labirin

## Deskripsi

Andi terjebak di dalam sebuah labirin berbentuk grid berukuran R baris dan C kolom. Setiap sel berupa:

- `'.'` – lantai, bisa dilalui
- `'#'` – dinding, tidak bisa dilalui
- `'S'` – posisi awal Andi
- `'E'` – pintu keluar

Andi hanya bisa bergerak ke **4 arah**: atas, bawah, kiri, kanan (tidak diagonal). Setiap langkah membutuhkan waktu 1 detik.

Bantulah Andi menemukan **jumlah langkah minimum** untuk keluar dari labirin! Jika tidak ada jalan keluar, cetak `-1`.

## Format Masukan

Baris pertama berisi dua bilangan bulat R dan C (ukuran labirin).

R baris berikutnya masing-masing berisi string sepanjang C karakter, menggambarkan labirin.

## Format Keluaran

Satu bilangan bulat: jumlah langkah minimum dari S ke E, atau `-1` jika tidak mungkin.

## Batasan

- 1 ≤ R, C ≤ 100
- Tepat satu `S` dan satu `E` dalam grid
- Minimal satu `S` dan satu `E` dijamin ada

## Contoh Masukan 1

```
4 4
S...
.##.
.##.
...E
```

## Contoh Keluaran 1

```
6
```

### Penjelasan Contoh 1

Salah satu jalur terpendek: `(0,0) → (0,1) → (0,2) → (0,3) → (1,3) → (2,3) → (3,3)` = **6 langkah**.

```
S→→→
.##↓
.##↓
...E
```

## Contoh Masukan 2

```
3 3
S#E
...
...
```

## Contoh Keluaran 2

```
4
```

### Penjelasan Contoh 2

Jalur langsung (0,0)→(0,2) terhalang dinding. Jalur terpendek memutar:
`(0,0) → (1,0) → (1,1) → (1,2) → (0,2)` = **4 langkah**.

```
S#E
↓↓↑
...
```
