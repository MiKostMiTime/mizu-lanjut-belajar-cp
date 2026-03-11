# Soal 1 – Perlombaan Lari

## Deskripsi

Olimpiade Sains Nasional cabang Atletik tingkat SMA akan segera diselenggarakan di Kota Bandung. Sebagai persiapan, sekolah SMAN 1 Bandung mengadakan seleksi internal perlombaan lari 100 meter. Terdapat **N** siswa yang mengikuti perlombaan ini.

Setiap siswa berlari satu kali dan dicatat waktunya dalam satuan detik dengan dua angka di belakang koma. Panitia ingin menentukan peringkat setiap siswa berdasarkan aturan berikut:

1. Siswa dengan waktu **lebih kecil** mendapat peringkat lebih tinggi (lebih baik).
2. Jika dua siswa memiliki waktu yang **sama**, maka urutkan berdasarkan nama secara **alfabetis** (leksikografis).

Bantulah panitia menampilkan daftar peringkat lengkap!

## Format Masukan

Baris pertama berisi sebuah bilangan bulat **N** (1 ≤ N ≤ 1000), yaitu jumlah siswa.

Kemudian **N** baris berikutnya, masing-masing berisi:
- Nama siswa (satu kata, tanpa spasi, panjang maksimal 20 karakter)
- Waktu lari dalam format `XX.YY` (dua digit sebelum koma, dua digit sesudah koma, antara 10.00 sampai 99.99)

**Dijamin semua nama siswa berbeda.**

## Format Keluaran

Tampilkan **N** baris, masing-masing dalam format:
```
<peringkat> <nama> <waktu>
```
diurutkan dari peringkat 1 (terbaik) hingga peringkat N (terburuk).

## Contoh Masukan 1

```
5
Budi 12.50
Ani 11.20
Citra 12.50
Dedi 10.80
Eka 11.20
```

## Contoh Keluaran 1

```
1 Dedi 10.80
2 Ani 11.20
3 Eka 11.20
4 Budi 12.50
5 Citra 12.50
```

### Penjelasan Contoh 1

- Dedi memiliki waktu tercepat (10.80), sehingga mendapat peringkat 1.
- Ani dan Eka sama-sama mencatat waktu 11.20. Karena nama "Ani" lebih awal secara alfabetis daripada "Eka", Ani menempati peringkat 2 dan Eka peringkat 3.
- Budi dan Citra sama-sama mencatat waktu 12.50. "Budi" < "Citra" secara alfabetis, sehingga Budi peringkat 4 dan Citra peringkat 5.

## Contoh Masukan 2

```
3
Rudi 45.30
Siti 45.30
Ahmad 45.30
```

## Contoh Keluaran 2

```
1 Ahmad 45.30
2 Rudi 45.30
3 Siti 45.30
```

### Penjelasan Contoh 2

Ketiga siswa memiliki waktu yang sama. Peringkat ditentukan murni secara alfabetis: Ahmad < Rudi < Siti.

## Batasan

| Subsoal | Batasan Tambahan | Nilai |
|---------|-----------------|-------|
| 1 | 1 ≤ N ≤ 10 | 30 |
| 2 | 1 ≤ N ≤ 100 | 30 |
| 3 | 1 ≤ N ≤ 1000 | 40 |

- 1 ≤ N ≤ 1000
- Waktu antara 10.00 hingga 99.99
- Semua nama unik, panjang 1–20 karakter (hanya huruf alfabet)
