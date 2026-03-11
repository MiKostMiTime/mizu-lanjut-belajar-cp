# Soal 1: Antrian Kasir

## Deskripsi

Di sebuah supermarket terdapat satu kasir yang melayani pelanggan secara bergiliran. Setiap pelanggan membutuhkan tepat **1 menit** untuk dilayani. Diketahui N pelanggan akan datang, masing-masing dengan nama dan waktu kedatangan (dalam satuan menit).

Kasir hanya bisa melayani **satu pelanggan dalam satu waktu**. Jika pelanggan datang saat kasir sedang sibuk, pelanggan tersebut akan **mengantri** (FIFO). Jika kasir sedang tidak sibuk saat pelanggan datang, pelanggan langsung dilayani.

Tentukan waktu selesai dilayani untuk setiap pelanggan, dalam urutan kedatangan mereka.

## Format Masukan

Baris pertama berisi sebuah bilangan bulat N, jumlah pelanggan.

N baris berikutnya masing-masing berisi sebuah string (nama pelanggan, tanpa spasi) dan sebuah bilangan bulat (waktu kedatangan dalam menit). Waktu kedatangan dijamin **tidak menurun** (non-decreasing).

## Format Keluaran

N baris, masing-masing berisi nama pelanggan dan waktu selesai pelayanan, dipisahkan spasi, dalam urutan kedatangan.

## Batasan

- 1 ≤ N ≤ 1000
- 0 ≤ waktu kedatangan ≤ 10^6
- Waktu kedatangan bersifat tidak menurun

## Contoh Masukan 1

```
3
Andi 0
Budi 1
Cici 1
```

## Contoh Keluaran 1

```
Andi 1
Budi 2
Cici 3
```

### Penjelasan Contoh 1

- **Andi** datang menit ke-0, kasir bebas → dilayani menit 0–1, selesai menit **1**.
- **Budi** datang menit ke-1, kasir baru saja bebas → dilayani menit 1–2, selesai menit **2**.
- **Cici** datang menit ke-1, tetapi Budi sedang dilayani → mengantri, dilayani menit 2–3, selesai menit **3**.

## Contoh Masukan 2

```
5
Andi 0
Budi 0
Cici 2
Dodi 3
Eka 5
```

## Contoh Keluaran 2

```
Andi 1
Budi 2
Cici 3
Dodi 4
Eka 6
```

### Penjelasan Contoh 2

- **Andi** dan **Budi** keduanya datang menit ke-0. Andi (urutan pertama) selesai menit 1. Budi mengantri, selesai menit 2.
- **Cici** datang menit ke-2, kasir bebas (Budi selesai menit 2) → langsung dilayani, selesai menit 3.
- **Dodi** datang menit ke-3, kasir bebas (Cici selesai menit 3) → langsung dilayani, selesai menit 4.
- **Eka** datang menit ke-5, kasir sudah bebas sejak menit 4 → langsung dilayani, selesai menit 6.
