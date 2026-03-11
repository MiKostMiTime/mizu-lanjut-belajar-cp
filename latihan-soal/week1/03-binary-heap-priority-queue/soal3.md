# Soal 3: Penjadwalan Tugas

## Latar Belakang

Pak Rudi adalah seorang freelancer yang menerima banyak proyek sekaligus. Setiap proyek memiliki *deadline* (batas waktu penyelesaian dalam satuan hari) dan *profit* (keuntungan yang diperoleh). Pak Rudi hanya bisa mengerjakan **satu proyek per hari**, dan setiap proyek membutuhkan tepat satu hari pengerjaan. Ia ingin memilih proyek-proyek yang akan dikerjakan agar total keuntungannya **maksimal**.

## Deskripsi Masalah

Diberikan N tugas, masing-masing dengan profit dan deadline. Jadwalkan tugas-tugas tersebut sehingga total profit maksimal, dengan aturan:
- Setiap slot waktu hanya bisa diisi satu tugas.
- Tugas dengan deadline d harus selesai pada slot 1, 2, ..., atau d.

Gunakan **max-heap** (priority queue) dengan pendekatan greedy: urutkan tugas berdasarkan deadline, lalu gunakan min-heap berukuran deadline untuk menjaga hanya tugas-tugas paling menguntungkan yang memenuhi kapasitas slot.

## Format Masukan

- Baris pertama: satu bilangan bulat **N** (1 ≤ N ≤ 1000), jumlah tugas.
- N baris berikutnya: dua bilangan bulat `profit` dan `deadline` untuk tugas ke-i, dipisahkan spasi.

## Format Keluaran

- Baris pertama: total profit maksimum.
- Baris kedua: indeks tugas yang dipilih (1-indeks, urut menaik), dipisahkan spasi.

## Batasan

- 1 ≤ N ≤ 1000
- 1 ≤ profit ≤ 1000
- 1 ≤ deadline ≤ N

## Contoh Masukan 1

```
4
100 2
20 1
30 2
15 3
```

## Contoh Keluaran 1

```
145
1 3 4
```

## Penjelasan 1

Tugas-tugas: T1(profit=100, d=2), T2(profit=20, d=1), T3(profit=30, d=2), T4(profit=15, d=3).

Proses (diurutkan per deadline):
- Proses T2(d=1): heap=[20]. Ukuran 1 ≤ 1 → simpan.
- Proses T1(d=2): heap=[20,100]. Ukuran 2 ≤ 2 → simpan.
- Proses T3(d=2): heap=[20,30,100]. Ukuran 3 > 2 → hapus min(20) = T2. heap=[30,100].
- Proses T4(d=3): heap=[15,30,100]. Ukuran 3 ≤ 3 → simpan.

Dipilih: T1(100) + T3(30) + T4(15) = **145**. Jadwal: slot 1 → T3, slot 2 → T1, slot 3 → T4.

## Contoh Masukan 2

```
3
40 2
50 1
30 3
```

## Contoh Keluaran 2

```
120
1 2 3
```

## Penjelasan 2

Semua tugas bisa dijadwalkan: T2(slot 1), T1(slot 2), T3(slot 3). Total = 50+40+30 = **120**.

---

**Petunjuk:** Simpan tugas sebagai `tuple<deadline, profit, indeks>`, urutkan berdasarkan deadline. Gunakan `priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>>` (min-heap) untuk menyimpan `(profit, indeks)` tugas terpilih. Jika ukuran heap melebihi deadline saat ini, hapus tugas dengan profit terkecil.
