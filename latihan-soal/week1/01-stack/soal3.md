# Soal 3 – Histori Browser

## Deskripsi

Budi sedang belajar cara kerja tombol **Back** dan **Forward** pada peramban web (browser). Ia ingin membuat simulasi sederhana dari histori penelusuran.

Peramban Budi mendukung empat operasi:

- `VISIT url` — kunjungi halaman `url`. Halaman saat ini (jika ada) disimpan ke histori *back*. Semua histori *forward* dihapus.
- `BACK` — kembali ke halaman sebelumnya. Halaman saat ini dipindah ke histori *forward*. Jika tidak ada halaman sebelumnya, tidak terjadi apa-apa.
- `FORWARD` — maju ke halaman berikutnya. Halaman saat ini dipindah ke histori *back*. Jika tidak ada halaman berikutnya, tidak terjadi apa-apa.
- `CURRENT` — cetak URL halaman yang sedang dibuka saat ini.

Di awal simulasi, tidak ada halaman yang sedang dibuka.

## Format Masukan

Baris pertama berisi sebuah bilangan bulat **N** (1 ≤ N ≤ 100.000), yaitu banyaknya operasi.

Kemudian diikuti **N** baris, masing-masing berisi satu operasi:
- `VISIT url` — `url` adalah string tanpa spasi dengan panjang maksimal 100 karakter.
- `BACK`
- `FORWARD`
- `CURRENT`

## Format Keluaran

Untuk setiap operasi `CURRENT`, cetak URL halaman yang sedang dibuka pada satu baris.

## Batasan

- 1 ≤ N ≤ 100.000
- Dijamin operasi `CURRENT` hanya dipanggil saat sudah ada halaman yang sedang dibuka.
- Dijamin operasi `BACK` dan `FORWARD` tidak menyebabkan kondisi error yang perlu ditangani (lihat deskripsi).

---

## Contoh Masukan 1

```
8
VISIT google.com
VISIT youtube.com
VISIT github.com
CURRENT
BACK
CURRENT
FORWARD
CURRENT
```

## Contoh Keluaran 1

```
github.com
youtube.com
github.com
```

### Penjelasan Contoh 1

- `VISIT google.com`: halaman saat ini = `google.com`, histori back = [], forward = []
- `VISIT youtube.com`: halaman saat ini = `youtube.com`, back = [google.com], forward = []
- `VISIT github.com`: halaman saat ini = `github.com`, back = [google.com, youtube.com], forward = []
- `CURRENT`: cetak **github.com**
- `BACK`: halaman saat ini = `youtube.com`, back = [google.com], forward = [github.com]
- `CURRENT`: cetak **youtube.com**
- `FORWARD`: halaman saat ini = `github.com`, back = [google.com, youtube.com], forward = []
- `CURRENT`: cetak **github.com**

---

## Contoh Masukan 2

```
9
VISIT berita.com
VISIT olahraga.com
VISIT teknologi.com
BACK
BACK
CURRENT
FORWARD
VISIT musik.com
CURRENT
```

## Contoh Keluaran 2

```
berita.com
musik.com
```

### Penjelasan Contoh 2

- Setelah 3 kali VISIT: saat ini = `teknologi.com`, back = [berita.com, olahraga.com], forward = []
- BACK: saat ini = `olahraga.com`, back = [berita.com], forward = [teknologi.com]
- BACK: saat ini = `berita.com`, back = [], forward = [teknologi.com, olahraga.com]
- `CURRENT`: cetak **berita.com**
- FORWARD: saat ini = `olahraga.com`, back = [berita.com], forward = [teknologi.com]
- `VISIT musik.com`: saat ini = `musik.com`, back = [berita.com, olahraga.com], forward = [] (forward dihapus!)
- `CURRENT`: cetak **musik.com**
