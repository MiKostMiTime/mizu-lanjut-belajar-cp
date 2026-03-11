# Soal 4 – Peringkat Nilai Relatif

## Deskripsi

Ujian Akhir Semester telah selesai. Bu Dewi, guru matematika di SMAN 2 Jakarta, ingin menganalisis hasil ujian **N** siswanya. Setiap siswa memiliki nilai antara 0 sampai 100.

Bu Dewi ingin mengetahui dua hal untuk setiap siswa:

1. **Peringkat** siswa tersebut di kelas (peringkat 1 = nilai tertinggi). Jika dua atau lebih siswa memiliki nilai yang sama, mereka mendapat **peringkat yang sama** (yaitu 1 + jumlah siswa yang nilainya lebih tinggi).

2. **Persentil** siswa tersebut: persentase siswa lain (termasuk dirinya sendiri) yang nilainya **lebih rendah** dari nilai siswa ini, dihitung sebagai:
   ```
   persentil = (jumlah siswa dengan nilai < nilai_siswa_ini) / N × 100
   ```
   Tampilkan persentil dengan **dua angka di belakang koma**.

## Format Masukan

Baris pertama berisi sebuah bilangan bulat **N** (1 ≤ N ≤ 100.000).

Baris kedua berisi **N** bilangan bulat **V[1], V[2], ..., V[N]** yang dipisahkan spasi, menyatakan nilai masing-masing siswa.

## Format Keluaran

Keluarkan **N** baris. Baris ke-i berisi peringkat dan persentil siswa ke-i (dalam **urutan masukan**), dipisahkan spasi:
```
<peringkat> <persentil>
```

## Contoh Masukan 1

```
5
70 90 80 70 90
```

## Contoh Keluaran 1

```
4 0.00
1 60.00
3 40.00
4 0.00
1 60.00
```

### Penjelasan Contoh 1

Nilai yang diurutkan: [70, 70, 80, 90, 90]

| Siswa | Nilai | Siswa dgn nilai lebih tinggi | Peringkat | Siswa dgn nilai lebih rendah | Persentil |
|-------|-------|------------------------------|-----------|------------------------------|-----------|
| 1     | 70    | 3 (nilai 80, 90, 90)         | 4         | 0                            | 0/5×100 = 0.00% |
| 2     | 90    | 0                            | 1         | 3 (nilai 70, 70, 80)         | 3/5×100 = 60.00% |
| 3     | 80    | 2 (nilai 90, 90)             | 3         | 2 (nilai 70, 70)             | 2/5×100 = 40.00% |
| 4     | 70    | 3                            | 4         | 0                            | 0.00% |
| 5     | 90    | 0                            | 1         | 3                            | 60.00% |

## Contoh Masukan 2

```
4
100 100 100 100
```

## Contoh Keluaran 2

```
1 0.00
1 0.00
1 0.00
1 0.00
```

### Penjelasan Contoh 2

Semua siswa memiliki nilai sama (100). Tidak ada siswa yang nilainya lebih tinggi, sehingga semua berperingkat 1. Tidak ada siswa yang nilainya lebih rendah, sehingga persentil semua adalah 0.00%.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 1.000 | 30 |
| 2 | 1 ≤ N ≤ 10.000 | 30 |
| 3 | 1 ≤ N ≤ 100.000 | 40 |

- 1 ≤ N ≤ 100.000
- 0 ≤ V[i] ≤ 100
- Nilai dapat berulang

## Petunjuk

Urutkan salinan array nilai, lalu gunakan `lower_bound` dan `upper_bound` (binary search) untuk menghitung peringkat dan persentil setiap siswa dalam O(log N) per siswa.
