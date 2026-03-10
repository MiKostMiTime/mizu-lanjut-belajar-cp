# 💻 Tutorial Migrasi CLion → Neovim untuk Competitive Programming

> **Platform:** macOS dengan iTerm2  
> **Target:** Setup Neovim yang optimal untuk CP, lebih ringan dan lebih cepat dari CLion

---

## Bagian 1: Kenapa Pindah dari CLion?

### Perbandingan IDE untuk Competitive Programming

| Aspek | CLion | VSCode | Neovim |
|---|---|---|---|
| **Waktu buka** | 15-30 detik | 3-5 detik | < 0.5 detik |
| **RAM usage** | 500MB - 1GB+ | 200-400MB | 30-80MB |
| **Support lomba** | Tidak semua lomba izinkan | Beberapa lomba izinkan | Hampir semua terminal diizinkan |
| **Ketergantungan mouse** | Tinggi | Sedang | Nol — semua keyboard |
| **Kustomisasi** | Terbatas | Sedang | Penuh (Lua) |
| **Ketersediaan** | Perlu install JetBrains | Tersedia luas | Built-in di hampir semua OS |
| **Lomba offline** | Bergantung komputer panitia | Bergantung komputer panitia | Bisa pakai vim bawaan OS |

### Kenapa CLion Kurang Ideal untuk CP?

- **Overkill** — CLion dirancang untuk project besar (ribuan file), bukan satu file .cpp
- **Lambat** — Boot time 15-30 detik menyita waktu dan fokus
- **Boros RAM** — Membebani laptop, terutama saat contest panjang
- **Mouse dependency** — Di lomba, kamu mau fokus pada algoritma, bukan navigasi mouse
- **Tidak semua lomba support** — OSN/ICPC biasanya menyediakan terminal, bukan IDE berat

> 💡 **Kesimpulan:** Untuk CP, kamu hanya butuh: **teks editor cepat + compiler + terminal**. Neovim memberikan ketiganya dengan sempurna.

---

## Bagian 2: Install Prerequisites

### 2.1 Install Homebrew (jika belum)

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

### 2.2 Install Semua Dependencies

```bash
# Tool utama
brew install neovim
brew install git
brew install lazygit
brew install ripgrep
brew install fd
brew install node

# Xcode Command Line Tools (untuk compiler C++)
xcode-select --install
```

**Penjelasan tiap tool:**
| Tool | Kegunaan |
|---|---|
| `neovim` | Text editor utama kita |
| `git` | Version control |
| `lazygit` | Git GUI di terminal (super nyaman) |
| `ripgrep` | Pencarian file super cepat (dipakai plugin) |
| `fd` | Find file modern (dipakai plugin) |
| `node` | Diperlukan beberapa plugin Neovim |
| `xcode-select` | Compiler C++ (clang++) untuk macOS |

### 2.3 Install Font: JetBrainsMono Nerd Font

Font ini **wajib** agar icon dan simbol di Neovim tampil dengan benar:

```bash
brew tap homebrew/cask-fonts
brew install --cask font-jetbrains-mono-nerd-font
```

### 2.4 Setup iTerm2

**Install iTerm2:**
```bash
brew install --cask iterm2
```

**Setting font di iTerm2:**
1. Buka iTerm2 → Preferences (`Cmd + ,`)
2. Profiles → Text → Font
3. Pilih **"JetBrainsMono Nerd Font"**, ukuran **14**

**Setting warna (theme Catppuccin/Tokyo Night):**
1. iTerm2 → Preferences → Profiles → Colors
2. Color Presets → Import
3. Download dari: [https://iterm2colorschemes.com/](https://iterm2colorschemes.com/) → pilih **Tokyo Night**

**Key mappings yang berguna di iTerm2:**
- `Cmd + D` — split horizontal
- `Cmd + Shift + D` — split vertikal
- `Cmd + T` — tab baru
- `Cmd + [/]` — pindah pane

---

## Bagian 3: Install Config Neovim untuk CP

### Opsi A: Pakai Config yang Sudah Siap (Direkomendasikan untuk Pemula)

Config ini sudah include semua plugin CP yang dibutuhkan:

```bash
# Backup config neovim yang ada (jika ada)
mv ~/.config/nvim ~/.config/nvim.backup 2>/dev/null

# Clone config CP
git clone https://github.com/anish384/nvim-cp ~/.config/nvim

# Buka neovim — plugin akan ter-install otomatis
nvim
```

Saat pertama buka, Neovim akan otomatis download dan install semua plugin. Tunggu hingga selesai (1-2 menit).

### Opsi B: Setup LazyVim Manual dengan Custom Config

Jika ingin lebih paham apa yang diinstall:

```bash
# Backup config yang ada
mv ~/.config/nvim ~/.config/nvim.backup 2>/dev/null

# Buat struktur folder
mkdir -p ~/.config/nvim/lua/plugins
mkdir -p ~/.config/nvim/lua/config
```

**File `~/.config/nvim/init.lua`:**
```lua
-- Bootstrap lazy.nvim
local lazypath = vim.fn.stdpath("data") .. "/lazy/lazy.nvim"
if not vim.loop.fs_stat(lazypath) then
  vim.fn.system({
    "git",
    "clone",
    "--filter=blob:none",
    "https://github.com/folke/lazy.nvim.git",
    "--branch=stable",
    lazypath,
  })
end
vim.opt.rtp:prepend(lazypath)

require("config.options")
require("config.keymaps")
require("lazy").setup("plugins")
```

**File `~/.config/nvim/lua/config/options.lua`:**
```lua
local opt = vim.opt

opt.number = true          -- line numbers
opt.relativenumber = true  -- relative line numbers (super useful!)
opt.tabstop = 4
opt.shiftwidth = 4
opt.expandtab = true
opt.smartindent = true
opt.wrap = false
opt.swapfile = false
opt.backup = false
opt.undofile = true
opt.hlsearch = false
opt.incsearch = true
opt.termguicolors = true
opt.scrolloff = 8
opt.signcolumn = "yes"
opt.updatetime = 50
opt.colorcolumn = "80"
opt.clipboard = "unnamedplus"  -- share clipboard with system
```

---

## Bagian 4: Cara Pakai Neovim Sehari-hari untuk CP

### Konsep Penting: Terminal-Based Editor

Di Neovim, **kamu ketik perintah, bukan klik-klik**. Ini terdengar susah di awal, tapi setelah terbiasa, kamu bisa navigasi dan edit **jauh lebih cepat** dari mouse.

Neovim punya **mode**:
- **Normal mode** — navigasi, copy, delete (default saat buka)
- **Insert mode** — ketik kode (tekan `i` untuk masuk)
- **Visual mode** — select text (tekan `v`)
- **Command mode** — perintah seperti save, quit (tekan `:`)

### Workflow Harian CP

```
1. Buka terminal (iTerm2)
2. Navigasi ke folder: cd solutions/cses/sorting-and-searching/
3. Buat file baru: nvim namasoal.cpp
4. Neovim terbuka → tekan TAB untuk load template (jika ada snippet)
5. Tulis kode (tekan i untuk masuk insert mode)
6. Simpan: Esc → :w → Enter
7. Compile: Esc → tekan <leader>r (atau sesuai keybinding)
8. Test dengan input.txt
9. Submit!
```

### Membuat dan Mengedit File

```bash
# Buat file baru + langsung buka
nvim namasoal.cpp

# Buka file yang ada
nvim solutions/codeforces/div2/A.cpp

# Buka beberapa file sekaligus (split)
nvim -O file1.cpp file2.cpp   # split vertikal
nvim -o file1.cpp file2.cpp   # split horizontal
```

### Setup Input/Output untuk CP

Buat file `input.txt` di folder yang sama:

```bash
# Di terminal (bukan Neovim)
echo "5
1 3 5 7 9" > input.txt

# Lalu di Neovim, compile & run dengan redirect
# <leader>r akan otomatis compile + run dengan input.txt
```

---

## Bagian 5: Plugins yang Sudah Ter-include

### competitest.nvim — Auto Test Cases

Plugin paling berguna untuk CP! Bisa auto-download test cases dari browser.

```
Keybindings:
<leader>ta  → tambah test case manual
<leader>tr  → run semua test cases
<leader>te  → edit test case
<leader>td  → hapus test case
```

**Setup dengan Competitive Companion:**
1. Install extension Chrome/Firefox: **Competitive Companion**
2. Buka problem di Codeforces/AtCoder/CSES
3. Klik ikon Competitive Companion di browser
4. Test cases otomatis masuk ke Neovim!

### nvim-cmp — Autocomplete

Autocomplete otomatis untuk C++. Shortcut:
- `Tab` atau `Ctrl+n` — next suggestion
- `Shift+Tab` atau `Ctrl+p` — previous suggestion
- `Enter` — confirm suggestion
- `Esc` atau `Ctrl+e` — tutup autocomplete

### LuaSnip — Snippets

Snippets untuk template CP. Contoh pakai:
- Ketik `sol` + `Tab` → expand ke `void solve() { ... }`
- Ketik `for` + `Tab` → expand ke `for(int i = 0; i < n; i++) { ... }`

### flash.nvim — Navigasi Super Cepat

```
s + 2 karakter → lompat ke kata manapun yang diawali 2 karakter itu
Contoh: s + "fo" → highlight semua kata yang mulai "fo", pilih dengan huruf
```

### tokyonight — Theme

Theme default yang sudah terpasang. Ganti di `~/.config/nvim/lua/plugins/colorscheme.lua`.

---

## Bagian 6: Troubleshooting

### Stuck di Lazy plugin list saat pertama buka

```
Solusi: Tekan q untuk menutup window Lazy
        Lalu tekan :Lazy sync untuk install ulang
```

### Error: "module lazy not found" atau config error

```bash
# Clean install — hapus semua data Neovim
rm -rf ~/.config/nvim
rm -rf ~/.local/share/nvim
rm -rf ~/.local/state/nvim
rm -rf ~/.cache/nvim

# Install ulang dari awal (pilih Opsi A atau B di Bagian 3)
git clone https://github.com/anish384/nvim-cp ~/.config/nvim
nvim
```

### Plugin tidak ter-install / error saat buka

```
Di dalam Neovim:
:Lazy sync         → sync semua plugin
:Lazy update       → update semua plugin
:Lazy clean        → hapus plugin yang tidak dipakai
:checkhealth       → diagnosa masalah
```

### C++ tidak bisa compile

```bash
# Cek apakah g++ ter-install
g++ --version
clang++ --version

# Jika tidak ada, install xcode command line tools
xcode-select --install

# Test compile manual
g++ -o test namafile.cpp && ./test
```

### Neovim lambat / lag

```
Di Neovim:
:Lazy profile      → lihat waktu load tiap plugin
:checkhealth       → lihat apakah ada masalah

Solusi umum: disable plugin yang tidak dipakai
```

---

## Bagian 7: Vim Keybinding Cheat Sheet (Khusus CP)

### Navigasi Dasar

| Keybinding | Aksi |
|---|---|
| `h` `j` `k` `l` | Kiri, bawah, atas, kanan |
| `w` | Lompat ke awal kata berikutnya |
| `b` | Lompat ke awal kata sebelumnya |
| `e` | Lompat ke akhir kata |
| `gg` | Ke baris paling atas |
| `G` | Ke baris paling bawah |
| `Ctrl+d` | Scroll setengah layar ke bawah |
| `Ctrl+u` | Scroll setengah layar ke atas |
| `0` | Ke awal baris |
| `$` | Ke akhir baris |
| `%` | Lompat ke bracket pasangan `()` `{}` `[]` |
| `{` `}` | Lompat ke paragraf sebelum/sesudah |

### Editing

| Keybinding | Aksi |
|---|---|
| `i` | Insert mode sebelum cursor |
| `a` | Insert mode setelah cursor |
| `I` | Insert mode di awal baris |
| `A` | Insert mode di akhir baris |
| `o` | Baris baru di bawah + insert mode |
| `O` | Baris baru di atas + insert mode |
| `dd` | Hapus (cut) satu baris |
| `yy` | Copy satu baris |
| `p` | Paste setelah cursor |
| `P` | Paste sebelum cursor |
| `u` | Undo |
| `Ctrl+r` | Redo |
| `ci{` | Change (hapus + insert) isi dalam `{}` |
| `ci(` | Change isi dalam `()` |
| `di{` | Delete isi dalam `{}` |
| `V` | Visual line mode (select satu baris) |
| `Ctrl+v` | Visual block mode (kolom select) |
| `.` | Ulangi perintah terakhir |
| `>>`  `<<` | Indent / de-indent baris |

### Search & Replace

| Keybinding | Aksi |
|---|---|
| `/pattern` | Cari ke bawah |
| `?pattern` | Cari ke atas |
| `n` | Lompat ke match berikutnya |
| `N` | Lompat ke match sebelumnya |
| `*` | Cari kata di bawah cursor |
| `:%s/old/new/g` | Replace semua "old" dengan "new" |
| `:%s/old/new/gc` | Replace dengan konfirmasi satu-satu |

### CP Shortcuts (Custom Keybindings)

> *Keybinding ini ada di config nvim-cp. `<leader>` = Spasi*

| Keybinding | Aksi |
|---|---|
| `<leader>r` | Compile & run (dengan input.txt) |
| `<leader>ta` | Tambah test case (competitest) |
| `<leader>tr` | Run semua test cases |
| `<leader>ff` | Fuzzy find file |
| `<leader>fg` | Grep cari text di semua file |
| `<leader>e` | Toggle file explorer |
| `Ctrl+h/j/k/l` | Navigasi antar split window |
| `<leader>v` | Buka split vertikal |
| `<leader>s` | Buka split horizontal |
| `<leader>gg` | Buka lazygit |

### Perintah Command Mode yang Sering Dipakai

| Perintah | Aksi |
|---|---|
| `:w` | Save |
| `:q` | Quit |
| `:wq` | Save + quit |
| `:q!` | Quit tanpa save |
| `:e namafile.cpp` | Buka file |
| `:sp namafile.cpp` | Split horizontal + buka file |
| `:vsp namafile.cpp` | Split vertikal + buka file |
| `:term` | Buka terminal di dalam Neovim |
| `:set nu` | Toggle line numbers |
| `:noh` | Hilangkan highlight search |

---

## Bagian 8: Sumber Belajar Neovim

### Video Tutorial (Urutan yang Direkomendasikan)

| Urutan | Video | Durasi | Link |
|---|---|---|---|
| 1 | **Fireship — Vim in 100 Seconds** | 2 menit | [YouTube](https://www.youtube.com/watch?v=-txKSRn0qeA) |
| 2 | **ThePrimeagen — Vim As Your Editor (Part 1)** | 30 menit | [YouTube](https://www.youtube.com/watch?v=X6AR2RMB5tE) |
| 3 | **ThePrimeagen — Vim As Your Editor (Part 2)** | 30 menit | [YouTube](https://www.youtube.com/watch?v=ZjMzBd1Dqz8) |
| 4 | **vimtutor** — built-in di terminal | 30 menit | Ketik `vimtutor` di terminal |
| 5 | **OpenVim** — latihan interaktif di browser | Sesuai kebutuhan | [openvim.com](https://openvim.com) |

### Belajar Neovim Paralel dengan CP (Timeline 4 Minggu)

| Minggu | Fokus Neovim | Fokus CP |
|---|---|---|
| **1** | Tonton Fireship + vimtutor, hafalkan h/j/k/l dan mode | Fase 1 Minggu 1: Sorting & Binary Search |
| **2** | ThePrimeagen Part 1: navigasi, editing dasar | Fase 1 Minggu 2: Matematika |
| **3** | ThePrimeagen Part 2: advanced editing, macros | Fase 1 Minggu 3: Prefix Sum & Greedy |
| **4** | Sudah nyaman, fokus customization dan plugin CP | Fase 2 Minggu 4: Graf |

> 💡 **Realistis:** Butuh ~2 minggu untuk mulai nyaman, ~1 bulan untuk benar-benar terbiasa. Jangan frustrasi di awal!

### Sumber Teks

| Sumber | Link |
|---|---|
| Neovim Docs resmi | [neovim.io/doc](https://neovim.io/doc/) |
| LazyVim Docs | [lazyvim.org](https://www.lazyvim.org/) |
| Vim Cheat Sheet | [vim.rtorr.com](https://vim.rtorr.com/) |

---

## Quick Reference: Hari Pertama Pakai Neovim

```bash
# 1. Buka Neovim
nvim namafile.cpp

# 2. Masuk insert mode untuk mulai ketik
i

# 3. Ketik kode...

# 4. Kembali ke normal mode
Esc

# 5. Simpan
:w

# 6. Simpan dan keluar
:wq

# 7. Keluar tanpa save (jika stuck)
:q!
```

**Ingat:** Jika bingung atau stuck, tekan `Esc` beberapa kali untuk kembali ke Normal mode, lalu `:q!` untuk keluar.

---

*💪 Neovim terasa susah di 2 minggu pertama, tapi setelah itu kamu tidak akan mau balik ke CLion!*
