# Soal 5: Printer Sekolah

## Deskripsi

Printer di laboratorium komputer sekolah menerima antrian dokumen untuk dicetak. Setiap dokumen memiliki **nama**, **jumlah halaman**, dan **prioritas** (1 = terendah, 5 = tertinggi).

Aturan pencetakan:
1. Dokumen dengan **prioritas lebih tinggi** selalu dicetak lebih dahulu.
2. Jika dua dokumen memiliki prioritas yang sama, dokumen yang **lebih dulu masuk antrian** (FIFO) yang dicetak lebih dulu.
3. Printer mencetak **1 halaman per menit** (bekerja terus-menerus tanpa jeda).

Diberikan N dokumen dalam urutan antrian (dokumen ke-1 masuk pertama). Simulasikan urutan pencetakan dan hitung **waktu selesai** (dalam menit, dihitung dari menit ke-0) untuk setiap dokumen.

## Format Masukan

Baris pertama berisi bilangan bulat N.

N baris berikutnya masing-masing berisi: nama dokumen (tanpa spasi), jumlah halaman, dan prioritas, dipisahkan spasi.

## Format Keluaran

N baris dalam urutan cetak, masing-masing berisi nama dokumen dan waktu selesai dicetak.

## Batasan

- 1 ≤ N ≤ 1000
- 1 ≤ jumlah halaman ≤ 1000
- 1 ≤ prioritas ≤ 5

## Contoh Masukan 1

```
4
Laporan 10 3
Foto 2 5
Tugas 5 5
Sertifikat 8 1
```

## Contoh Keluaran 1

```
Foto 2
Tugas 7
Laporan 17
Sertifikat 25
```

### Penjelasan Contoh 1

Urutan berdasarkan prioritas (tinggi ke rendah), lalu FIFO:
- **Foto** (prioritas 5, 2 halaman): dicetak pertama, selesai menit **2**.
- **Tugas** (prioritas 5, 5 halaman): dicetak kedua (masuk setelah Foto), selesai menit **7**.
- **Laporan** (prioritas 3, 10 halaman): selesai menit **17**.
- **Sertifikat** (prioritas 1, 8 halaman): dicetak terakhir, selesai menit **25**.

## Contoh Masukan 2

```
6
Makalah 15 2
UlanganMTK 3 4
UlanganIPA 4 4
FotoWisuda 1 5
SuratResmi 7 3
Proposal 20 1
```

## Contoh Keluaran 2

```
FotoWisuda 1
UlanganMTK 4
UlanganIPA 8
SuratResmi 15
Makalah 30
Proposal 50
```

### Penjelasan Contoh 2

- **FotoWisuda** (prioritas 5, 1 hal.) → selesai menit **1**.
- **UlanganMTK** (prioritas 4, 3 hal., masuk sebelum UlanganIPA) → selesai menit **4**.
- **UlanganIPA** (prioritas 4, 4 hal.) → selesai menit **8**.
- **SuratResmi** (prioritas 3, 7 hal.) → selesai menit **15**.
- **Makalah** (prioritas 2, 15 hal.) → selesai menit **30**.
- **Proposal** (prioritas 1, 20 hal.) → selesai menit **50**.
