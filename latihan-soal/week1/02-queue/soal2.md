# Soal 2: Antrian Pesan Berantai

## Deskripsi

Dalam sebuah permainan tradisional, N anak berdiri membentuk **lingkaran** bernomor 1 hingga N (searah jarum jam). Sebuah pesan dimulai tepat sebelum anak nomor 1. Permainan berjalan dalam beberapa **giliran**:

Setiap giliran, pesan dilewatkan ke depan sebanyak **K posisi** dalam lingkaran (dari posisi terakhir penerima pesan, hitung K langkah ke depan, anak ke-K menerima pesan). Permainan berlangsung selama **M giliran**.

Setelah M giliran, siapa yang **terakhir** menerima pesan?

## Format Masukan

Satu baris berisi tiga bilangan bulat N, K, dan M.

## Format Keluaran

Satu bilangan bulat: nomor anak yang terakhir menerima pesan.

## Batasan

- 1 ≤ N ≤ 1000
- 1 ≤ K ≤ N
- 1 ≤ M ≤ 10.000

## Contoh Masukan 1

```
5 2 3
```

## Contoh Keluaran 1

```
1
```

### Penjelasan Contoh 1

N=5 anak: [1, 2, 3, 4, 5] dalam lingkaran. K=2 langkah setiap giliran, M=3 giliran.

- **Giliran 1**: Dari posisi awal (sebelum anak 1), hitung 2 langkah → anak **2** menerima pesan. Posisi sekarang: setelah anak 2.
- **Giliran 2**: Hitung 2 langkah dari setelah anak 2 → anak **4** menerima pesan.
- **Giliran 3**: Hitung 2 langkah dari setelah anak 4 → anak **1** menerima pesan (lingkar balik).

Jawaban: **1**

## Contoh Masukan 2

```
6 3 4
```

## Contoh Keluaran 2

```
6
```

### Penjelasan Contoh 2

N=6, K=3, M=4.

- Giliran 1: Hitung 3 → anak **3** menerima pesan.
- Giliran 2: Hitung 3 dari setelah anak 3 → anak **6** menerima pesan.
- Giliran 3: Hitung 3 dari setelah anak 6 → anak **3** menerima pesan (lingkar).
- Giliran 4: Hitung 3 dari setelah anak 3 → anak **6** menerima pesan.

Jawaban: **6**
