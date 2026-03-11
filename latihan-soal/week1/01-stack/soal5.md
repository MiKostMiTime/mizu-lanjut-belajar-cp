# Soal 5 – Kalkulator Ekspresi Postfix

## Deskripsi

Kelas Pemrograman Bu Ani sedang belajar tentang notasi postfix (juga dikenal sebagai *Reverse Polish Notation* / RPN). Berbeda dengan ekspresi biasa (infix) seperti `3 + 4`, ekspresi postfix ditulis sebagai `3 4 +` — operatornya diletakkan **setelah** kedua operandnya.

Keunggulan notasi postfix adalah tidak memerlukan tanda kurung dan dapat dievaluasi dengan mudah menggunakan tumpukan (stack).

Bu Ani memberikan beberapa ekspresi postfix kepada murid-muridnya. Bantulah mereka menghitung hasil setiap ekspresi!

**Aturan evaluasi ekspresi postfix:**
1. Baca token dari kiri ke kanan.
2. Jika token adalah bilangan, masukkan ke tumpukan.
3. Jika token adalah operator (`+`, `-`, `*`, `/`), ambil dua bilangan teratas dari tumpukan (operand kedua diambil pertama, lalu operand pertama), hitung hasilnya, dan masukkan kembali ke tumpukan.
4. Hasil akhir adalah satu-satunya nilai yang tersisa di tumpukan.

Pembagian yang dimaksud adalah pembagian bulat (integer division, membulatkan ke arah nol).

## Format Masukan

Baris pertama berisi sebuah bilangan bulat **T** (1 ≤ T ≤ 50), yaitu banyaknya ekspresi.

Setiap ekspresi berada pada satu baris, berisi token-token yang dipisahkan spasi. Setiap token adalah bilangan bulat positif atau salah satu dari operator `+`, `-`, `*`, `/`.

## Format Keluaran

Untuk setiap ekspresi, cetak hasil evaluasinya pada satu baris.

## Batasan

- 1 ≤ T ≤ 50
- Bilangan pada ekspresi: 1 ≤ n ≤ 1.000
- Setiap ekspresi dijamin valid (selalu memiliki operand yang cukup untuk setiap operator)
- Hasil akhir setiap ekspresi dijamin muat dalam tipe data `long long`
- Panjang setiap ekspresi tidak melebihi 10.000 karakter

---

## Contoh Masukan 1

```
2
3 4 +
5 2 - 3 *
```

## Contoh Keluaran 1

```
7
9
```

### Penjelasan Contoh 1

**Ekspresi 1:** `3 4 +`
- Baca `3` → tumpukan: [3]
- Baca `4` → tumpukan: [3, 4]
- Baca `+` → ambil 4 dan 3, hitung 3 + 4 = 7 → tumpukan: [7]
- Hasil: **7**

**Ekspresi 2:** `5 2 - 3 *`
- Baca `5` → tumpukan: [5]
- Baca `2` → tumpukan: [5, 2]
- Baca `-` → ambil 2 dan 5, hitung 5 - 2 = 3 → tumpukan: [3]
- Baca `3` → tumpukan: [3, 3]
- Baca `*` → ambil 3 dan 3, hitung 3 × 3 = 9 → tumpukan: [9]
- Hasil: **9**

---

## Contoh Masukan 2

```
3
10 2 / 3 +
4 3 2 * +
100 50 - 2 /
```

## Contoh Keluaran 2

```
8
10
25
```

### Penjelasan Contoh 2

- `10 2 / 3 +` → 10 / 2 = 5, lalu 5 + 3 = **8**
- `4 3 2 * +` → 3 × 2 = 6, lalu 4 + 6 = **10**
- `100 50 - 2 /` → 100 - 50 = 50, lalu 50 / 2 = **25**
