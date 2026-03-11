# Soal 4: Jendela Geser Maksimum

## Deskripsi

Stasiun cuaca di kota mencatat N pembacaan suhu secara berurutan. Sensor menganalisis suhu menggunakan **jendela geser** (*sliding window*) berukuran K: jendela dimulai dari posisi 1–K, lalu bergeser satu posisi ke kanan setiap langkah.

Untuk setiap posisi jendela, tentukan suhu **maksimum** dalam jendela tersebut!

Total ada **N − K + 1** jendela.

## Format Masukan

Baris pertama berisi dua bilangan bulat N dan K.

Baris kedua berisi N bilangan bulat, suhu ke-1 hingga suhu ke-N.

## Format Keluaran

Satu baris berisi N − K + 1 bilangan bulat dipisahkan spasi: nilai maksimum untuk setiap jendela.

## Batasan

- 1 ≤ K ≤ N ≤ 100.000
- 1 ≤ suhu ≤ 1.000.000

## Contoh Masukan 1

```
5 3
4 3 5 4 2
```

## Contoh Keluaran 1

```
5 5 5
```

### Penjelasan Contoh 1

- Jendela [4, 3, 5] → maks = **5**
- Jendela [3, 5, 4] → maks = **5**
- Jendela [5, 4, 2] → maks = **5**

## Contoh Masukan 2

```
8 4
2 1 5 3 6 4 8 7
```

## Contoh Keluaran 2

```
5 6 6 8 8
```

### Penjelasan Contoh 2

- Jendela [2, 1, 5, 3] → maks = **5**
- Jendela [1, 5, 3, 6] → maks = **6**
- Jendela [5, 3, 6, 4] → maks = **6**
- Jendela [3, 6, 4, 8] → maks = **8**
- Jendela [6, 4, 8, 7] → maks = **8**

## Petunjuk

Gunakan **deque** (double-ended queue) untuk mencapai solusi O(N). Pertahankan indeks elemen yang bisa menjadi kandidat maksimum: elemen yang lebih kecil dari elemen baru tidak perlu disimpan. Pastikan elemen di depan deque selalu berada di dalam batas jendela saat ini.
