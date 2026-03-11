# Soal 4 – Nilai Saham Berikutnya

## Deskripsi

Rudi adalah seorang analis saham muda yang sedang belajar menganalisis pergerakan harga saham. Ia memiliki catatan harga saham selama **N** hari berturut-turut.

Untuk setiap hari ke-i, Rudi ingin mengetahui: **pada hari berikutnya manakah (setelah hari ke-i) harga saham pertama kali lebih tinggi dari hari ke-i?**

Jika tidak ada hari seperti itu, jawablah dengan **-1**.

Bantulah Rudi menjawab pertanyaan ini secara efisien!

## Format Masukan

Baris pertama berisi sebuah bilangan bulat **N** (1 ≤ N ≤ 10^5), yaitu banyaknya hari.

Baris kedua berisi **N** bilangan bulat **p_1, p_2, ..., p_N** (1 ≤ p_i ≤ 10^9), yaitu harga saham pada setiap hari.

## Format Keluaran

Cetak satu baris berisi **N** bilangan bulat yang dipisahkan spasi.

Bilangan ke-i adalah harga saham pada hari berikutnya yang lebih tinggi dari hari ke-i, atau **-1** jika tidak ada.

## Batasan

- 1 ≤ N ≤ 10^5
- 1 ≤ p_i ≤ 10^9

---

## Contoh Masukan 1

```
5
2 1 5 3 7
```

## Contoh Keluaran 1

```
5 5 7 7 -1
```

### Penjelasan Contoh 1

| Hari | Harga | Hari berikutnya yang lebih tinggi | Jawaban |
|------|-------|----------------------------------|---------|
| 1    | 2     | Hari 3 (harga 5)                 | 5       |
| 2    | 1     | Hari 3 (harga 5)                 | 5       |
| 3    | 5     | Hari 5 (harga 7)                 | 7       |
| 4    | 3     | Hari 5 (harga 7)                 | 7       |
| 5    | 7     | Tidak ada                        | -1      |

---

## Contoh Masukan 2

```
4
4 3 2 1
```

## Contoh Keluaran 2

```
-1 -1 -1 -1
```

### Penjelasan Contoh 2

Harga saham terus menurun setiap hari. Tidak ada hari berikutnya yang lebih tinggi untuk semua hari, sehingga semua jawaban adalah **-1**.

---

## Petunjuk

Gunakan struktur data **tumpukan (stack)** untuk menyelesaikan soal ini dalam waktu O(N). Simpan indeks hari yang belum ditemukan jawabannya ke dalam tumpukan. Untuk setiap hari baru, pop semua indeks di tumpukan yang harganya lebih kecil dari harga hari ini.
