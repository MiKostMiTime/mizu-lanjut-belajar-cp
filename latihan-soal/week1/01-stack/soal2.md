# Soal 2 – Ekspresi Kurung

## Deskripsi

Siti sedang belajar tentang ekspresi matematika di sekolah. Gurunya memberikan serangkaian string yang berisi karakter kurung: `(`, `)`, `[`, `]`, `{`, `}`. Siti diminta untuk menentukan apakah setiap string tersebut merupakan ekspresi kurung yang **valid**.

Sebuah ekspresi kurung dikatakan **valid** jika:
1. Setiap kurung buka memiliki pasangan kurung tutup dengan jenis yang sama.
2. Kurung ditutup dalam urutan yang benar (yang paling akhir dibuka harus ditutup lebih dulu).
3. String kosong juga dianggap valid.

Bantulah Siti memeriksa setiap string!

## Format Masukan

Baris pertama berisi sebuah bilangan bulat **T** (1 ≤ T ≤ 100), yaitu banyaknya kasus uji.

Setiap kasus uji terdiri dari satu baris berisi sebuah string yang hanya mengandung karakter `(`, `)`, `[`, `]`, `{`, `}`.

## Format Keluaran

Untuk setiap kasus uji, cetak `VALID` jika ekspresi kurungnya valid, atau `TIDAK VALID` jika tidak.

## Batasan

- 1 ≤ T ≤ 100
- Panjang setiap string: 0 ≤ |s| ≤ 10^5
- String hanya mengandung karakter `(`, `)`, `[`, `]`, `{`, `}`

---

## Contoh Masukan 1

```
3
()[]{}
([)]
{[()]}
```

## Contoh Keluaran 1

```
VALID
TIDAK VALID
VALID
```

### Penjelasan Contoh 1

- `()[]{}`: setiap kurung buka langsung ditutup dengan pasangannya yang tepat → **VALID**
- `([)]`: kurung `[` dibuka setelah `(`, tapi ditutup oleh `)` sebelum `]` → **TIDAK VALID**
- `{[()]}`: semua kurung ditutup dengan urutan yang benar → **VALID**

---

## Contoh Masukan 2

```
4
((()))
(]
{[()()]}
)(
```

## Contoh Keluaran 2

```
VALID
TIDAK VALID
VALID
TIDAK VALID
```

### Penjelasan Contoh 2

- `((()))`: tiga kurung buka `(` diikuti tiga kurung tutup `)` dengan urutan benar → **VALID**
- `(]`: kurung `(` ditutup oleh `]` yang bukan pasangannya → **TIDAK VALID**
- `{[()()]}`: semua kurung bersarang dengan benar → **VALID**
- `)(`: karakter pertama adalah `)` tetapi tumpukan masih kosong → **TIDAK VALID**
