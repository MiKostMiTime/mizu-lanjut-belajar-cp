# Soal 5 – Radix Sort Implementasi

## Deskripsi

Tim Olimpiade Komputer SMAN 3 Surabaya sedang mempelajari algoritma pengurutan non-komparatif. Salah satu yang menarik adalah **Radix Sort** versi LSD (*Least Significant Digit*), yang mengurutkan bilangan digit per digit mulai dari digit **paling kanan** (satuan) ke digit **paling kiri**.

Diberikan **N** bilangan, masing-masing memiliki tepat **D** digit (dipadding dengan nol di depan jika perlu). Implementasikan Radix Sort LSD dan tampilkan kondisi array **setelah setiap langkah pengurutan per digit** (dari digit ke-1 hingga digit ke-D, dihitung dari kanan).

Setiap langkah menggunakan **Counting Sort yang stabil** pada satu digit.

## Format Masukan

Baris pertama berisi dua bilangan bulat **N** dan **D** (1 ≤ N ≤ 100.000, 1 ≤ D ≤ 6).

Baris kedua berisi **N** bilangan bulat yang dipisahkan spasi. Setiap bilangan memiliki tepat **D** digit (mungkin dengan leading zero dalam representasi D-digit).

## Format Keluaran

Tampilkan **D** baris. Baris ke-i berisi kondisi array setelah melakukan counting sort pada digit ke-i dari kanan, dalam format:
```
Digit ke-i: A[1] A[2] ... A[N]
```
Setiap bilangan dicetak dengan tepat **D** digit (dipadding dengan nol di depan bila perlu).

Baris ke-D adalah kondisi array yang sudah **terurut penuh**.

## Contoh Masukan 1

```
5 3
170 045 075 090 002
```

## Contoh Keluaran 1

```
Digit ke-1: 170 090 002 045 075
Digit ke-2: 002 045 170 075 090
Digit ke-3: 002 045 075 090 170
```

### Penjelasan Contoh 1

Array awal: [170, 045, 075, 090, 002]

**Digit ke-1 (satuan):** digit satuan masing-masing: 0, 5, 5, 0, 2
- Ember 0: [170, 090]
- Ember 2: [002]
- Ember 5: [045, 075]
- Hasil: [170, 090, 002, 045, 075]

**Digit ke-2 (puluhan):** digit puluhan: 7, 9, 0, 4, 7
- Ember 0: [002]
- Ember 4: [045]
- Ember 7: [170, 075] (stabil: 170 sebelum 075)
- Ember 9: [090]
- Hasil: [002, 045, 170, 075, 090]

**Digit ke-3 (ratusan):** digit ratusan: 0, 0, 1, 0, 0
- Ember 0: [002, 045, 075, 090] (stabil)
- Ember 1: [170]
- Hasil: [002, 045, 075, 090, 170] ← terurut sempurna

## Contoh Masukan 2

```
4 2
31 07 24 15
```

## Contoh Keluaran 2

```
Digit ke-1: 31 24 15 07
Digit ke-2: 07 15 24 31
```

### Penjelasan Contoh 2

**Digit ke-1 (satuan):** 1, 7, 4, 5
- Ember 1: [31], Ember 4: [24], Ember 5: [15], Ember 7: [07]
- Hasil: [31, 24, 15, 07]

**Digit ke-2 (puluhan):** 3, 2, 1, 0
- Ember 0: [07], Ember 1: [15], Ember 2: [24], Ember 3: [31]
- Hasil: [07, 15, 24, 31] ← terurut sempurna

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 100, D = 1 | 20 |
| 2 | 1 ≤ N ≤ 1.000, 1 ≤ D ≤ 3 | 30 |
| 3 | 1 ≤ N ≤ 100.000, 1 ≤ D ≤ 6 | 50 |

- 1 ≤ N ≤ 100.000
- 1 ≤ D ≤ 6
- Setiap bilangan berada di antara 0 hingga 10^D - 1
- Counting Sort yang digunakan **harus stabil** (menjaga urutan relatif elemen dengan digit yang sama)
