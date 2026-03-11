# Soal 5: Kompresi Huffman

## Latar Belakang

Divisi IT perusahaan Nusantara Tech sedang mengembangkan sistem kompresi file teks. Mereka menggunakan algoritma **Huffman Encoding**: karakter yang sering muncul diberi kode biner yang lebih pendek, sedangkan karakter jarang diberi kode lebih panjang. Pohon Huffman dibangun menggunakan **min-heap**: selalu gabungkan dua simpul dengan frekuensi terkecil. Total bit yang dibutuhkan sama dengan jumlah bobot semua simpul internal pada pohon Huffman.

## Deskripsi Masalah

Diberikan N karakter beserta frekuensinya, bangun pohon Huffman menggunakan min-heap dan hitung **total bit** yang dibutuhkan untuk mengkodekan seluruh kemunculan semua karakter.

**Rumus:** Total bit = jumlah bobot semua simpul internal = jumlah dari setiap penggabungan dua simpul.

**Kasus khusus:** Jika hanya ada 1 karakter, setiap kemunculannya dikodekan dengan 1 bit, sehingga total bit = frekuensi karakter tersebut.

## Format Masukan

- Baris pertama: satu bilangan bulat **N** (1 ≤ N ≤ 26), jumlah karakter unik.
- N baris berikutnya: satu karakter (huruf kapital A–Z) dan frekuensinya (1 ≤ frekuensi ≤ 1000), dipisahkan spasi.

## Format Keluaran

Satu baris berisi satu bilangan bulat: total bit yang dibutuhkan untuk mengkodekan semua kemunculan karakter.

## Batasan

- 1 ≤ N ≤ 26
- 1 ≤ frekuensi ≤ 1000

## Contoh Masukan 1

```
4
A 5
B 9
C 12
D 13
```

## Contoh Keluaran 1

```
78
```

## Penjelasan 1

Proses min-heap:
- Heap awal: [5, 9, 12, 13]
- Gabung 5+9=14, biaya=14. Heap: [12, 13, 14]
- Gabung 12+13=25, biaya=25. Heap: [14, 25]
- Gabung 14+25=39, biaya=39. Heap: [39]

Total bit = 14 + 25 + 39 = **78**.

Verifikasi: A(kedalaman 2)=5×2=10, B(kedalaman 2)=9×2=18, C(kedalaman 2)=12×2=24, D(kedalaman 2)=13×2=26. Total = 10+18+24+26 = 78 ✓

## Contoh Masukan 2

```
6
A 5
B 9
C 12
D 13
E 16
F 45
```

## Contoh Keluaran 2

```
224
```

## Penjelasan 2

Proses min-heap:
- Gabung 5+9=14. Biaya=14. Heap: [12,13,14,16,45]
- Gabung 12+13=25. Biaya=25. Heap: [14,16,25,45]
- Gabung 14+16=30. Biaya=30. Heap: [25,30,45]
- Gabung 25+30=55. Biaya=55. Heap: [45,55]
- Gabung 45+55=100. Biaya=100. Heap: [100]

Total = 14+25+30+55+100 = **224**.

---

**Petunjuk:** Gunakan `priority_queue<long long, vector<long long>, greater<long long>>` (min-heap). Setiap iterasi: ambil dua elemen terkecil, jumlahkan, tambahkan ke total, dan masukkan kembali ke heap. Ulangi hingga heap berukuran 1. Kompleksitas: O(N log N).
