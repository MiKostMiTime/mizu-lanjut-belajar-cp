# ✂️ Snippet Library — Template Kode CP

> Kumpulan template kode yang sering dipakai di competitive programming.  
> Copy-paste langsung ke solusi, sesuaikan dengan kebutuhan.

---

## 📋 Daftar Isi

1. [Segment Tree](#segment-tree)
2. [DSU (Union-Find)](#dsu-union-find)
3. [BFS Template](#bfs-template)
4. [Dijkstra Template](#dijkstra-template)
5. [Modular Exponentiation](#modular-exponentiation)
6. [Sieve of Eratosthenes](#sieve-of-eratosthenes)
7. [Binary Search Template](#binary-search-template)
8. [LIS O(n log n)](#lis-on-log-n)
9. [Fenwick Tree / BIT](#fenwick-tree--bit)
10. [Segment Tree dengan Lazy Propagation](#segment-tree-dengan-lazy-propagation)
11. [Topological Sort (Kahn's)](#topological-sort-kahns)
12. [Bellman-Ford](#bellman-ford)
13. [Floyd-Warshall](#floyd-warshall)
14. [Kruskal's MST](#kruskals-mst)
15. [Prefix Sum 2D](#prefix-sum-2d)

---

## Segment Tree

```cpp
// Segment Tree — Range Min Query, Point Update
// Ubah fungsi query sesuai kebutuhan (min, max, sum, dll)
struct SegTree {
    int n;
    vector<int> tree;

    SegTree(int n) : n(n), tree(4 * n, INT_MAX) {}

    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (idx <= mid) update(2*node, start, mid, idx, val);
            else update(2*node+1, mid+1, end, idx, val);
            tree[node] = min(tree[2*node], tree[2*node+1]);  // ubah min -> max/sum
        }
    }

    int query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) return INT_MAX;  // identity untuk min
        if (l <= start && end <= r) return tree[node];
        int mid = (start + end) / 2;
        return min(query(2*node, start, mid, l, r),
                   query(2*node+1, mid+1, end, l, r));
    }

    void update(int idx, int val) { update(1, 0, n-1, idx, val); }
    int query(int l, int r) { return query(1, 0, n-1, l, r); }
};

// Cara pakai:
// SegTree st(n);
// st.update(i, val);        // update index i dengan val
// int ans = st.query(l, r); // query [l, r]
```

---

## DSU (Union-Find)

```cpp
// DSU dengan Path Compression + Union by Rank
// Kompleksitas: amortized O(α(n)) ≈ O(1) per operasi
struct DSU {
    vector<int> parent, rank_;
    int components;

    DSU(int n) : parent(n), rank_(n, 0), components(n) {
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);  // path compression
        return parent[x];
    }

    bool unite(int x, int y) {
        x = find(x); y = find(y);
        if (x == y) return false;  // sudah satu komponen
        if (rank_[x] < rank_[y]) swap(x, y);
        parent[y] = x;
        if (rank_[x] == rank_[y]) rank_[x]++;
        components--;
        return true;
    }

    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};

// Cara pakai:
// DSU dsu(n);
// dsu.unite(u, v);
// if (dsu.connected(u, v)) { ... }
// dsu.components  → jumlah komponen
```

---

## BFS Template

```cpp
// BFS — Shortest Path Unweighted / Connected Components
// adj: adjacency list (0-indexed)
vector<int> bfs(int src, int n, vector<vector<int>>& adj) {
    vector<int> dist(n, -1);
    queue<int> q;
    dist[src] = 0;
    q.push(src);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;  // dist[i] = jarak dari src ke i, -1 jika tidak terhubung
}

// BFS Grid (untuk soal maze/grid)
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void bfsGrid(vector<vector<int>>& grid, int sr, int sc) {
    int rows = grid.size(), cols = grid[0].size();
    vector<vector<int>> dist(rows, vector<int>(cols, -1));
    queue<pair<int,int>> q;
    dist[sr][sc] = 0;
    q.push({sr, sc});

    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        for (int d = 0; d < 4; d++) {
            int nr = r + dx[d], nc = c + dy[d];
            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols
                && grid[nr][nc] != '#' && dist[nr][nc] == -1) {
                dist[nr][nc] = dist[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }
}
```

---

## Dijkstra Template

```cpp
// Dijkstra — Shortest Path Weighted (non-negative weights)
// Kompleksitas: O((V + E) log V)
typedef pair<long long, int> pli;  // (jarak, node)

vector<long long> dijkstra(int src, int n, vector<vector<pair<int,int>>>& adj) {
    vector<long long> dist(n, LLONG_MAX);
    priority_queue<pli, vector<pli>, greater<pli>> pq;  // min-heap
    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;  // outdated entry, skip

        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;  // dist[i] = jarak terpendek dari src ke i
}

// Cara pakai:
// vector<vector<pair<int,int>>> adj(n);
// adj[u].push_back({v, w});  // edge u->v berbobot w
// auto dist = dijkstra(0, n, adj);
```

---

## Modular Exponentiation

```cpp
// Fast Exponentiation (Binary Exponentiation)
// Hitung base^exp mod MOD dalam O(log exp)
const long long MOD = 1e9 + 7;

long long power(long long base, long long exp, long long mod = MOD) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

// Modular Inverse (Fermat's Little Theorem, hanya untuk mod prima)
long long modInverse(long long a, long long mod = MOD) {
    return power(a, mod - 2, mod);
}

// Precompute faktorial untuk kombinatorika
vector<long long> fact, inv_fact;
void precompute(int n) {
    fact.resize(n + 1);
    inv_fact.resize(n + 1);
    fact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = fact[i-1] * i % MOD;
    inv_fact[n] = modInverse(fact[n]);
    for (int i = n - 1; i >= 0; i--) inv_fact[i] = inv_fact[i+1] * (i+1) % MOD;
}

// nCr mod p
long long C(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] % MOD * inv_fact[r] % MOD * inv_fact[n-r] % MOD;
}
```

---

## Sieve of Eratosthenes

```cpp
// Sieve of Eratosthenes — Cari semua bilangan prima sampai n
// Kompleksitas: O(n log log n)
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

// Linear Sieve — juga beri smallest prime factor (SPF)
vector<int> spf;  // smallest prime factor
void linearSieve(int n) {
    spf.assign(n + 1, 0);
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            primes.push_back(i);
        }
        for (int p : primes) {
            if (p > spf[i] || (long long)i * p > n) break;
            spf[i * p] = p;
        }
    }
}

// Faktorisasi menggunakan SPF (setelah linearSieve)
vector<pair<int,int>> factorize(int n) {
    vector<pair<int,int>> factors;
    while (n > 1) {
        int p = spf[n], cnt = 0;
        while (n % p == 0) { n /= p; cnt++; }
        factors.push_back({p, cnt});
    }
    return factors;
}
```

---

## Binary Search Template

```cpp
// Binary Search — cari nilai di array yang terurut
int binarySearch(vector<int>& arr, int target) {
    int lo = 0, hi = arr.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;  // tidak ditemukan
}

// Binary Search on Answer — cari nilai x terkecil yang satisfies f(x)
// Asumsi: f(lo-1) = false, f(hi) = true (monotonic)
// Ubah fungsi check sesuai kondisi soal
bool check(long long x) {
    // return true jika x memenuhi kondisi, false jika tidak
    return true;  // placeholder
}

long long binarySearchAnswer(long long lo, long long hi) {
    while (lo < hi) {
        long long mid = lo + (hi - lo) / 2;
        if (check(mid)) hi = mid;
        else lo = mid + 1;
    }
    return lo;  // nilai terkecil yang satisfies check
}

// Pakai STL: lower_bound / upper_bound
// lower_bound(arr, arr+n, x) → pointer ke element pertama >= x
// upper_bound(arr, arr+n, x) → pointer ke element pertama > x
```

---

## LIS O(n log n)

```cpp
// Longest Increasing Subsequence — O(n log n)
// Mengembalikan panjang LIS
int lis(vector<int>& arr) {
    vector<int> dp;  // dp[i] = elemen terkecil yang berakhir LIS panjang (i+1)
    for (int x : arr) {
        auto it = lower_bound(dp.begin(), dp.end(), x);
        if (it == dp.end()) dp.push_back(x);
        else *it = x;
    }
    return dp.size();
}

// LIS Non-Decreasing (ganti lower_bound -> upper_bound)
int lisNonDecreasing(vector<int>& arr) {
    vector<int> dp;
    for (int x : arr) {
        auto it = upper_bound(dp.begin(), dp.end(), x);
        if (it == dp.end()) dp.push_back(x);
        else *it = x;
    }
    return dp.size();
}

// Rekonstruksi LIS (dapatkan elemen-elemen LIS, bukan hanya panjang)
vector<int> lisReconstruct(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp, parent(n, -1), pos;
    vector<int> idx;  // idx[i] = index elemen di dp[i]

    for (int i = 0; i < n; i++) {
        auto it = lower_bound(dp.begin(), dp.end(), arr[i]);
        int p = it - dp.begin();
        if (it == dp.end()) { dp.push_back(arr[i]); idx.push_back(i); }
        else { dp[p] = arr[i]; idx[p] = i; }
        parent[i] = (p > 0) ? idx[p-1] : -1;
    }

    // Rekonstruksi path
    vector<int> result;
    int cur = idx.back();
    while (cur != -1) { result.push_back(arr[cur]); cur = parent[cur]; }
    reverse(result.begin(), result.end());
    return result;
}
```

---

## Fenwick Tree / BIT

```cpp
// Fenwick Tree / Binary Indexed Tree
// Point update, range query (prefix sum)
// Kompleksitas: O(log n) per operasi
struct BIT {
    int n;
    vector<long long> tree;

    BIT(int n) : n(n), tree(n + 1, 0) {}

    void update(int i, long long delta) {  // add delta ke index i (1-indexed)
        for (; i <= n; i += i & (-i)) tree[i] += delta;
    }

    long long query(int i) {  // sum dari 1 sampai i
        long long sum = 0;
        for (; i > 0; i -= i & (-i)) sum += tree[i];
        return sum;
    }

    long long query(int l, int r) {  // sum dari l sampai r
        return query(r) - query(l - 1);
    }
};

// BIT 2D (untuk soal 2D range sum)
struct BIT2D {
    int n, m;
    vector<vector<long long>> tree;

    BIT2D(int n, int m) : n(n), m(m), tree(n + 1, vector<long long>(m + 1, 0)) {}

    void update(int x, int y, long long delta) {
        for (int i = x; i <= n; i += i & (-i))
            for (int j = y; j <= m; j += j & (-j))
                tree[i][j] += delta;
    }

    long long query(int x, int y) {
        long long sum = 0;
        for (int i = x; i > 0; i -= i & (-i))
            for (int j = y; j > 0; j -= j & (-j))
                sum += tree[i][j];
        return sum;
    }
};
```

---

## Segment Tree dengan Lazy Propagation

```cpp
// Segment Tree dengan Lazy Propagation
// Range add update, range sum query
struct LazySegTree {
    int n;
    vector<long long> tree, lazy;

    LazySegTree(int n) : n(n), tree(4 * n, 0), lazy(4 * n, 0) {}

    void build(vector<int>& arr, int node, int start, int end) {
        if (start == end) { tree[node] = arr[start]; return; }
        int mid = (start + end) / 2;
        build(arr, 2*node, start, mid);
        build(arr, 2*node+1, mid+1, end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }

    void pushDown(int node, int start, int end) {
        if (lazy[node] != 0) {
            int mid = (start + end) / 2;
            tree[2*node] += lazy[node] * (mid - start + 1);
            tree[2*node+1] += lazy[node] * (end - mid);
            lazy[2*node] += lazy[node];
            lazy[2*node+1] += lazy[node];
            lazy[node] = 0;
        }
    }

    void update(int node, int start, int end, int l, int r, long long val) {
        if (r < start || end < l) return;
        if (l <= start && end <= r) {
            tree[node] += val * (end - start + 1);
            lazy[node] += val;
            return;
        }
        pushDown(node, start, end);
        int mid = (start + end) / 2;
        update(2*node, start, mid, l, r, val);
        update(2*node+1, mid+1, end, l, r, val);
        tree[node] = tree[2*node] + tree[2*node+1];
    }

    long long query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) return 0;
        if (l <= start && end <= r) return tree[node];
        pushDown(node, start, end);
        int mid = (start + end) / 2;
        return query(2*node, start, mid, l, r) +
               query(2*node+1, mid+1, end, l, r);
    }

    void build(vector<int>& arr) { build(arr, 1, 0, n-1); }
    void update(int l, int r, long long val) { update(1, 0, n-1, l, r, val); }
    long long query(int l, int r) { return query(1, 0, n-1, l, r); }
};
```

---

## Topological Sort (Kahn's)

```cpp
// Topological Sort dengan BFS (Kahn's Algorithm)
// Mengembalikan urutan topologi, atau empty jika ada cycle
vector<int> topoSort(int n, vector<vector<int>>& adj) {
    vector<int> indegree(n, 0);
    for (int u = 0; u < n; u++)
        for (int v : adj[u]) indegree[v]++;

    queue<int> q;
    for (int i = 0; i < n; i++)
        if (indegree[i] == 0) q.push(i);

    vector<int> order;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        order.push_back(u);
        for (int v : adj[u]) {
            if (--indegree[v] == 0) q.push(v);
        }
    }

    if ((int)order.size() != n) return {};  // ada cycle
    return order;
}
```

---

## Bellman-Ford

```cpp
// Bellman-Ford — Shortest Path dengan Negative Weights
// Kompleksitas: O(VE)
struct Edge { int u, v, w; };

vector<long long> bellmanFord(int src, int n, vector<Edge>& edges) {
    vector<long long> dist(n, LLONG_MAX);
    dist[src] = 0;

    for (int i = 0; i < n - 1; i++) {
        for (auto& [u, v, w] : edges) {
            if (dist[u] != LLONG_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Deteksi negative cycle
    for (auto& [u, v, w] : edges) {
        if (dist[u] != LLONG_MAX && dist[u] + w < dist[v]) {
            dist[v] = LLONG_MIN;  // node ini berada di negative cycle atau bisa dicapai dari negative cycle
        }
    }

    return dist;
}
```

---

## Floyd-Warshall

```cpp
// Floyd-Warshall — All-Pairs Shortest Path
// Kompleksitas: O(V^3)
void floydWarshall(vector<vector<long long>>& dist, int n) {
    // Inisialisasi: dist[i][j] = bobot edge i->j, atau INF jika tidak ada edge
    // dist[i][i] = 0

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dist[i][k] != LLONG_MAX && dist[k][j] != LLONG_MAX)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    // Setelah ini, dist[i][j] = jarak terpendek dari i ke j
    // Jika dist[i][i] < 0 → ada negative cycle
}
```

---

## Kruskal's MST

```cpp
// Kruskal's MST menggunakan DSU
// Kompleksitas: O(E log E)
struct Edge {
    int u, v, w;
    bool operator<(const Edge& other) const { return w < other.w; }
};

long long kruskal(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end());
    DSU dsu(n);  // gunakan struct DSU dari atas
    long long mstWeight = 0;
    int edgeCount = 0;

    for (auto& [u, v, w] : edges) {
        if (dsu.unite(u, v)) {
            mstWeight += w;
            edgeCount++;
            if (edgeCount == n - 1) break;  // MST sudah lengkap
        }
    }

    if (edgeCount != n - 1) return -1;  // graph tidak connected
    return mstWeight;
}
```

---

## Prefix Sum 2D

```cpp
// Prefix Sum 2D
// Build: O(n*m), Query: O(1)
struct PrefixSum2D {
    int n, m;
    vector<vector<long long>> psum;

    PrefixSum2D(vector<vector<int>>& grid) {
        n = grid.size(); m = grid[0].size();
        psum.assign(n + 1, vector<long long>(m + 1, 0));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                psum[i][j] = grid[i-1][j-1]
                           + psum[i-1][j] + psum[i][j-1] - psum[i-1][j-1];
    }

    // Sum dari (r1,c1) sampai (r2,c2) — 0-indexed
    long long query(int r1, int c1, int r2, int c2) {
        r1++; c1++; r2++; c2++;  // convert ke 1-indexed
        return psum[r2][c2] - psum[r1-1][c2] - psum[r2][c1-1] + psum[r1-1][c1-1];
    }
};
```

---

*✂️ Tip: Copy snippet yang dibutuhkan ke template.cpp, lalu sesuaikan dengan soal. Jangan hafal kode — pahami logikanya!*
