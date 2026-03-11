# Soal 2 – Menghitung Inversi

## Deskripsi

Pak Budi seorang guru matematika sedang mengajarkan konsep **inversi** kepada murid-muridnya. Diberikan sebuah barisan bilangan **A** berisi **N** elemen. Sebuah pasangan indeks **(i, j)** disebut **inversi** jika:

- i < j, dan
- A[i] > A[j]

Dengan kata lain, inversi adalah pasangan elemen yang "terbalik urutan nilainya" dibandingkan posisi indeksnya. Semakin banyak inversi, semakin "kacau" susunan barisan tersebut.

Pak Budi ingin menghitung total jumlah inversi dalam barisan tersebut. Karena jumlah inversi bisa sangat besar, gunakan algoritma **Merge Sort** untuk menghitung inversi secara efisien dalam O(N log N).

## Format Masukan

Baris pertama berisi sebuah bilangan bulat **N** (1 ≤ N ≤ 100.000).

Baris kedua berisi **N** bilangan bulat **A[1], A[2], ..., A[N]** yang dipisahkan spasi.

## Format Keluaran

Keluarkan satu bilangan bulat: total jumlah inversi dalam barisan.

## Contoh Masukan 1

```
5
2 4 1 3 5
```

## Contoh Keluaran 1

```
3
```

### Penjelasan Contoh 1

Pasangan inversi yang ditemukan:
- (1, 3): A[1]=2 > A[3]=1 ✓
- (2, 3): A[2]=4 > A[3]=1 ✓
- (2, 4): A[2]=4 > A[4]=3 ✓

Total inversi = **3**.

## Contoh Masukan 2

```
4
4 3 2 1
```

## Contoh Keluaran 2

```
6
```

### Penjelasan Contoh 2

Barisan yang terurut menurun sempurna memiliki inversi maksimum.
- (1,2): 4>3, (1,3): 4>2, (1,4): 4>1
- (2,3): 3>2, (2,4): 3>1
- (3,4): 2>1

Total = 4×3/2 = **6**.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 1.000 | 30 |
| 2 | 1 ≤ N ≤ 10.000 | 30 |
| 3 | 1 ≤ N ≤ 100.000 | 40 |

- 1 ≤ N ≤ 100.000
- 1 ≤ A[i] ≤ 10^9
- Jawaban dapat mencapai N×(N-1)/2 ≈ 5×10^9, gunakan tipe data `long long`

## Petunjuk

Gunakan pendekatan **Divide and Conquer** (Merge Sort). Saat proses penggabungan dua sub-array yang sudah terurut, untuk setiap elemen di sub-array kanan yang diambil lebih dulu daripada elemen di sub-array kiri, tambahkan jumlah elemen yang tersisa di sub-array kiri ke hitungan inversi.
