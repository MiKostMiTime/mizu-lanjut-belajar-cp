# Soal 2: K Nilai Terbesar

## Latar Belakang

Bu Sinta adalah seorang guru matematika yang ingin memberikan penghargaan kepada siswa-siswanya yang berprestasi. Ia memiliki daftar nilai N siswa dan ingin mengetahui K nilai terbesar agar bisa mengumumkan peringkat teratas. Namun karena jumlah siswa sangat banyak, ia membutuhkan cara yang efisien. Bantulah Bu Sinta menggunakan **min-heap berukuran K** untuk menemukan K nilai terbesar!

## Deskripsi Masalah

Diberikan N nilai siswa (bilangan bulat), temukan K nilai terbesar dan tampilkan dalam urutan menurun. Gunakan strategi min-heap berukuran K: untuk setiap nilai yang dibaca, masukkan ke heap; jika ukuran heap melebihi K, keluarkan nilai terkecil. Di akhir, heap berisi tepat K nilai terbesar.

## Format Masukan

- Baris pertama: dua bilangan bulat **N** dan **K** (1 ≤ K ≤ N ≤ 100.000), dipisahkan spasi.
- Baris kedua: N bilangan bulat nilai siswa (1 ≤ nilai ≤ 100), dipisahkan spasi.

## Format Keluaran

K baris, masing-masing berisi satu nilai dalam urutan menurun (terbesar ke terkecil).

## Batasan

- 1 ≤ K ≤ N ≤ 100.000
- 1 ≤ nilai ≤ 100

## Contoh Masukan 1

```
7 3
85 92 78 95 60 88 72
```

## Contoh Keluaran 1

```
95
92
88
```

## Penjelasan 1

Dari 7 nilai (85, 92, 78, 95, 60, 88, 72), tiga nilai terbesar adalah **95**, **92**, dan **88**, ditampilkan dalam urutan menurun.

Proses min-heap berukuran 3:
- Baca 85 → heap: [85]
- Baca 92 → heap: [85, 92]
- Baca 78 → heap: [78, 85, 92]
- Baca 95 → heap: [78, 85, 92, 95] → ukuran > 3 → hapus min (78) → heap: [85, 92, 95]
- Baca 60 → heap: [60, 85, 92, 95] → hapus min (60) → heap: [85, 92, 95]
- Baca 88 → heap: [85, 88, 92, 95] → hapus min (85) → heap: [88, 92, 95]
- Baca 72 → heap: [72, 88, 92, 95] → hapus min (72) → heap: [88, 92, 95]

Hasil: 95, 92, 88.

## Contoh Masukan 2

```
6 2
10 30 20 50 40 60
```

## Contoh Keluaran 2

```
60
50
```

## Penjelasan 2

Dari 6 nilai, dua terbesar adalah **60** dan **50**.

---

**Petunjuk:** Gunakan `priority_queue<int, vector<int>, greater<int>>` (min-heap). Setiap kali ukuran heap melebihi K, lakukan `pop()`. Kompleksitas waktu: O(N log K).
