# 📅 Roadmap OSN Informatika — 13 Minggu Menuju Juni 2026

> **Jadwal:** 1.5 jam/hari (90 menit) × 5x/minggu  
> **Asumsi:** Sudah paham sintaks dasar C++, tinggal pendalaman konsep & algoritma  
> **Berbasis:** Silabus Resmi OSN Informatika (IOI Syllabus)

---

## 🧭 Struktur Harian (90 Menit)

| Segmen | Durasi | Aktivitas |
|---|---|---|
| 🎬 Video | 25 menit | Tonton video penjelasan topik |
| ✏️ Coret-coretan | 10 menit | Trace algoritma di kertas |
| 💻 Solve soal | 40 menit | 1 soal mudah + 1 soal medium |
| 📖 Editorial | 15 menit | Baca editorial + catat pola |

### ✏️ Kenapa Coret-coretan Itu Penting?

Coret-coretan (pen & paper) adalah **senjata rahasia** yang sering diremehkan:

| Kapan? | Contoh Aktivitas |
|---|---|
| **Trace algoritma** | Gambar pohon rekursi DP, trace BFS/DFS di graf kecil |
| **Desain solusi** | Sketsa ide: "apa state DP-nya? transisinya?" |
| **Debug** | Trace manual input-output saat kode WA |
| **Matematika** | Turunkan rumus, hitung modular arithmetic |
| **Graf** | Gambar graf dari contoh input, cari pola |
| **Corner cases** | Tulis edge cases: array kosong, n=1, overflow |

> 💡 Di OSN, kamu **boleh bawa kertas coret-coretan**. Bahkan juara IOI pun menggambar di kertas sebelum coding. Biasakan: **Baca soal → Pikirkan & coret → Baru coding!**

---

## 🎯 Target Rating Codeforces per Fase

| Fase | Minggu | Target Rating | Kemampuan |
|---|---|---|---|
| Fase 0 | 1–2 | 800–1000 (Newbie) | Solve A konsisten, mulai B |
| Fase 1 | 3–5 | 1000–1200 (Newbie/Pupil) | Solve A-B konsisten |
| Fase 2 | 6–9 | 1200–1500 (Specialist) | Solve A-C konsisten |
| Fase 3 | 10–11 | 1500–1700 (Expert) | Solve A-D konsisten |
| Fase 4 | 12–13 | 1700+ (Candidate Master) | Kompetitif untuk medali |

---

## ⚪ Fase 0: Fondasi Pemrograman (Minggu 1–2)

### Minggu 1: Rekursi, Tipe Data & Struktur Dasar, Linear Search

> **Bangun fondasi kuat** — rekursi, tipe data primitif, array multidimensi, string, dan pencarian dasar

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Konsep rekursi (base case, recursive case), Fungsi rekursi sederhana (factorial, fibonacci) | [William Fiset — Recursion](https://www.youtube.com/c/WilliamFiset-videos) | Trace pohon rekursi fib(5), hitung total pemanggilan | CSES: [Introductory Problems](https://cses.fi/problemset/list/) — Apple Division (rekursi brute-force); [TLX TOKI Training Gate](https://tlx.toki.id/) — Rekursi dasar | Catat: "base case, recursive case, return value" |
| **Selasa** | Rekursi lanjutan (Tower of Hanoi, fungsi matematis rekursif), Divide-and-conquer intro | [Errichto — Recursion & D&C](https://www.youtube.com/c/Errichto) | Trace Tower of Hanoi 3 disk, gambar langkah-langkah | CSES: Introductory — Apple Division (rekursif brute-force); TLX TOKI — soal rekursi | Catat: "pecah masalah besar jadi submasalah kecil" |
| **Rabu** | Tipe data primitif (int, long long, double, char, bool), Array 1D & multidimensi | [William Fiset — Data Structures](https://www.youtube.com/c/WilliamFiset-videos) | Gambar array 2D 3×4, trace akses baris/kolom | CSES: Introductory — Missing Number, Repetitions; [Codeforces](https://codeforces.com/problemset) A rating 800 | Catat: "int vs long long, kapan overflow?" |
| **Kamis** | String & operasinya (panjang, substring, compare, concatenation, karakter per indeks) | [NeetCode — String Problems](https://www.youtube.com/c/NeetCode) | Trace operasi string: substr, find, reverse pada "HELLO" | CSES: Introductory — Palindrome Reorder, String Algorithms — String Matching (easy) | Catat: operasi string STL C++ |
| **Jumat** | Linear Search, Pencarian pada array/string, Mixed practice | [William Fiset — Linear Search](https://www.youtube.com/c/WilliamFiset-videos) | Trace linear search di array [3,7,1,9,4], cari 9 | [Codeforces](https://codeforces.com/problemset) A-B rating 800; TLX TOKI — soal pencarian dasar | Baca editorial soal yang stuck |

**Checklist Minggu 1:**
- [ ] Paham konsep rekursi (base case, recursive case)
- [ ] Bisa trace pohon rekursi fibonacci & factorial
- [ ] Bisa Tower of Hanoi secara rekursif
- [ ] Paham tipe data primitif & kapan pakai long long
- [ ] Bisa manipulasi array multidimensi (2D)
- [ ] Bisa operasi string dasar (substr, find, reverse, dll.)
- [ ] Bisa linear search pada array & string
- [ ] Selesaikan minimal 8 soal CSES Introductory + TLX

---

### Minggu 2: Stack & Queue, Binary Heap, Sorting Dasar, Divide-and-Conquer

> **Struktur data fundamental & pengurutan dasar** — implement dari nol, lalu pakai STL

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Stack (konsep LIFO, implement manual & `std::stack`), aplikasi stack (balancing bracket) | [William Fiset — Stack](https://www.youtube.com/c/WilliamFiset-videos) | Trace push/pop stack: [3,1,4,1,5], gambar state stack | CSES: Introductory problems; [Codeforces](https://codeforces.com/problemset?tags=data+structures) Rating 800-1000 stack problems | Catat: "LIFO — Last In First Out" |
| **Selasa** | Queue (konsep FIFO, implement manual & `std::queue`), Deque (`std::deque`) | [William Fiset — Queue](https://www.youtube.com/c/WilliamFiset-videos) | Trace enqueue/dequeue: [A,B,C,D], gambar state queue | [Codeforces](https://codeforces.com/problemset?tags=data+structures) Rating 800-1000; TLX TOKI — soal queue | Catat: "FIFO — First In First Out" |
| **Rabu** | Binary Heap & Priority Queue (min-heap, max-heap, `std::priority_queue`) | [William Fiset — Priority Queue](https://www.youtube.com/c/WilliamFiset-videos) | Gambar heap tree: insert [5,3,8,1,2], trace heapify | CSES: Sorting & Searching — Towers, Traffic Lights | Catat: "insert O(log n), extract-min O(log n)" |
| **Kamis** | Sorting dasar: Bubble Sort & Insertion Sort (implement manual, trace step-by-step) | [William Fiset — Sorting Algorithms](https://www.youtube.com/c/WilliamFiset-videos) | Trace bubble sort [5,3,8,1,2] per pass; trace insertion sort | [Codeforces](https://codeforces.com/problemset) A rating 800-1000 sorting; TLX TOKI — soal sorting | Catat: "Bubble O(n²), Insertion O(n²), kapan berguna?" |
| **Jumat** | Divide-and-Conquer lebih dalam (merge sort sebagai contoh D&C — pahami konsepnya), Review Minggu 1-2 | [Errichto — Divide and Conquer](https://www.youtube.com/c/Errichto) | Trace merge sort [5,3,8,1,2,7,4,6], gambar pohon split-merge | CSES: Sorting — Distinct Numbers; [Codeforces Virtual Div.2](https://codeforces.com/problemset) A-B | Baca editorial + review semua topik |

**Checklist Minggu 2:**
- [ ] Bisa implement stack & queue dari nol (array/linked list)
- [ ] Bisa pakai `std::stack`, `std::queue`, `std::deque`
- [ ] Paham binary heap & bisa pakai `std::priority_queue`
- [ ] Bisa implement bubble sort & insertion sort manual
- [ ] Paham konsep divide-and-conquer (split-solve-merge)
- [ ] Bisa trace merge sort di kertas
- [ ] Selesaikan minimal 8 soal kombinasi CSES + Codeforces

---

## 🟢 Fase 1: Pencarian, Pengurutan Lanjutan & Strategi (Minggu 3–5)

### Minggu 3: Sorting Lanjutan, Binary Search, Two Pointers, Sliding Window

> **Dari konsep ke implementasi** — di Minggu 2 kamu sudah paham D&C, sekarang kuasai implementasi quicksort, merge sort, heapsort, lalu teknik pencarian & window

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Sorting lanjutan: implementasi quicksort, heapsort, dan custom comparator | [Errichto — Sorting](https://www.youtube.com/c/Errichto) | Trace quicksort [5,3,8,1,2,7] (pivot, partition); trace heapsort | CSES: [Sorting and Searching](https://cses.fi/problemset/list/) — Distinct Numbers, Apartments | Baca editorial CSES |
| **Selasa** | Sorting lanjutan: merge sort implementasi, coordinate compression | [William Fiset — Merge Sort](https://www.youtube.com/c/WilliamFiset-videos) | Trace coordinate compression pada [100,3,50,3,100] → [2,0,1,0,2] | CSES: Apartments, Ferris Wheel | Catat: "kapan pakai coordinate compression?" |
| **Rabu** | Binary Search on array & Binary Search on answer (monotonic function) | [William Fiset — Binary Search](https://www.youtube.com/c/WilliamFiset-videos) | Trace BS di array [1,3,5,7,9], cari 7; trace BS on answer | CSES: Concert Tickets, Sum of Two Values | Catat pola: "lo, hi, mid, kondisi" |
| **Kamis** | Two Pointers (sorted array, opposite ends) & Sliding Window (fixed & variable size) | [NeetCode — Two Pointers](https://www.youtube.com/c/NeetCode); [NeetCode — Sliding Window](https://www.youtube.com/c/NeetCode) | Trace two pointers [1,2,3,4,5] target sum 6; trace sliding window max [1,3,-1,-3,5,3] | CSES: Maximum Subarray Sum II, Playlist, Towers | Catat pola two pointers & window expansion/shrink |
| **Jumat** | Mixed practice + mini contest | Review semua video | Gambar semua pola di 1 kertas rangkuman | [Codeforces Virtual Div.2](https://codeforces.com/problemset) A-B | Baca editorial soal yang stuck |

**Checklist Minggu 3:**
- [ ] Bisa implement quicksort, merge sort, heapsort
- [ ] Bisa sorting dengan custom comparator & coordinate compression
- [ ] Bisa binary search on answer (monotonic function)
- [ ] Bisa two pointers untuk sorted array
- [ ] Bisa sliding window fixed & variable size
- [ ] Selesaikan minimal 8 soal CSES Sorting & Searching

---

### Minggu 4: Matematika Diskrit

> **Fondasi matematis** — GCD, bilangan prima, modular arithmetic, kombinatorika

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | GCD/LCM, Extended Euclidean Algorithm | [William Fiset — GCD](https://www.youtube.com/c/WilliamFiset-videos) | Trace Euclidean algorithm: gcd(48, 18) step by step | CSES: [Mathematics](https://cses.fi/problemset/list/) — Exponentiation, Modular Inverse | Catat: `gcd(a,b) = gcd(b, a%b)` |
| **Selasa** | Sieve of Eratosthenes & variasi (linear sieve, smallest prime factor) | [William Fiset — Sieve](https://www.youtube.com/c/WilliamFiset-videos) | Trace sieve untuk n=30 | CSES: Common Divisors, Counting Divisors | Catat kompleksitas O(n log log n) |
| **Rabu** | Modular Arithmetic (mod inverse, Fermat's little theorem) | [Errichto — Modular Arithmetic](https://www.youtube.com/c/Errichto) | Turunkan rumus: `a^(p-2) mod p = a^(-1) mod p` | CSES: Divisor Analysis, Binomial Coefficients | Catat kapan pakai mod inverse |
| **Kamis** | Fast Exponentiation (binary exponentiation) & Kombinatorika (nCr mod p) | [Errichto — Fast Exponentiation](https://www.youtube.com/c/Errichto) | Trace: 2^10 dengan binary exp, hanya 4 perkalian | [AtCoder — Mathematics problems](https://atcoder.jp/contests/abs) | Catat template binom mod p |
| **Jumat** | Mixed math problems + mini contest | — | Rangkum semua rumus di 1 halaman | [Codeforces Math problems](https://codeforces.com/problemset?tags=math) Rating 1200-1500 | Baca editorial |

**Checklist Minggu 4:**
- [ ] Bisa implement sieve of Eratosthenes
- [ ] Bisa fast exponentiation (binary exponentiation)
- [ ] Bisa hitung nCr mod p dengan mod inverse
- [ ] Bisa modular inverse dengan Fermat's little theorem
- [ ] Selesaikan minimal 6 soal CSES Mathematics

---

### Minggu 5: Prefix Sum, Greedy, Complete Search, Backtracking

> **Strategi pemecahan masalah** — prefix sum, greedy, brute-force dengan pruning, backtracking

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Prefix Sum 1D & 2D, Difference Array | [NeetCode — Prefix Sum](https://www.youtube.com/c/NeetCode); [Colin Galen — 2D Prefix Sum](https://www.youtube.com/c/ColinGalen) | Trace prefix sum [3,1,4,1,5,9], query [2,5]; gambar 2D prefix sum grid 4×4 | CSES: Static Range Sum Queries, Forest Queries | Catat: `prefix[r] - prefix[l-1]`; formula 2D inclusion-exclusion |
| **Selasa** | Greedy (activity selection, interval scheduling, exchange argument) | [Errichto — Greedy](https://www.youtube.com/c/Errichto); [Colin Galen — Greedy](https://www.youtube.com/c/ColinGalen) | Trace activity selection: [(1,3),(2,5),(3,6)]; tulis "kenapa greedy benar?" | CSES: Movie Festival, Stick Lengths, Collecting Numbers | Catat: "sort dulu, lalu greedy"; latihan proof |
| **Rabu** | Complete Search / Brute-force (generate semua subset, permutasi), pruning | [Errichto — Brute Force](https://www.youtube.com/c/Errichto) | Trace subset generation {1,2,3} (8 subset); trace permutasi | CSES: Introductory — Apple Division, Creating Strings; [USACO Guide — Complete Search](https://usaco.guide/) | Catat: "2^n subset, n! permutasi, kapan feasible?" |
| **Kamis** | Backtracking (N-Queens, Chessboard & Queens, constraint propagation) | [Colin Galen — Backtracking](https://www.youtube.com/c/ColinGalen) | Gambar papan catur 4×4 untuk N-Queens, trace backtracking | CSES: Chessboard and Queens, Grid Paths (pruning); [Codeforces](https://codeforces.com/problemset?tags=brute+force) Rating 1200-1400 | Catat: "coba → cek → lanjut/mundur" |
| **Jumat** | Mixed practice Fase 1 + soal TLX | — | Review semua pola Minggu 3-5 di 1 kertas | [TLX TOKI](https://tlx.toki.id/) — soal Sorting, Greedy, Complete Search | Baca editorial + catat trik |

**Checklist Minggu 5:**
- [ ] Bisa prefix sum 1D dan 2D
- [ ] Bisa difference array untuk range update O(1)
- [ ] Bisa greedy activity selection/interval scheduling
- [ ] Bisa buktikan kenapa greedy benar (exchange argument dasar)
- [ ] Bisa complete search: generate semua subset & permutasi
- [ ] Bisa backtracking dengan pruning (N-Queens)
- [ ] Selesaikan minimal 10 soal CSES kombinasi Fase 1

---

## 🟡 Fase 2: Graf & Tree (Minggu 6–9)

### Minggu 6: Representasi Graf, BFS, DFS, Keterhubungan, Topological Sort

> **Fondasi graf** — cara merepresentasikan graf, lalu eksplorasi dengan BFS & DFS

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Representasi graf (adjacency list, adjacency matrix, edge list), graf berarah vs tak berarah, berbobot vs tak berbobot | [William Fiset — Graph Theory Introduction](https://www.youtube.com/c/WilliamFiset-videos) | Gambar graf 5 node, tulis adj list, adj matrix, edge list; bandingkan memori & kecepatan | CSES: [Graph Algorithms](https://cses.fi/problemset/list/) — Building Roads; [TLX TOKI](https://tlx.toki.id/) — soal graf dasar | Catat: "adj list untuk sparse, adj matrix untuk dense" |
| **Selasa** | BFS (level-order traversal, shortest path unweighted) | [William Fiset — BFS](https://www.youtube.com/c/WilliamFiset-videos) | Trace BFS di graf 6 node, gambar queue state tiap step | CSES: Counting Rooms, Labyrinth | Catat: BFS → shortest path unweighted |
| **Rabu** | DFS (rekursif & iteratif, time in/out), Connected Components | [William Fiset — DFS](https://www.youtube.com/c/WilliamFiset-videos) | Trace DFS di graf yang sama, gambar DFS tree, catat time in/out | CSES: Building Roads, Message Route | Catat: DFS → connected components, time in/out |
| **Kamis** | Cycle Detection (directed & undirected), Topological Sort (Kahn's BFS + DFS post-order) | [William Fiset — Cycle Detection](https://www.youtube.com/c/WilliamFiset-videos); [William Fiset — Topological Sort](https://www.youtube.com/c/WilliamFiset-videos) | Gambar graf bersikel, trace 3-color DFS; trace Kahn's pada DAG 5 node | CSES: Round Trip, Round Trip II, Course Schedule, Longest Flight Route | Catat: "3-color DFS cycle; Kahn's = dependency ordering" |
| **Jumat** | Mixed BFS/DFS/Topo problems | — | Gambar perbedaan BFS tree vs DFS tree; buat tabel representasi graf | [Codeforces Graph problems](https://codeforces.com/problemset?tags=graphs) Rating 1200-1500 | Baca editorial |

**Checklist Minggu 6:**
- [ ] Bisa representasi graf: adjacency list, adjacency matrix, edge list
- [ ] Paham perbedaan graf berarah/tak berarah, berbobot/tak berbobot
- [ ] Bisa implement BFS (iteratif dengan queue)
- [ ] Bisa implement DFS (rekursif & iteratif)
- [ ] Bisa deteksi cycle di directed & undirected graph
- [ ] Bisa topological sort dengan Kahn's algorithm & DFS
- [ ] Selesaikan minimal 8 soal CSES Graph Algorithms bagian awal

---

### Minggu 7: Shortest Path (Dijkstra, Bellman-Ford, Floyd-Warshall, 0-1 BFS)

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Dijkstra's Algorithm (dengan priority queue) | [William Fiset — Dijkstra](https://www.youtube.com/c/WilliamFiset-videos) | Trace Dijkstra di graf berbobot 5 node, tabel dist[] | CSES: Shortest Routes I, Shortest Routes II | Catat: hanya untuk non-negative weights |
| **Selasa** | Bellman-Ford & deteksi negative cycle | [William Fiset — Bellman-Ford](https://www.youtube.com/c/WilliamFiset-videos) | Trace Bellman-Ford, gambar relaxation per iterasi | CSES: High Score, Cycle Finding | Catat: O(VE), bisa negative weights |
| **Rabu** | Floyd-Warshall (all-pairs shortest path) | [William Fiset — Floyd-Warshall](https://www.youtube.com/c/WilliamFiset-videos) | Trace matriks dist[][] pada graph 4 node | CSES: Planets Queries I (latihan) | Catat: O(V³), untuk graph kecil |
| **Kamis** | 0-1 BFS (bobot 0 atau 1, lebih cepat dari Dijkstra) | [Errichto — 0-1 BFS](https://www.youtube.com/c/Errichto) | Bandingkan BFS vs 0-1 BFS untuk graph yang sama | CSES: Monsters (variasi BFS) | Catat: deque, push front (0) / push back (1) |
| **Jumat** | Mixed shortest path problems | — | Buat tabel: "kapan pakai algoritma apa?" | [TLX TOKI](https://tlx.toki.id/) — soal shortest path | Baca editorial |

**Checklist Minggu 7:**
- [ ] Bisa Dijkstra dengan priority_queue
- [ ] Bisa Bellman-Ford dan deteksi negative cycle
- [ ] Bisa Floyd-Warshall
- [ ] Tahu kapan pakai algoritma mana
- [ ] Selesaikan minimal 5 soal CSES Shortest Path

---

### Minggu 8: MST (Kruskal, Prim) & DSU (Union-Find)

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | DSU (Union-Find) dengan path compression & union by rank | [William Fiset — DSU](https://www.youtube.com/c/WilliamFiset-videos) | Trace union-find operasi: union(1,2), union(2,3), find(1) | CSES: Road Reparation (DSU part) | Catat: amortized O(α(n)) ≈ O(1) |
| **Selasa** | Kruskal's MST (sort edges + DSU) | [William Fiset — Kruskal](https://www.youtube.com/c/WilliamFiset-videos) | Trace Kruskal pada graf 5 node, list edges terurut | CSES: Road Reparation, Building Teams | Catat: sort edges by weight |
| **Rabu** | Prim's MST (greedy dengan priority queue) | [William Fiset — Prim](https://www.youtube.com/c/WilliamFiset-videos) | Trace Prim, gambar expansion dari source node | CSES: Road Construction (variasi) | Catat: lebih baik untuk dense graph |
| **Kamis** | Aplikasi DSU lanjutan (offline query, dynamic connectivity) | [Colin Galen — DSU Applications](https://www.youtube.com/c/ColinGalen) | Trace DSU dengan rollback (undo union) | [AtCoder ABC](https://atcoder.jp/contests/abs) DSU problems | Catat: DSU bisa untuk lebih dari MST |
| **Jumat** | Mixed MST + DSU problems | — | Gambar perbedaan Kruskal vs Prim | [Codeforces MST problems](https://codeforces.com/problemset?tags=dsu) | Baca editorial |

**Checklist Minggu 8:**
- [ ] Bisa implement DSU dengan path compression & union by rank
- [ ] Bisa Kruskal's MST
- [ ] Bisa Prim's MST
- [ ] Tahu kapan pakai Kruskal vs Prim
- [ ] Selesaikan minimal 5 soal CSES MST/DSU

---

### Minggu 9: Tree Dasar, LCA, Monotonic Stack/Queue

> **Pohon & teknik query pada tree** — rooted tree, LCA dengan binary lifting, monotonic stack/queue

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Rooted Tree (konsep parent, child, depth, subtree, euler tour), DFS/BFS pada tree | [William Fiset — Trees](https://www.youtube.com/c/WilliamFiset-videos) | Gambar rooted tree 7 node, catat parent[], depth[], subtree size[] | CSES: [Tree Algorithms](https://cses.fi/problemset/list/) — Subordinates, Tree Matching | Catat: "tree = connected acyclic graph" |
| **Selasa** | LCA (Lowest Common Ancestor) — Binary Lifting | [William Fiset — LCA](https://www.youtube.com/c/WilliamFiset-videos) | Trace binary lifting: preprocess up[v][k] = 2^k-th ancestor; query LCA(u,v) | CSES: Company Queries I, Company Queries II, Distance Queries | Catat: "preprocess O(n log n), query O(log n)" |
| **Rabu** | Aplikasi LCA (jarak antar node, path queries pada tree) | [Algorithms Live — LCA Applications](https://www.youtube.com/c/AlgorithmsLive) | Trace: dist(u,v) = depth[u] + depth[v] - 2*depth[LCA(u,v)] | CSES: Counting Paths, Path Queries | Catat: "LCA + euler tour = banyak aplikasi tree" |
| **Kamis** | Monotonic Stack (next greater element, histogram) & Monotonic Queue (sliding window max) | [NeetCode — Monotonic Stack](https://www.youtube.com/c/NeetCode); [Colin Galen — Monotonic Queue](https://www.youtube.com/c/ColinGalen) | Trace next greater element di [2,1,5,3,4]; trace sliding window max [1,3,-1,-3,5,3] k=3 | CSES: Nearest Smaller Values; Maximum Subarray Sum II (deque versi) | Catat: "stack/queue selalu monotonic" |
| **Jumat** | Mixed Tree + Monotonic problems, review Fase 2 | — | Rangkum semua struktur data: tabel kompleksitas; review graf & tree | [TLX TOKI](https://tlx.toki.id/) — soal tree & data structure | Baca editorial + catat pola |

**Checklist Minggu 9:**
- [ ] Paham konsep rooted tree (parent, child, depth, subtree)
- [ ] Bisa LCA dengan binary lifting (preprocess + query)
- [ ] Bisa hitung jarak antar node di tree menggunakan LCA
- [ ] Bisa monotonic stack untuk next greater/smaller element
- [ ] Bisa monotonic queue untuk sliding window maximum
- [ ] Selesaikan minimal 6 soal CSES Tree Algorithms + 2 soal monotonic

---

## 🔴 Fase 3: Dynamic Programming (Minggu 10–11)

### Minggu 10: DP Dasar + DP Mixed Practice

> **Fondasi DP** — memoization vs tabulation, lalu langsung latihan intensif

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Konsep DP (memoization vs tabulation), Coin Change, Dice Combinations | [Errichto — DP Tutorial](https://www.youtube.com/c/Errichto) | Gambar recurrence tree Fibonacci, identifikasi overlapping subproblem | CSES: [Dynamic Programming](https://cses.fi/problemset/list/) — Dice Combinations, Minimizing Coins, Coin Combinations I & II | Catat: "define state, write transition" |
| **Selasa** | Knapsack 0/1 & Unbounded Knapsack | [NeetCode — 0/1 Knapsack](https://www.youtube.com/c/NeetCode) | Trace tabel DP knapsack: n=3 items, W=5; bandingkan 0/1 vs unbounded | CSES: Book Shop; [AtCoder DP Contest](https://atcoder.jp/contests/dp) — soal A-D | Catat: `dp[i][w] = max(dp[i-1][w], dp[i-1][w-wi]+vi)` |
| **Rabu** | LIS (Longest Increasing Subsequence) O(n²) & O(n log n), LCS (Longest Common Subsequence) | [Colin Galen — LIS](https://www.youtube.com/c/ColinGalen) | Trace LIS O(n log n) pada [3,1,4,1,5,9,2,6]; trace LCS "ABCBDAB" vs "BDCAB" | CSES: Increasing Subsequence; [AtCoder DP Contest](https://atcoder.jp/contests/dp) — soal E-F | Catat: patience sorting trick; LCS tabel 2D |
| **Kamis** | DP Mixed Practice — campuran soal DP klasik | [Errichto — DP Tips](https://www.youtube.com/c/Errichto) | Gambar "decision tree" untuk identifikasi tipe DP | [AtCoder DP Contest](https://atcoder.jp/contests/dp) — soal G-J; CSES DP lanjutan | Baca editorial semua yang dikerjakan |
| **Jumat** | DP Mixed Practice lanjutan + soal TLX | — | Review pola DP: kapan knapsack, kapan LIS, kapan LCS? | [TLX TOKI](https://tlx.toki.id/) — soal DP; [Codeforces DP](https://codeforces.com/problemset?tags=dp) Rating 1400-1600 | Baca editorial + catat trik |

**Checklist Minggu 10:**
- [ ] Paham konsep memoization dan tabulation
- [ ] Bisa Knapsack 0/1 dan Unbounded
- [ ] Bisa LIS O(n log n)
- [ ] Bisa LCS
- [ ] Selesaikan minimal 8 soal CSES Dynamic Programming
- [ ] Selesaikan minimal 6 soal AtCoder DP Contest (A-J)

---

### Minggu 11: DP Lanjutan + Soal OSN Arsip

> **DP tingkat lanjut** — grid DP, bitmask DP, tree DP, lalu uji dengan soal OSN

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Grid DP (paths, obstacles) & Bitmask DP dasar (TSP mini, assignment problem) | [NeetCode — Grid DP](https://www.youtube.com/c/NeetCode); [Errichto — Bitmask DP](https://www.youtube.com/c/Errichto) | Trace grid DP 4×4; trace bitmask DP TSP 4 kota, `dp[mask][last]` | CSES: Grid Paths, Array Description; [AtCoder DP Contest](https://atcoder.jp/contests/dp) — soal O (Matching) | Catat: "Grid = state (i,j); Bitmask = state mask" |
| **Selasa** | DP on Tree (subtree DP, rerooting) | [Colin Galen — DP on Tree](https://www.youtube.com/c/ColinGalen) | Trace DP on tree: max independent set di pohon 5 node | CSES: Tree Matching, Tree Diameter (DP versi) | Catat: "post-order DFS untuk subtree DP" |
| **Rabu** | Soal OSN arsip — fokus DP | — | Trace solusi soal OSN di kertas dulu sebelum coding | [TLX TOKI](https://tlx.toki.id/) — Arsip OSN 2022-2024 (soal DP) | Pelajari editorial resmi OSN |
| **Kamis** | Soal OSN arsip — fokus Graf & Tree | — | Gambar contoh input/output sebelum coding | [TLX TOKI](https://tlx.toki.id/) — Arsip OSN (soal graf) | Pelajari editorial resmi OSN |
| **Jumat** | Virtual contest Codeforces (simulasi) + upsolving | — | Pre-contest: tulis semua template yang diingat; post-contest: analisis kelemahan | [Codeforces Virtual](https://codeforces.com/problemset) — Div.2 full | Post-contest: baca semua editorial |

**Checklist Minggu 11:**
- [ ] Bisa Grid DP (2D)
- [ ] Bisa Bitmask DP dasar
- [ ] Bisa DP on Tree (subtree DP)
- [ ] Solve minimal 2 soal OSN arsip (kategori DP/Graf)
- [ ] Ikut minimal 1 virtual contest Codeforces
- [ ] Upsolving semua soal yang gagal

---

## 🟣 Fase 4: Lanjutan, Geometri & Simulasi OSN (Minggu 12–13)

### Minggu 12: Fenwick Tree/BIT, Segment Tree, Lazy Propagation, Set/Map Tricks

> **Struktur data lanjutan** — range queries & advanced STL

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Fenwick Tree / BIT (point update, range query) | [William Fiset — BIT](https://www.youtube.com/c/WilliamFiset-videos) | Trace BIT: array [1,2,3,4,5], update(3,+5), query(1,4) | CSES: [Range Queries](https://cses.fi/problemset/list/) — Dynamic Range Sum, Inversions | Catat: `i += i & (-i)` untuk update |
| **Selasa** | Segment Tree (range query, point update) | [William Fiset — Segment Tree](https://www.youtube.com/c/WilliamFiset-videos) | Gambar segment tree untuk array [3,1,4,1,5,9,2,6] | CSES: Dynamic Range Minimum Queries, Increasing Array Queries | Catat: build O(n), query/update O(log n) |
| **Rabu** | Segment Tree dengan Lazy Propagation | [Errichto — Lazy Propagation](https://www.youtube.com/c/Errichto) | Trace lazy propagation: range add + range sum query | CSES: Range Update Queries, Polynomial Queries | Catat: "push down lazy sebelum akses anak" |
| **Kamis** | Set/Map tricks (ordered set, policy-based, multiset tricks), Priority Queue lanjutan (lazy deletion) | [Errichto — STL tricks](https://www.youtube.com/c/Errichto) | Trace lower_bound/upper_bound di set {1,3,5,7}; kapan pakai BIT vs Segment Tree | CSES: Hotel Queries, List Removals; [Codeforces STL tricks](https://codeforces.com/problemset?tags=data+structures) | Catat: `lower_bound`, `upper_bound`, `*prev(it)` |
| **Jumat** | Mixed range queries + review | — | Buat tabel perbandingan BIT vs Segment Tree vs Lazy ST | [TLX TOKI](https://tlx.toki.id/) — soal range queries | Baca editorial |

**Checklist Minggu 12:**
- [ ] Bisa implement Fenwick Tree / BIT
- [ ] Bisa implement Segment Tree (iteratif / rekursif)
- [ ] Bisa Lazy Propagation untuk range update
- [ ] Bisa pakai lower_bound/upper_bound di set/map
- [ ] Tahu kapan pakai BIT vs Segment Tree
- [ ] Selesaikan minimal 6 soal CSES Range Queries

---

### Minggu 13: Geometri Dasar + Simulasi OSN

> **3 hari geometri + 2 hari simulasi** — tutup silabus geometri, lalu full simulasi OSN

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Geometri dasar: titik, koordinat Kartesius 2D, jarak Euclidean, teorema Pythagoras, garis & segmen garis | [Algorithms Live — Computational Geometry](https://www.youtube.com/c/AlgorithmsLive); [William Fiset — Geometry](https://www.youtube.com/c/WilliamFiset-videos) | Gambar bidang Kartesius, trace rumus jarak, dot product, cross product | [Codeforces Geometry](https://codeforces.com/problemset?tags=geometry) Rating 1200-1500; [CP-Algorithms Geometry](https://cp-algorithms.com/) — Basic Geometry | Catat: `dist = sqrt((x2-x1)² + (y2-y1)²)`, cross product sign |
| **Selasa** | Geometri lanjut: sudut, segitiga (luas), persegi, persegi panjang, lingkaran (luas, keliling, posisi titik) | [Algorithms Live — Geometry Part 2](https://www.youtube.com/c/AlgorithmsLive) | Gambar segitiga, hitung luas dengan cross product; gambar lingkaran, cek titik di dalam/luar | [Codeforces Geometry](https://codeforces.com/problemset?tags=geometry) Rating 1200-1500; [USACO Guide — Geometry](https://usaco.guide/) | Catat: "luas segitiga = |cross(B-A, C-A)|/2" |
| **Rabu** | Convex Hull (konsep, algoritma Graham Scan / Andrew's Monotone Chain) | [William Fiset — Convex Hull](https://www.youtube.com/c/WilliamFiset-videos) | Trace convex hull pada 8 titik di kertas; gambar upper & lower hull | [Codeforces Convex Hull](https://codeforces.com/problemset?tags=geometry) Rating 1500+; [CP-Algorithms](https://cp-algorithms.com/) — Convex Hull | Catat: "sort by x, lalu bangun hull atas & bawah" |
| **Kamis** | **Simulasi OSN 1** — kerjakan 3-4 soal OSN tahun lalu dalam kondisi ujian | [TLX TOKI Arsip](https://tlx.toki.id/) | 3 jam simulasi (bisa dipecah 1.5+1.5) | Tanpa lihat editorial, kondisi ujian nyata | Review + upsolving setelah simulasi |
| **Jumat** | **Simulasi OSN 2** — set soal berbeda + review final | [TLX TOKI Arsip](https://tlx.toki.id/) | 2 jam simulasi + 1 jam review + perkuat topik terlemah | Fokus time management, strategi partial scoring | Review semua editorial + final polishing |

**Checklist Minggu 13:**
- [ ] Paham konsep geometri: titik, garis, segmen garis, jarak Euclidean
- [ ] Paham teorema Pythagoras & aplikasi di soal
- [ ] Bisa hitung luas segitiga dengan cross product
- [ ] Paham properti lingkaran (posisi titik, luas, keliling)
- [ ] Paham konsep convex hull & bisa implement Graham Scan / Andrew's
- [ ] Ikuti 2 sesi simulasi OSN full
- [ ] Upsolving semua soal simulasi yang gagal
- [ ] Review semua editorial simulasi
- [ ] Identifikasi dan perkuat topik terlemah
- [ ] Siap mental untuk OSN! 🏅

---

## ✅ Checklist Algoritma Lengkap

### Fase 0 — Rekursi, Struktur Data Dasar, Pencarian & Pengurutan Dasar
- [ ] Rekursi (base case, recursive case, pohon rekursi)
- [ ] Fungsi rekursi (factorial, fibonacci, Tower of Hanoi)
- [ ] Divide-and-conquer (konsep split-solve-merge)
- [ ] Tipe data primitif (int, long long, double, char, bool)
- [ ] Array 1D & multidimensi (2D)
- [ ] String & operasinya (substr, find, reverse, compare)
- [ ] Linear Search
- [ ] Stack (LIFO) — implement manual & STL
- [ ] Queue (FIFO) — implement manual & STL
- [ ] Deque (double-ended queue)
- [ ] Binary Heap & Priority Queue
- [ ] Bubble Sort
- [ ] Insertion Sort

### Fase 1 — Sorting Lanjutan, Searching, Math, Prefix Sum, Greedy, Complete Search
- [ ] Quicksort, Merge Sort, Heapsort
- [ ] Sorting (custom comparator + coordinate compression)
- [ ] Binary Search on array & on answer
- [ ] Two Pointers
- [ ] Sliding Window (fixed & variable)
- [ ] GCD, LCM (Euclidean algorithm)
- [ ] Extended Euclidean Algorithm
- [ ] Sieve of Eratosthenes
- [ ] Fast Exponentiation (binary exponentiation)
- [ ] Modular Arithmetic & Modular Inverse (Fermat's little theorem)
- [ ] Kombinatorika dasar (nCr mod p)
- [ ] Prefix Sum 1D & 2D
- [ ] Difference Array (range update O(1))
- [ ] Greedy (activity selection, interval scheduling, exchange argument)
- [ ] Complete Search (brute-force: subset & permutasi generation)
- [ ] Backtracking (N-Queens, pruning)

### Fase 2 — Graf, Tree & Struktur Data
- [ ] Representasi graf (adjacency list, adjacency matrix, edge list)
- [ ] Graf berarah/tak berarah, berbobot/tak berbobot
- [ ] BFS (shortest path unweighted)
- [ ] DFS (connected components, time in/out)
- [ ] Cycle Detection (directed & undirected)
- [ ] Topological Sort (Kahn's + DFS)
- [ ] Dijkstra's Algorithm
- [ ] Bellman-Ford & negative cycle detection
- [ ] Floyd-Warshall
- [ ] 0-1 BFS
- [ ] DSU (Union-Find) dengan path compression & union by rank
- [ ] Kruskal's MST
- [ ] Prim's MST
- [ ] Rooted Tree (parent, child, depth, subtree)
- [ ] LCA (Lowest Common Ancestor) dengan Binary Lifting
- [ ] Monotonic Stack
- [ ] Monotonic Queue (sliding window max)

### Fase 3 — Dynamic Programming
- [ ] DP Dasar (Fibonacci, Coin Change)
- [ ] Knapsack 0/1
- [ ] Knapsack Unbounded
- [ ] LIS O(n²) & O(n log n)
- [ ] LCS
- [ ] Grid DP (2D)
- [ ] DP on Tree (subtree DP)
- [ ] Bitmask DP

### Fase 4 — Struktur Data Lanjutan & Geometri
- [ ] Fenwick Tree / BIT (point update, range query)
- [ ] Segment Tree (range query, point update)
- [ ] Lazy Propagation
- [ ] Set/Map tricks (lower_bound, upper_bound, ordered set)
- [ ] Geometri: titik, koordinat Kartesius 2D
- [ ] Geometri: garis, segmen garis, sudut
- [ ] Geometri: jarak Euclidean, teorema Pythagoras
- [ ] Geometri: segitiga (luas dengan cross product)
- [ ] Geometri: persegi, persegi panjang
- [ ] Geometri: lingkaran (luas, keliling, posisi titik)
- [ ] Convex Hull (Graham Scan / Andrew's Monotone Chain)

---

## 📚 Sumber Belajar

### Online Judges (Wajib)
| Platform | Link | Prioritas |
|---|---|---|
| **TLX TOKI** | [tlx.toki.id](https://tlx.toki.id/) | ⭐⭐⭐ Wajib — platform resmi OSN |
| **CSES Problem Set** | [cses.fi/problemset](https://cses.fi/problemset/) | ⭐⭐⭐ Wajib — 300 soal per topik |
| **Codeforces** | [codeforces.com](https://codeforces.com/) | ⭐⭐⭐ Wajib — contest rutin |
| **AtCoder** | [atcoder.jp](https://atcoder.jp/) | ⭐⭐ Sangat direkomendasikan |
| **USACO Guide** | [usaco.guide](https://usaco.guide/) | ⭐⭐ Roadmap + latihan per topik |

### Buku & Materi (Semua Gratis)
| Sumber | Link | Keterangan |
|---|---|---|
| **CP Handbook** | [cses.fi/book](https://cses.fi/book/book.pdf) | Buku utama CP, wajib baca |
| **USACO Guide** | [usaco.guide](https://usaco.guide/) | Roadmap + latihan per topik |
| **CP-Algorithms** | [cp-algorithms.com](https://cp-algorithms.com/) | Referensi lengkap algoritma & geometri |
| **AtCoder DP Contest** | [atcoder.jp/contests/dp](https://atcoder.jp/contests/dp) | 26 soal DP klasik |
| **TLX TOKI Training Gate** | [tlx.toki.id](https://tlx.toki.id/) | Materi pelatihan resmi Indonesia |

### YouTube Channels
| Channel | Fokus | Link |
|---|---|---|
| **Errichto** | CP strategy & algoritma | [youtube.com/c/Errichto](https://www.youtube.com/c/Errichto) |
| **Colin Galen** | Penjelasan mendalam | [youtube.com/c/ColinGalen](https://www.youtube.com/c/ColinGalen) |
| **William Fiset** | Tutorial algoritma visual | [youtube.com/c/WilliamFiset-videos](https://www.youtube.com/c/WilliamFiset-videos) |
| **NeetCode** | LeetCode + pola soal | [youtube.com/c/NeetCode](https://www.youtube.com/c/NeetCode) |
| **Algorithms Live** | Topik lanjutan (geometri, tree) | [youtube.com/c/AlgorithmsLive](https://www.youtube.com/c/AlgorithmsLive) |

---

## 💡 Tips Strategi Latihan Harian

1. **Selalu coret-coretan dulu** — jangan langsung coding sebelum punya rencana di kertas
2. **Baca soal 2x** sebelum mulai — pastikan kamu mengerti semua constraint
3. **Stuck 15 menit?** Lihat hint, bukan editorial langsung
4. **Stuck 30 menit?** Baca editorial, pahami idenya, coba implement sendiri
5. **Setelah AC** — baca editorial untuk lihat solusi lebih elegan
6. **Catat pola** — setiap soal yang solved, tulis 1 kalimat: "soal ini adalah [pola] karena [alasan]"
7. **Virtual contest** minimal 1x seminggu — kondisi contest = kondisi OSN
8. **Upsolving wajib** — soal contest yang gagal HARUS diselesaikan setelah contest
9. **Jangan skip Fase 0** — fondasi yang kuat = progress lebih cepat di fase selanjutnya
10. **Geometri jangan ditunda** — banyak siswa skip geometri, padahal sering keluar di OSN

---

*🏅 Semangat! Konsistensi 1.5 jam/hari selama 13 minggu = ~97.5 jam latihan. Lebih dari cukup untuk menguasai semua algoritma dasar OSN!*
