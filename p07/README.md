# P07 - String dan Validasi

Folder ini berisi penyelesaian tugas P07 pada proyek `pt-NPM`.

## Berkas yang dikumpulkan

- `p07/sinilai_v06.cpp` — program SiNilai v0.6 yang telah dilengkapi validasi masukan, validasi nama, dan perapian huruf nama.
- `contoh_masukan.txt` — data pengujian yang disediakan pada paket tugas.
- Berkas latihan string dan validasi dari modul.

## Perbaikan program

1. Jumlah mahasiswa harus berupa bilangan bulat minimal 1. Masukan yang gagal dibaca atau kurang dari 1 akan diminta ulang.
2. Nama tidak boleh kosong, hanya berisi spasi, atau mengandung angka. Nama yang tidak valid akan diminta ulang.
3. Nama dirapikan menjadi huruf kapital pada awal setiap kata dan huruf kecil pada karakter berikutnya.
4. Nilai kehadiran, mingguan, UTS, dan UAS harus berupa angka dalam rentang 0 sampai 100. Masukan teks atau angka di luar rentang ditolak dan diminta ulang.
5. `cin.clear()` dan `cin.ignore()` digunakan untuk memulihkan aliran masukan setelah terjadi kesalahan.

## Cara kompilasi dan menjalankan

Dengan g++:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic p07/sinilai_v06.cpp -o sinilai_v06
./sinilai_v06 < contoh_masukan.txt
```

Di Windows, jalankan hasil kompilasi `sinilai_v06.exe` melalui terminal yang mendukung g++.

## Hasil pengujian

Program diuji menggunakan `contoh_masukan.txt`. Masukan nama kosong, nama yang mengandung angka (`r2d2`), teks pada nilai (`abc`), dan nilai di atas 100 (`120`) ditolak dan diminta ulang. Data yang valid menghasilkan laporan kelas:

- 6 mahasiswa; 4 lulus dan 2 belum lulus.
- Rata-rata kelas: 64.66.
- Nilai tertinggi: Dewi Lestari (90.00).
- Sebaran: A = 2, B = 1, C = 1, D = 1, E = 1.

## Deklarasi AI

- **Alat:** ChatGPT (OpenAI).
- **Digunakan untuk:** membantu memahami instruksi tugas, meninjau bagian validasi string dan angka, serta memeriksa kemungkinan kesalahan pada kode C++.
- **Prompt:** "Bantu saya menyelesaikan tugas P07 String dan Validasi. Lengkapi program SiNilai v0.6 agar validasi nama dan nilai berjalan sesuai contoh masukan."
- **Pemeriksaan:** kode dikompilasi menggunakan g++ dengan opsi `-Wall -Wextra -pedantic`, lalu dijalankan menggunakan `contoh_masukan.txt`. Hasilnya diperiksa terhadap ringkasan hasil yang tercantum pada modul/tugas.
- **Umpan balik:** hasil bantuan AI diperiksa kembali dengan menjalankan program. Pengguna tetap perlu memahami kode dan menyesuaikannya dengan ketentuan dosen sebelum dikumpulkan.
