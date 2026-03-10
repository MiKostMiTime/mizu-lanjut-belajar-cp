# 📅 Roadmap OSN Informatika — 12 Minggu Menuju Juni 2026

> **Jadwal:** 1.5 jam/hari (90 menit) × 5x/minggu  
> **Asumsi:** Sudah paham materi dasar & matematika diskrit, tinggal pendalaman  
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
| Fase 1 | 1–3 | 1000–1200 (Newbie/Pupil) | Solve A-B konsisten |
| Fase 2 | 4–7 | 1200–1500 (Specialist) | Solve A-C konsisten |
| Fase 3 | 8–10 | 1500–1700 (Expert) | Solve A-D konsisten |
| Fase 4 | 11–12 | 1700+ (Candidate Master) | Kompetitif untuk medali |

---

## 🟢 Fase 1: Pemanasan & Pendalaman (Minggu 1–3)

### Minggu 1: Sorting, Binary Search, Two Pointers, Sliding Window

> **Topik perpanas** — kamu sudah tahu dasarnya, sekarang perdalami dan hafalkan polanya

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Sorting lanjutan (merge sort, custom comparator, coordinate compression) | [Errichto — Sorting](https://www.youtube.com/c/Errichto) | Trace merge sort di kertas dengan array 8 elemen | CSES: [Sorting and Searching](https://cses.fi/problemset/list/) — Distinct Numbers, Apartments | Baca editorial CSES |
| **Selasa** | Binary Search on array & Binary Search on answer | [William Fiset — Binary Search](https://www.youtube.com/c/WilliamFiset-videos) | Trace BS di array [1,3,5,7,9], cari 7 | CSES: Ferris Wheel, Concert Tickets | Catat pola: "lo, hi, mid, kondisi" |
| **Rabu** | Two Pointers (sorted array, opposite ends) | [NeetCode — Two Pointers](https://www.youtube.com/c/NeetCode) | Trace two pointers di [1,2,3,4,5], target sum 6 | CSES: Sum of Two Values, Maximum Subarray Sum II | Catat kapan pakai two pointers |
| **Kamis** | Sliding Window (fixed & variable size) | [NeetCode — Sliding Window](https://www.youtube.com/c/NeetCode) | Trace sliding window max di [1,3,-1,-3,5,3] | CSES: Playlist, Towers | Catat pola window expansion & shrink |
| **Jumat** | Mixed practice + mini contest | Review semua video | Gambar semua pola di 1 kertas rangkuman | [Codeforces Virtual Div.2](https://codeforces.com/problemset) A-B | Baca editorial soal yang stuck |

**Checklist Minggu 1:**
- [ ] Bisa implement sorting dengan custom comparator
- [ ] Bisa binary search on answer (monotonic function)
- [ ] Bisa two pointers untuk sorted array
- [ ] Bisa sliding window fixed & variable size
- [ ] Selesaikan minimal 8 soal CSES Sorting & Searching

---

### Minggu 2: Matematika Diskrit Perpanas

> **Sudah punya dasarnya** — sekarang perdalami implementasi dan pola soal

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | GCD/LCM, Extended Euclidean Algorithm | [William Fiset — GCD](https://www.youtube.com/c/WilliamFiset-videos) | Trace Euclidean algorithm: gcd(48, 18) step by step | CSES: [Mathematics](https://cses.fi/problemset/list/) — Exponentiation, Modular Inverse | Catat: `gcd(a,b) = gcd(b, a%b)` |
| **Selasa** | Sieve of Eratosthenes & variasi (linear sieve, smallest prime factor) | [William Fiset — Sieve](https://www.youtube.com/c/WilliamFiset-videos) | Trace sieve untuk n=30 | CSES: Common Divisors, Counting Divisors | Catat kompleksitas O(n log log n) |
| **Rabu** | Modular Arithmetic (mod inverse, Fermat's little theorem) | [Errichto — Modular Arithmetic](https://www.youtube.com/c/Errichto) | Turunkan rumus: `a^(p-2) mod p = a^(-1) mod p` | CSES: Divisor Analysis, Binomial Coefficients | Catat kapan pakai mod inverse |
| **Kamis** | Fast Exponentiation (binary exponentiation) & Kombinatorika (nCr mod p) | [Errichto — Fast Exponentiation](https://www.youtube.com/c/Errichto) | Trace: 2^10 dengan binary exp, hanya 4 perkalian | [AtCoder — Mathematics problems](https://atcoder.jp/contests/abs) | Catat template binom mod p |
| **Jumat** | Mixed math problems + mini contest | — | Rangkum semua rumus di 1 halaman | [Codeforces Math problems](https://codeforces.com/problemset?tags=math) Rating 1200-1500 | Baca editorial |

**Checklist Minggu 2:**
- [ ] Bisa implement sieve of Eratosthenes
- [ ] Bisa fast exponentiation (binary exponentiation)
- [ ] Bisa hitung nCr mod p dengan mod inverse
- [ ] Bisa modular inverse dengan Fermat's little theorem
- [ ] Selesaikan minimal 6 soal CSES Mathematics

---

### Minggu 3: Prefix Sum & Greedy Algorithms

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Prefix Sum 1D & difference array | [NeetCode — Prefix Sum](https://www.youtube.com/c/NeetCode) | Trace prefix sum array [3,1,4,1,5,9], query [2,5] | CSES: Static Range Sum Queries, Forest Queries | Catat: `prefix[r] - prefix[l-1]` |
| **Selasa** | Prefix Sum 2D | [Colin Galen — 2D Prefix Sum](https://www.youtube.com/c/ColinGalen) | Gambar grid 4×4, trace 2D prefix sum & query | CSES: Forest Queries (2D versi), soal grid | Catat formula inclusion-exclusion |
| **Rabu** | Greedy fundamentals (activity selection, interval scheduling) | [Errichto — Greedy](https://www.youtube.com/c/Errichto) | Trace activity selection: [(1,3),(2,5),(3,6)] | CSES: Movie Festival, Stick Lengths | Catat: "sort dulu, lalu greedy" |
| **Kamis** | Greedy lanjutan (greedy dengan priority queue, exchange argument) | [Colin Galen — Greedy](https://www.youtube.com/c/ColinGalen) | Tulis "kenapa greedy benar?" untuk 1 soal kemarin | CSES: Collecting Numbers, Restaurant Customers | Latihan proof greedy |
| **Jumat** | Mixed practice Fase 1 + soal TLX | — | Review semua pola Minggu 1-3 di 1 kertas | [TLX TOKI](https://tlx.toki.id/) — soal Sorting & Greedy | Baca editorial + catat trik |

**Checklist Minggu 3:**
- [ ] Bisa prefix sum 1D dan 2D
- [ ] Bisa difference array untuk range update O(1)
- [ ] Bisa greedy activity selection/interval scheduling
- [ ] Bisa buktikan kenapa greedy benar (exchange argument dasar)
- [ ] Selesaikan minimal 8 soal CSES kombinasi Fase 1

---

## 🟡 Fase 2: Graf & Struktur Data (Minggu 4–7)

### Minggu 4: BFS, DFS, Connected Components, Topological Sort

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | BFS (level-order traversal, shortest path unweighted) | [William Fiset — BFS](https://www.youtube.com/c/WilliamFiset-videos) | Trace BFS di graf 6 node, gambar queue state tiap step | CSES: [Graph Algorithms](https://cses.fi/problemset/list/) — Counting Rooms, Labyrinth | Catat: BFS → shortest path unweighted |
| **Selasa** | DFS (rekursif & iteratif, time in/out) | [William Fiset — DFS](https://www.youtube.com/c/WilliamFiset-videos) | Trace DFS di graf yang sama, gambar DFS tree | CSES: Building Roads, Message Route | Catat: DFS → connected components |
| **Rabu** | Cycle Detection (directed & undirected) | [William Fiset — Cycle Detection](https://www.youtube.com/c/WilliamFiset-videos) | Gambar graf bersikel, trace deteksi dengan color array | CSES: Round Trip, Round Trip II | Catat: 3-color DFS untuk directed graph |
| **Kamis** | Topological Sort (Kahn's BFS + DFS post-order) | [William Fiset — Topological Sort](https://www.youtube.com/c/WilliamFiset-videos) | Trace Kahn's algorithm pada DAG 5 node | CSES: Course Schedule, Longest Flight Route | Catat: aplikasi = dependency ordering |
| **Jumat** | Mixed BFS/DFS problems | — | Gambar perbedaan BFS tree vs DFS tree | [Codeforces Graph problems](https://codeforces.com/problemset?tags=graphs) Rating 1200-1500 | Baca editorial |

**Checklist Minggu 4:**
- [ ] Bisa implement BFS (iteratif dengan queue)
- [ ] Bisa implement DFS (rekursif & iteratif)
- [ ] Bisa deteksi cycle di directed & undirected graph
- [ ] Bisa topological sort dengan Kahn's algorithm & DFS
- [ ] Selesaikan minimal 8 soal CSES Graph Algorithms bagian awal

---

### Minggu 5: Shortest Path (Dijkstra, Bellman-Ford, Floyd-Warshall, 0-1 BFS)

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Dijkstra's Algorithm (dengan priority queue) | [William Fiset — Dijkstra](https://www.youtube.com/c/WilliamFiset-videos) | Trace Dijkstra di graf berbobot 5 node, tabel dist[] | CSES: Shortest Routes I, Shortest Routes II | Catat: hanya untuk non-negative weights |
| **Selasa** | Bellman-Ford & deteksi negative cycle | [William Fiset — Bellman-Ford](https://www.youtube.com/c/WilliamFiset-videos) | Trace Bellman-Ford, gambar relaxation per iterasi | CSES: High Score, Cycle Finding | Catat: O(VE), bisa negative weights |
| **Rabu** | Floyd-Warshall (all-pairs shortest path) | [William Fiset — Floyd-Warshall](https://www.youtube.com/c/WilliamFiset-videos) | Trace matriks dist[][] pada graph 4 node | CSES: Planets Queries I (latihan) | Catat: O(V³), untuk graph kecil |
| **Kamis** | 0-1 BFS (bobot 0 atau 1, lebih cepat dari Dijkstra) | [Errichto — 0-1 BFS](https://www.youtube.com/c/Errichto) | Bandingkan BFS vs 0-1 BFS untuk graph yang sama | CSES: Monsters (variasi BFS) | Catat: deque, push front (0) / push back (1) |
| **Jumat** | Mixed shortest path problems | — | Buat tabel: "kapan pakai algoritma apa?" | [TLX TOKI](https://tlx.toki.id/) — soal shortest path | Baca editorial |

**Checklist Minggu 5:**
- [ ] Bisa Dijkstra dengan priority_queue
- [ ] Bisa Bellman-Ford dan deteksi negative cycle
- [ ] Bisa Floyd-Warshall
- [ ] Tahu kapan pakai algoritma mana
- [ ] Selesaikan minimal 5 soal CSES Shortest Path

---

### Minggu 6: MST (Kruskal, Prim) & DSU (Union-Find)

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | DSU (Union-Find) dengan path compression & union by rank | [William Fiset — DSU](https://www.youtube.com/c/WilliamFiset-videos) | Trace union-find operasi: union(1,2), union(2,3), find(1) | CSES: Road Reparation (DSU part) | Catat: amortized O(α(n)) ≈ O(1) |
| **Selasa** | Kruskal's MST (sort edges + DSU) | [William Fiset — Kruskal](https://www.youtube.com/c/WilliamFiset-videos) | Trace Kruskal pada graf 5 node, list edges terurut | CSES: Road Reparation, Building Teams | Catat: sort edges by weight |
| **Rabu** | Prim's MST (greedy dengan priority queue) | [William Fiset — Prim](https://www.youtube.com/c/WilliamFiset-videos) | Trace Prim, gambar expansion dari source node | CSES: Road Construction (variasi) | Catat: lebih baik untuk dense graph |
| **Kamis** | Aplikasi DSU lanjutan (offline query, dynamic connectivity) | [Colin Galen — DSU Applications](https://www.youtube.com/c/ColinGalen) | Trace DSU dengan rollback (undo union) | [AtCoder ABC](https://atcoder.jp/contests/abs) DSU problems | Catat: DSU bisa untuk lebih dari MST |
| **Jumat** | Mixed MST + DSU problems | — | Gambar perbedaan Kruskal vs Prim | [Codeforces MST problems](https://codeforces.com/problemset?tags=dsu) | Baca editorial |

**Checklist Minggu 6:**
- [ ] Bisa implement DSU dengan path compression & union by rank
- [ ] Bisa Kruskal's MST
- [ ] Bisa Prim's MST
- [ ] Tahu kapan pakai Kruskal vs Prim
- [ ] Selesaikan minimal 5 soal CSES MST/DSU

---

### Minggu 7: Monotonic Stack/Queue, Priority Queue Lanjutan, Set/Map Tricks

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Monotonic Stack (next greater element, histogram) | [NeetCode — Monotonic Stack](https://www.youtube.com/c/NeetCode) | Trace next greater element di [2,1,5,3,4] | CSES: Nearest Smaller Values, Buildings and Shadows | Catat: stack always monotonic |
| **Selasa** | Monotonic Queue (sliding window maximum) | [Colin Galen — Monotonic Queue](https://www.youtube.com/c/ColinGalen) | Trace sliding window max di [1,3,-1,-3,5,3], k=3 | CSES: Maximum Subarray Sum II (deque versi) | Catat: deque front = current max |
| **Rabu** | Priority Queue lanjutan (custom comparator, lazy deletion) | [Errichto — Priority Queue tricks](https://www.youtube.com/c/Errichto) | Trace heap operations: push, pop, top | CSES: Sorting and Searching — Josephus Problem | Catat: `priority_queue<int, vector<int>, greater<int>>` |
| **Kamis** | Set/Map tricks (ordered_set, policy-based, multiset tricks) | [Errichto — STL tricks](https://www.youtube.com/c/Errichto) | Trace operasi lower_bound/upper_bound di set {1,3,5,7} | [Codeforces STL tricks](https://codeforces.com/problemset?tags=data+structures) | Catat: `lower_bound`, `upper_bound`, `*prev(it)` |
| **Jumat** | Mixed practice + review Fase 2 | — | Rangkum semua struktur data: tabel kompleksitas | [TLX TOKI](https://tlx.toki.id/) — soal data structure | Baca editorial + catat pola |

**Checklist Minggu 7:**
- [ ] Bisa monotonic stack untuk next greater/smaller element
- [ ] Bisa monotonic queue untuk sliding window maximum
- [ ] Bisa custom comparator untuk priority queue
- [ ] Bisa pakai lower_bound/upper_bound di set/map
- [ ] Selesaikan minimal 6 soal kombinasi Fase 2

---

## 🔴 Fase 3: Dynamic Programming (Minggu 8–10)

### Minggu 8: DP Dasar

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Konsep DP (memoization vs tabulation), Coin Change | [Errichto — DP Tutorial](https://www.youtube.com/c/Errichto) | Gambar recurrence tree Fibonacci, identifikasi overlapping subproblem | CSES: [Dynamic Programming](https://cses.fi/problemset/list/) — Dice Combinations, Minimizing Coins | Catat: "define state, write transition" |
| **Selasa** | Knapsack 0/1 | [NeetCode — 0/1 Knapsack](https://www.youtube.com/c/NeetCode) | Trace tabel DP knapsack: n=3 items, W=5 | CSES: 0/1 Knapsack, Book Shop | Catat: `dp[i][w] = max(dp[i-1][w], dp[i-1][w-wi]+vi)` |
| **Rabu** | Knapsack Unbounded | [NeetCode — Unbounded Knapsack](https://www.youtube.com/c/NeetCode) | Bandingkan tabel DP 0/1 vs unbounded | CSES: Coin Combinations I, Coin Combinations II | Catat: perbedaan inner loop order |
| **Kamis** | LIS (Longest Increasing Subsequence) O(n²) & O(n log n) | [Colin Galen — LIS](https://www.youtube.com/c/ColinGalen) | Trace LIS O(n log n) pada [3,1,4,1,5,9,2,6] | CSES: Increasing Subsequence | Catat: patience sorting trick |
| **Jumat** | LCS + mixed DP practice | [Errichto — DP](https://www.youtube.com/c/Errichto) | Trace tabel LCS: "ABCBDAB" vs "BDCAB" | [AtCoder DP Contest](https://atcoder.jp/contests/dp) — soal A-F | Baca editorial |

**Checklist Minggu 8:**
- [ ] Paham konsep memoization dan tabulation
- [ ] Bisa Knapsack 0/1 dan Unbounded
- [ ] Bisa LIS O(n log n)
- [ ] Bisa LCS
- [ ] Selesaikan minimal 8 soal CSES Dynamic Programming

---

### Minggu 9: DP Lanjutan

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Grid DP (paths, obstacles) | [NeetCode — Grid DP](https://www.youtube.com/c/NeetCode) | Trace grid DP 4×4, gambar tabel pengisian | CSES: Grid Paths, Array Description | Catat: "define state = cell (i,j)" |
| **Selasa** | DP on Tree (subtree DP, rerooting) | [Colin Galen — DP on Tree](https://www.youtube.com/c/ColinGalen) | Trace DP on tree: max independent set di pohon 5 node | CSES: Tree Matching, Tree Diameter (DP versi) | Catat: "post-order DFS untuk subtree DP" |
| **Rabu** | Bitmask DP dasar (TSP mini, assignment problem) | [Errichto — Bitmask DP](https://www.youtube.com/c/Errichto) | Trace bitmask DP TSP untuk 4 kota | [AtCoder DP Contest](https://atcoder.jp/contests/dp) — soal O (Matching) | Catat: `dp[mask][last]` |
| **Kamis** | DP dengan data structure (DP + segment tree dasar) | [Colin Galen — DP optimizations](https://www.youtube.com/c/ColinGalen) | Trace LIS dengan BIT sebagai optimasi | CSES: Increasing Subsequence (BIT versi) | Catat: kapan perlu optimize DP |
| **Jumat** | Mixed DP problems + soal OSN arsip | — | Review semua DP template di 1 kertas | [TLX TOKI](https://tlx.toki.id/) — soal DP OSN | Baca editorial |

**Checklist Minggu 9:**
- [ ] Bisa Grid DP (2D)
- [ ] Bisa DP on Tree (subtree DP)
- [ ] Bisa Bitmask DP dasar
- [ ] Selesaikan minimal 6 soal CSES DP lanjutan
- [ ] Selesaikan minimal 3 soal AtCoder DP Contest

---

### Minggu 10: DP Mixed Practice + Soal OSN Arsip

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Review & latihan soal DP campuran | [Errichto — DP Tips](https://www.youtube.com/c/Errichto) | Gambar "decision tree" untuk identifikasi tipe DP | [AtCoder DP Contest](https://atcoder.jp/contests/dp) — soal G-N | Baca editorial semua yang dikerjakan |
| **Selasa** | Soal OSN arsip — fokus DP | — | Trace solusi soal OSN di kertas dulu sebelum coding | [TLX TOKI](https://tlx.toki.id/) — Arsip OSN 2022-2024 | Pelajari editorial resmi OSN |
| **Rabu** | Soal OSN arsip — fokus Graf | — | Gambar contoh input/output sebelum coding | [TLX TOKI](https://tlx.toki.id/) — Arsip OSN | Pelajari editorial resmi OSN |
| **Kamis** | Virtual contest Codeforces (simulasi) | — | Pre-contest: tulis semua template yang diingat | [Codeforces Virtual](https://codeforces.com/problemset) — Div.2 full | Post-contest: baca semua editorial |
| **Jumat** | Upsolving + review kelemahan | — | Analisis: "kenapa saya stuck di soal ini?" | Soal yang tidak selesai kemarin | Baca editorial dengan teliti |

**Checklist Minggu 10:**
- [ ] Selesaikan minimal 5 soal AtCoder DP Contest (A-P)
- [ ] Solve minimal 2 soal OSN arsip (kategori DP)
- [ ] Ikut minimal 1 virtual contest Codeforces
- [ ] Upsolving semua soal yang gagal

---

## 🟣 Fase 4: Struktur Data Lanjutan & Simulasi OSN (Minggu 11–12)

### Minggu 11: Fenwick Tree/BIT, Segment Tree, Lazy Propagation

| Hari | Topik | Video (YouTube) | Coret-coretan | Soal Latihan | Editorial |
|---|---|---|---|---|---|
| **Senin** | Fenwick Tree / BIT (point update, range query) | [William Fiset — BIT](https://www.youtube.com/c/WilliamFiset-videos) | Trace BIT: array [1,2,3,4,5], update(3,+5), query(1,4) | CSES: [Range Queries](https://cses.fi/problemset/list/) — Dynamic Range Sum, Inversions | Catat: `i += i & (-i)` untuk update |
| **Selasa** | Segment Tree (range query, point update) | [William Fiset — Segment Tree](https://www.youtube.com/c/WilliamFiset-videos) | Gambar segment tree untuk array [3,1,4,1,5,9,2,6] | CSES: Dynamic Range Minimum Queries, Increasing Array Queries | Catat: build O(n), query/update O(log n) |
| **Rabu** | Segment Tree dengan Lazy Propagation | [Errichto — Lazy Propagation](https://www.youtube.com/c/Errichto) | Trace lazy propagation: range add + range sum query | CSES: Range Update Queries, Polynomial Queries | Catat: "push down lazy sebelum akses anak" |
| **Kamis** | Aplikasi Segment Tree (merge sort tree, persistent ST dasar) | [Colin Galen — Segment Tree](https://www.youtube.com/c/ColinGalen) | Trace aplikasi ST untuk count inversion | CSES: Range Queries — Hotel Queries, List Removals | Catat: kapan pakai BIT vs Segment Tree |
| **Jumat** | Mixed range queries problems | — | Buat tabel perbandingan BIT vs Segment Tree | [TLX TOKI](https://tlx.toki.id/) — soal range queries | Baca editorial |

**Checklist Minggu 11:**
- [ ] Bisa implement Fenwick Tree / BIT
- [ ] Bisa implement Segment Tree (iteratif / rekursif)
- [ ] Bisa Lazy Propagation untuk range update
- [ ] Tahu kapan pakai BIT vs Segment Tree
- [ ] Selesaikan minimal 6 soal CSES Range Queries

---

### Minggu 12: Simulasi OSN Full

| Hari | Aktivitas | Platform | Durasi | Catatan |
|---|---|---|---|---|
| **Senin** | **Simulasi OSN 1** — kerjakan 3-4 soal OSN tahun lalu dalam kondisi ujian | [TLX TOKI Arsip](https://tlx.toki.id/) | 3 jam simulasi | Tanpa lihat editorial, kondisi ujian nyata |
| **Selasa** | Review simulasi 1 + upsolving mendalam | TLX + CP-Algorithms | 1.5 jam | Pelajari semua editorial, catat kelemahanmu |
| **Rabu** | **Simulasi OSN 2** — set soal berbeda | [TLX TOKI Arsip](https://tlx.toki.id/) | 3 jam simulasi | Fokus time management |
| **Kamis** | Review simulasi 2 + reinforcement topik lemah | Target topik terlemah | 1.5 jam | Solve 2-3 soal topik yang paling lemah |
| **Jumat** | **Simulasi OSN 3** + review final | [TLX TOKI Arsip](https://tlx.toki.id/) | 2 jam simulasi + 1 jam review | Final polishing sebelum OSN |

**Checklist Minggu 12:**
- [ ] Ikuti 3 sesi simulasi OSN full
- [ ] Upsolving semua soal simulasi yang gagal
- [ ] Review semua editorial simulasi
- [ ] Identifikasi dan perkuat topik terlemah
- [ ] Siap mental untuk OSN! 🏅

---

## ✅ Checklist Algoritma Lengkap

### Fase 1 — Sorting, Searching, Math, Prefix Sum, Greedy
- [ ] Sorting (built-in + custom comparator + coordinate compression)
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
- [ ] Greedy (activity selection, interval scheduling)

### Fase 2 — Graf & Struktur Data
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
- [ ] Monotonic Stack
- [ ] Monotonic Queue (sliding window max)
- [ ] Set/Map tricks (lower_bound, upper_bound)

### Fase 3 — Dynamic Programming
- [ ] DP Dasar (Fibonacci, Coin Change)
- [ ] Knapsack 0/1
- [ ] Knapsack Unbounded
- [ ] LIS O(n²) & O(n log n)
- [ ] LCS
- [ ] Grid DP (2D)
- [ ] DP on Tree (subtree DP)
- [ ] Bitmask DP

### Fase 4 — Struktur Data Lanjutan
- [ ] Fenwick Tree / BIT (point update, range query)
- [ ] Segment Tree (range query, point update)
- [ ] Lazy Propagation

---

## 📚 Sumber Belajar

### Online Judges (Wajib)
| Platform | Link | Prioritas |
|---|---|---|
| **TLX TOKI** | [tlx.toki.id](https://tlx.toki.id/) | ⭐⭐⭐ Wajib — platform resmi OSN |
| **CSES Problem Set** | [cses.fi/problemset](https://cses.fi/problemset/) | ⭐⭐⭐ Wajib — 300 soal per topik |
| **Codeforces** | [codeforces.com](https://codeforces.com/) | ⭐⭐⭐ Wajib — contest rutin |
| **AtCoder** | [atcoder.jp](https://atcoder.jp/) | ⭐⭐ Sangat direkomendasikan |

### Buku & Materi (Semua Gratis)
| Sumber | Link | Keterangan |
|---|---|---|
| **CP Handbook** | [cses.fi/book](https://cses.fi/book/book.pdf) | Buku utama CP, wajib baca |
| **USACO Guide** | [usaco.guide](https://usaco.guide/) | Roadmap + latihan per topik |
| **CP-Algorithms** | [cp-algorithms.com](https://cp-algorithms.com/) | Referensi lengkap |
| **AtCoder DP Contest** | [atcoder.jp/contests/dp](https://atcoder.jp/contests/dp) | 26 soal DP klasik |

### YouTube Channels
| Channel | Fokus | Link |
|---|---|---|
| **Errichto** | CP strategy & algoritma | [youtube.com/c/Errichto](https://www.youtube.com/c/Errichto) |
| **Colin Galen** | Penjelasan mendalam | [youtube.com/c/ColinGalen](https://www.youtube.com/c/ColinGalen) |
| **William Fiset** | Tutorial algoritma visual | [youtube.com/c/WilliamFiset-videos](https://www.youtube.com/c/WilliamFiset-videos) |
| **NeetCode** | LeetCode + pola soal | [youtube.com/c/NeetCode](https://www.youtube.com/c/NeetCode) |

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

---

*🏅 Semangat! Konsistensi 1.5 jam/hari selama 12 minggu = ~90 jam latihan. Lebih dari cukup untuk menguasai semua algoritma dasar OSN!*
