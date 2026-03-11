# Soal 3 – Jadwal Pertemuan

## Deskripsi

Direktur perusahaan teknologi "NusaTech" memiliki **N** undangan pertemuan dalam satu hari. Setiap pertemuan ke-i berlangsung dari waktu **S[i]** hingga waktu **E[i]** (waktu dalam menit sejak pukul 00:00). Dua pertemuan dianggap **bertabrakan** jika rentang waktunya saling tumpang tindih, yaitu pertemuan j dimulai **sebelum** pertemuan i berakhir (S[j] < E[i] dan S[i] < E[j]).

Sang direktur hanya bisa menghadiri satu pertemuan pada satu waktu. Ia ingin memaksimalkan **jumlah pertemuan yang dapat dihadirinya**. Direktur boleh langsung berpindah dari satu pertemuan ke pertemuan berikutnya tepat saat pertemuan pertama berakhir (pertemuan dianggap tidak bertabrakan jika S[j] = E[i]).

Tentukan jumlah maksimum pertemuan yang dapat dihadiri direktur!

## Format Masukan

Baris pertama berisi sebuah bilangan bulat **N** (1 ≤ N ≤ 100.000).

Kemudian **N** baris berikutnya, baris ke-i berisi dua bilangan bulat **S[i]** dan **E[i]** yang dipisahkan spasi, menyatakan waktu mulai dan waktu selesai pertemuan ke-i.

## Format Keluaran

Keluarkan satu bilangan bulat: jumlah maksimum pertemuan yang dapat dihadiri.

## Contoh Masukan 1

```
6
1 2
3 4
0 6
5 7
8 9
5 9
```

## Contoh Keluaran 1

```
4
```

### Penjelasan Contoh 1

Setelah diurutkan berdasarkan waktu selesai:
- [1,2], [3,4], [0,6], [5,7], [5,9], [8,9]

Pilihan optimal dengan algoritma *greedy*:
1. Hadiri [1,2] → selesai pukul 2
2. Hadiri [3,4] → mulai 3 ≥ 2, selesai pukul 4
3. Hadiri [5,7] → mulai 5 ≥ 4, selesai pukul 7
4. Hadiri [8,9] → mulai 8 ≥ 7, selesai pukul 9

Total = **4** pertemuan.

## Contoh Masukan 2

```
3
1 10
2 4
3 6
```

## Contoh Keluaran 2

```
1
```

### Penjelasan Contoh 2

Semua pertemuan bertabrakan satu sama lain. Direktur hanya bisa menghadiri **1** pertemuan saja. Pilihan terbaik adalah [2,4] (selesai paling awal), tetapi tetap hanya 1 pertemuan yang bisa dihadiri karena [3,6] sudah bertabrakan dengan [2,4].

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 1.000 | 30 |
| 2 | 1 ≤ N ≤ 10.000 | 30 |
| 3 | 1 ≤ N ≤ 100.000 | 40 |

- 1 ≤ N ≤ 100.000
- 1 ≤ S[i] < E[i] ≤ 10^9

## Petunjuk

Gunakan algoritma **Greedy**: urutkan semua pertemuan berdasarkan waktu selesai (E[i]) secara menaik. Kemudian secara berurutan, pilih pertemuan yang bisa dihadiri (waktu mulai ≥ waktu selesai pertemuan terakhir yang dipilih).
