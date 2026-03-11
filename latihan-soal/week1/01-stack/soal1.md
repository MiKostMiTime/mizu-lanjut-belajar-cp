# Soal 1 – Tumpukan Piring

## Deskripsi

Pak Dengklek memiliki sebuah tumpukan piring ajaib. Tumpukan ini bekerja seperti tumpukan pada umumnya: piring baru selalu diletakkan di atas, dan yang diambil pun selalu yang paling atas.

Pak Dengklek ingin melakukan serangkaian operasi terhadap tumpukan piringnya. Bantulah Pak Dengklek untuk mensimulasikan tumpukan tersebut!

Terdapat empat jenis operasi:
- `PUSH x` — letakkan piring bernomor `x` di atas tumpukan.
- `POP` — ambil dan buang piring paling atas dari tumpukan.
- `TOP` — cetak nomor piring yang berada paling atas tumpukan.
- `EMPTY` — cetak `YA` jika tumpukan sedang kosong, atau `TIDAK` jika tidak.

## Format Masukan

Baris pertama berisi sebuah bilangan bulat **N** (1 ≤ N ≤ 100.000), yaitu banyaknya operasi.

Kemudian diikuti **N** baris, masing-masing berisi satu operasi:
- `PUSH x` dengan 1 ≤ x ≤ 10^9
- `POP`
- `TOP`
- `EMPTY`

## Format Keluaran

Untuk setiap operasi `TOP`, cetak nomor piring paling atas pada satu baris.
Untuk setiap operasi `EMPTY`, cetak `YA` atau `TIDAK` pada satu baris.
Operasi `PUSH` dan `POP` tidak menghasilkan keluaran.

## Batasan

- 1 ≤ N ≤ 100.000
- 1 ≤ x ≤ 10^9
- Dijamin tumpukan tidak pernah kosong saat operasi `POP` atau `TOP` dipanggil.

---

## Contoh Masukan 1

```
7
PUSH 5
PUSH 3
TOP
POP
TOP
EMPTY
POP
```

## Contoh Keluaran 1

```
3
5
TIDAK
```

### Penjelasan Contoh 1

- `PUSH 5`: tumpukan = [5]
- `PUSH 3`: tumpukan = [5, 3] (3 di atas)
- `TOP`: piring paling atas adalah 3 → cetak **3**
- `POP`: ambil piring 3 → tumpukan = [5]
- `TOP`: piring paling atas adalah 5 → cetak **5**
- `EMPTY`: tumpukan tidak kosong → cetak **TIDAK**
- `POP`: ambil piring 5 → tumpukan = []

---

## Contoh Masukan 2

```
5
PUSH 10
EMPTY
TOP
POP
EMPTY
```

## Contoh Keluaran 2

```
TIDAK
10
YA
```

### Penjelasan Contoh 2

- `PUSH 10`: tumpukan = [10]
- `EMPTY`: tumpukan tidak kosong → cetak **TIDAK**
- `TOP`: piring paling atas adalah 10 → cetak **10**
- `POP`: ambil piring 10 → tumpukan = []
- `EMPTY`: tumpukan kosong → cetak **YA**
