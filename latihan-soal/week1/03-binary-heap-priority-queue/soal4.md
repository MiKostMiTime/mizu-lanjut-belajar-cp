# Soal 4: Merge K Array Terurut

## Latar Belakang

Tim riset di sebuah universitas mengumpulkan data pengukuran dari K sensor yang berbeda. Setiap sensor menghasilkan daftar pengukuran yang sudah terurut secara menaik. Untuk analisis lebih lanjut, seluruh data dari semua sensor perlu digabungkan menjadi satu daftar terurut. Karena jumlah data sangat besar, diperlukan cara yang efisien menggunakan **priority queue** (min-heap).

## Deskripsi Masalah

Diberikan K array yang masing-masing sudah terurut secara menaik. Gabungkan semua array tersebut menjadi satu array terurut secara menaik. Gunakan min-heap untuk selalu mengambil elemen terkecil dari kepala setiap array secara efisien.

## Format Masukan

- Baris pertama: satu bilangan bulat **K** (1 ≤ K ≤ 100), jumlah array.
- K baris berikutnya: bilangan pertama adalah ukuran array (n_i ≥ 1), diikuti n_i bilangan bulat terurut menaik, semua dipisahkan spasi.

## Format Keluaran

Satu baris berisi semua elemen dari gabungan K array dalam urutan menaik, dipisahkan spasi.

## Batasan

- 1 ≤ K ≤ 100
- Total seluruh elemen ≤ 100.000
- 1 ≤ setiap elemen ≤ 10^9
- Setiap array sudah terurut secara menaik

## Contoh Masukan 1

```
3
4 1 3 5 7
3 2 4 6
5 1 2 8 9 10
```

## Contoh Keluaran 1

```
1 1 2 2 3 4 5 6 7 8 9 10
```

## Penjelasan 1

Tiga array: [1,3,5,7], [2,4,6], [1,2,8,9,10].

Min-heap dimulai dengan kepala setiap array: {1(A1), 2(A2), 1(A3)}.
- Ambil 1 (A1) → output 1, masukkan 3 (elemen berikutnya A1).
- Ambil 1 (A3) → output 1, masukkan 2 (elemen berikutnya A3).
- Ambil 2 (A2) → output 2, masukkan 4 (A2). Dan seterusnya...

Hasil: `1 1 2 2 3 4 5 6 7 8 9 10`.

## Contoh Masukan 2

```
2
3 1 5 9
4 2 4 6 8
```

## Contoh Keluaran 2

```
1 2 4 5 6 8 9
```

## Penjelasan 2

Array [1,5,9] dan [2,4,6,8] digabung menjadi [1,2,4,5,6,8,9].

---

**Petunjuk:** Gunakan `priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>>` dengan elemen `(nilai, indeks_array, indeks_elemen)`. Setiap kali elemen diambil, masukkan elemen berikutnya dari array yang sama (jika ada). Kompleksitas: O(M log K) di mana M = total elemen.
