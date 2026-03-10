# 📝 Log Belajar CP — Template & Panduan

> Mencatat progress harian adalah kunci untuk tahu seberapa jauh kamu sudah berkembang dan apa yang perlu diperbaiki.

---

## 📋 Format Log Harian

Salin template ini setiap hari belajar:

```markdown
## 📅 [Tanggal] — Hari ke-[N]

**Topik hari ini:** [nama topik]  
**Fase:** [Fase 1/2/3/4] — Minggu [N]

### 🎬 Video yang Ditonton
- [ ] [Judul video] — [Channel] ([durasi])
- Catatan: [apa yang dipelajari]

### ✏️ Coret-coretan
- Algoritma yang di-trace: [nama algoritma]
- Deskripsi: [apa yang digambar/ditulis]

### 💻 Soal yang Dikerjakan
| # | Platform | Soal | Difficulty | Status | Waktu |
|---|---|---|---|---|---|
| 1 | CSES | [nama soal](link) | Easy | ✅ AC | 15 menit |
| 2 | CSES | [nama soal](link) | Medium | ❌ WA | 30 menit |

### 📖 Editorial yang Dibaca
- [nama soal]: [pola/teknik yang dipelajari]

### 💡 Pelajaran Hari Ini
[Tulis 1-2 kalimat: apa yang paling berharga yang kamu pelajari hari ini]

### ❓ Yang Masih Bingung
[Tulis pertanyaan atau konsep yang belum jelas — untuk dicari tahu besok]

---
**Total soal hari ini:** [N]  
**Total AC:** [N]  
**Mood:** 😄 / 😐 / 😤
```

---

## 📊 Template Mingguan

```markdown
## 📅 Rekap Minggu [N] — [Tanggal Mulai] s/d [Tanggal Selesai]

**Topik minggu ini:** [topik utama]  
**Target yang diselesaikan:**

### 📈 Statistik
| Metrik | Nilai |
|---|---|
| Total soal diselesaikan | [N] |
| Total soal AC | [N] |
| Total soal WA/TLE | [N] |
| Contest yang diikuti | [N] |
| Rating Codeforces | [N] (±[N]) |

### ✅ Topik yang Dikuasai
- [x] [topik] — bisa solve soal medium tanpa bantuan
- [x] [topik]
- [ ] [topik] — perlu lebih banyak latihan

### 🔄 Topik yang Perlu Review
- [ ] [topik] — alasan: [kenapa masih bingung]
- [ ] [topik]

### 🏆 Highlight Minggu Ini
[Ceritakan pencapaian terbaik minggu ini — soal yang berhasil dipecahkan, konsep yang akhirnya dimengerti, dll]

### 🎯 Target Minggu Depan
- [ ] [target spesifik]
- [ ] [target spesifik]
```

---

## 🗓️ Progress Tracker (Minggu 1–13)

Salin dan update setiap minggu:

```markdown
## Progress Tracker — Roadmap OSN Informatika

| Minggu | Topik | Status | Soal AC | Notes |
|---|---|---|---|---|
| Minggu 1 | Rekursi, Tipe Data, Array, String, Linear Search | ⬜ Belum | 0 | |
| Minggu 2 | Stack & Queue, Binary Heap, Sorting Dasar, Divide-and-Conquer | ⬜ Belum | 0 | |
| Minggu 3 | Sorting Lanjutan, Binary Search, Two Pointers, Sliding Window | ⬜ Belum | 0 | |
| Minggu 4 | Matematika Diskrit (GCD, Sieve, Modular Arithmetic) | ⬜ Belum | 0 | |
| Minggu 5 | Prefix Sum, Greedy, Complete Search, Backtracking | ⬜ Belum | 0 | |
| Minggu 6 | Representasi Graf, BFS, DFS, Topological Sort | ⬜ Belum | 0 | |
| Minggu 7 | Shortest Path (Dijkstra, Bellman-Ford, Floyd-Warshall) | ⬜ Belum | 0 | |
| Minggu 8 | MST (Kruskal, Prim) & DSU | ⬜ Belum | 0 | |
| Minggu 9 | Tree Dasar, LCA, Monotonic Stack/Queue | ⬜ Belum | 0 | |
| Minggu 10 | DP Dasar (Coin Change, Knapsack, LIS, LCS) + Mixed Practice | ⬜ Belum | 0 | |
| Minggu 11 | DP Lanjutan (Grid, Bitmask, Tree DP) + Soal OSN Arsip | ⬜ Belum | 0 | |
| Minggu 12 | Fenwick Tree/BIT, Segment Tree, Lazy Propagation | ⬜ Belum | 0 | |
| Minggu 13 | Geometri Dasar + Simulasi OSN | ⬜ Belum | 0 | |

**Legend:** ⬜ Belum | 🟡 Sedang | ✅ Selesai | 🔄 Perlu Review

**Total Soal AC:** 0 / target 130+  
**Rating Codeforces saat ini:** [N]  
**Rating target (Juni 2026):** 1700+
```

---

## 📌 Contoh Entry Log (Hari 1)

```markdown
## 📅 10 Maret 2026 — Hari ke-1

**Topik hari ini:** Sorting lanjutan + Binary Search  
**Fase:** Fase 1 — Minggu 1

### 🎬 Video yang Ditonton
- [x] Errichto — Sorting tutorial (20 menit)
- Catatan: Baru tahu tentang coordinate compression — teknik untuk kompres nilai besar ke range kecil

### ✏️ Coret-coretan
- Algoritma yang di-trace: Merge Sort
- Deskripsi: Gambar trace merge sort untuk array [3,1,4,1,5,9] — 8 elemen, split sampai dasar lalu merge

### 💻 Soal yang Dikerjakan
| # | Platform | Soal | Difficulty | Status | Waktu |
|---|---|---|---|---|---|
| 1 | CSES | Distinct Numbers | Easy | ✅ AC | 8 menit |
| 2 | CSES | Apartments | Easy | ✅ AC | 12 menit |

### 📖 Editorial yang Dibaca
- Distinct Numbers: Pakai set untuk count unique, atau sort + count distinct
- Apartments: Sort kedua array, two pointers matching

### 💡 Pelajaran Hari Ini
Sorting + two pointers adalah combo klasik yang sangat powerful untuk soal matching/pairing.

### ❓ Yang Masih Bingung
Kapan harus pakai coordinate compression? Perlu cari soal yang memerlukan ini.

---
**Total soal hari ini:** 2  
**Total AC:** 2  
**Mood:** 😄
```

---

## 💡 Tips Mencatat Progress

1. **Tulis saat masih segar** — langsung setelah sesi belajar, bukan besok
2. **Spesifik, bukan general** — "paham DP" kurang berguna, "bisa Knapsack 0/1 O(n*W)" lebih baik
3. **Catat waktu** — berapa menit per soal, ini akan improve seiring waktu
4. **Tulis yang bingung** — ini adalah daftar PR untuk keesokan harinya
5. **Rayakan progress kecil** — setiap AC adalah progress nyata!

---

*📝 Log ini adalah investasi — kamu akan sangat berterima kasih pada diri sendiri yang mencatat ini saat review sebelum OSN!*
