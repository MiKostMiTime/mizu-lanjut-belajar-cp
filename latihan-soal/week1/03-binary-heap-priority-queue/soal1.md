# Soal 1: Pasien Puskesmas

## Latar Belakang

Puskesmas Sehat Selalu sedang sibuk melayani pasien. Setiap pasien yang datang memiliki tingkat keparahan penyakit yang berbeda-beda, dinilai dari skala 1 hingga 10 (semakin tinggi nilainya, semakin parah penyakitnya). Dokter harus melayani pasien berdasarkan tingkat keparahan tertinggi terlebih dahulu. Jika dua pasien memiliki tingkat keparahan yang sama, pasien yang datang lebih awal akan dilayani lebih dulu (prinsip FIFO — *First In, First Out*).

## Deskripsi Masalah

Diberikan N pasien yang tiba di puskesmas secara berurutan, masing-masing dengan nama dan tingkat keparahan penyakitnya. Gunakan **priority queue** untuk menentukan urutan pasien yang akan dilayani oleh dokter.

## Format Masukan

- Baris pertama: satu bilangan bulat **N** (1 ≤ N ≤ 1000), menyatakan jumlah pasien.
- N baris berikutnya: nama pasien (string alphanumeric, tanpa spasi) dan tingkat keparahan (bilangan bulat 1–10), dipisahkan oleh satu spasi.

## Format Keluaran

N baris, masing-masing berisi nama satu pasien sesuai urutan dilayani (keparahan tertinggi dilayani pertama; jika sama, yang datang lebih awal dilayani lebih dulu).

## Batasan

- 1 ≤ N ≤ 1000
- 1 ≤ tingkat keparahan ≤ 10
- Panjang nama: 1–20 karakter, hanya huruf dan angka

## Contoh Masukan 1

```
5
Budi 7
Ani 9
Cici 7
Dedi 3
Eko 9
```

## Contoh Keluaran 1

```
Ani
Eko
Budi
Cici
Dedi
```

## Penjelasan 1

- **Ani** dan **Eko** sama-sama memiliki keparahan 9 (tertinggi). Ani datang lebih awal (urutan ke-2), sehingga Ani dilayani pertama, lalu Eko.
- **Budi** dan **Cici** sama-sama memiliki keparahan 7. Budi datang lebih awal (urutan ke-1), sehingga Budi dilayani sebelum Cici.
- **Dedi** memiliki keparahan 3 (terendah), dilayani paling terakhir.

## Contoh Masukan 2

```
3
Yuli 5
Zaki 5
Wati 5
```

## Contoh Keluaran 2

```
Yuli
Zaki
Wati
```

## Penjelasan 2

Ketiga pasien memiliki keparahan yang sama (5). Karena prinsip FIFO berlaku untuk seri, mereka dilayani sesuai urutan kedatangan: Yuli → Zaki → Wati.

---

**Petunjuk:** Gunakan `priority_queue` dengan tipe data `tuple<int, int, string>` yang menyimpan `(keparahan, -urutan_datang, nama)`. Dengan demikian, pasien berkeparahan tinggi memiliki prioritas lebih besar, dan di antara yang setara, yang datang lebih awal (indeks lebih kecil → nilai negatif lebih besar) mendapat prioritas lebih tinggi.
