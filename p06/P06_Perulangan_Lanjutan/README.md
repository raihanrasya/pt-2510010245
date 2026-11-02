# P06 Perulangan Lanjutan: Bersarang, break, continue, Debugger, iomanip

Folder kode Pertemuan 6 Pemrograman Terstruktur. Materi mencakup perulangan bersarang,
penggunaan `break` dan `continue`, debugger, serta pemformatan keluaran dengan `iomanip`.

## Isi

| Berkas | Kegunaan |
|---|---|
| `bersarang_tabel.cpp` | Perulangan `for` di dalam `for` untuk membuat tabel perkalian dengan kolom rapi (`setw`). |
| `break_tebak.cpp` | Menggunakan `break` untuk menghentikan permainan saat tebakan benar, maksimal 5 kesempatan. |
| `continue_remediasi.cpp` | Menggunakan `continue` untuk melewati mahasiswa yang nilainya cukup dan menampilkan yang perlu remediasi. |
| `rapi_iomanip.cpp` | Contoh `fixed`, `setprecision`, `setw`, `left`, dan `right` untuk merapikan keluaran. |
| `debug_rerata.cpp` | Program latihan dengan kesalahan logika yang dicari menggunakan debugger. |
| `masukan_debug.txt` | Masukan untuk `debug_rerata`: 3 nilai (80, 70, 90), rata-rata yang benar 80. |
| `sinilai.cpp` | Program SiNilai v0.5 yang sudah lengkap: menghitung nilai akhir, huruf mutu, status kelulusan, rekap kelas, nilai tertinggi, dan diagram batang huruf mutu. |
| `sinilai_v05_awal.cpp` | Berkas starter awal sebelum bagian TODO diselesaikan. |
| `contoh_masukan.txt` | Enam data mahasiswa untuk menguji program `sinilai.cpp`. |
| `.vscode/launch.json` | Konfigurasi debugger VS Code (gdb MSYS2); tekan F5 pada berkas `.cpp` yang terbuka. |
| `.vscode/settings.json`, `tasks.json`, `.gitignore` | Pengaturan editor, build, dan Git. |

## Menjalankan SiNilai

Kompilasi menggunakan g++:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic sinilai.cpp -o sinilai
```

Jalankan dengan masukan dari berkas contoh:

```bash
./sinilai < contoh_masukan.txt
```

Pada Windows, jika executable bernama `sinilai.exe`, jalankan:

```powershell
.\sinilai.exe < contoh_masukan.txt
```

## Rumus dan ketentuan penilaian

Nilai akhir dihitung dengan bobot:

- Kehadiran: 10%
- Mingguan: 45%
- UTS: 25%
- UAS: 20%

Kategori huruf mutu:

| Rentang nilai | Huruf |
|---|---|
| 80 ke atas | A |
| 75 sampai kurang dari 80 | B+ |
| 70 sampai kurang dari 75 | B |
| 65 sampai kurang dari 70 | C+ |
| 60 sampai kurang dari 65 | C |
| 40 sampai kurang dari 60 | D |
| Di bawah 40 | E |

Mahasiswa dinyatakan lulus jika nilai akhir minimal 60. Dalam sebaran huruf,
B+ dihitung sebagai B dan C+ dihitung sebagai C.

## Hasil yang diharapkan dari `contoh_masukan.txt`

| Mahasiswa | Nilai akhir | Huruf | Status |
|---|---:|---|---|
| Siti Aminah | 83.97 | A | Lulus |
| Budi Santoso | 67.75 | C+ | Lulus |
| Rina Wati | 49.50 | D | Belum lulus |
| Dewi Lestari | 90.00 | A | Lulus |
| Eko Prasetyo | 71.00 | B | Lulus |
| Fajar Nugroho | 25.75 | E | Belum lulus |

Ringkasan kelas:

- Jumlah mahasiswa: 6
- Lulus: 4
- Belum lulus: 2
- Rata-rata kelas: 64.66
- Nilai tertinggi: Dewi Lestari (90.00)
- Sebaran huruf: A = 2, B = 1, C = 1, D = 1, E = 1

Catatan: angka pecahan ditampilkan dengan dua angka di belakang koma. Hasil tampilan
pembulatan mengikuti representasi angka `double` di komputer.

## Debugger

`launch.json` menggunakan `C:/msys64/ucrt64/bin/gdb.exe` dan program `.exe` hasil
`tasks.json`. Di Linux, sesuaikan nama executable dan `miDebuggerPath` menjadi
`/usr/bin/gdb`. Di macOS, gunakan `lldb` sesuai konfigurasi debugger yang tersedia.

Panduan lengkap: `03_Modul/Panduan_Debugger_VS_Code.docx`.

## Yang dikumpulkan

Folder `p06` di repository `pt-NPM` berisi `sinilai.cpp` dan `README.md` yang sudah
diperbarui, beserta berkas pendukung sesuai instruksi modul.

## Deklarasi AI

AI digunakan sebagai alat bantu pembelajaran dan pengembangan
program. Pemahaman serta tanggung jawab terhadap hasil akhir
program tetap berada pada saya sebagai mahasiswa.
