# Catatan Kesalahan Praktikum 5

## Tabel Praktikum 5

| No | Berkas | Jenis Kesalahan | Pesan/Error | Penyebab | Solusi |
|---|---|---|---|---|---|
| 1 | `k1_sintaks.cpp` | Kesalahan Sintaks | `expected ',' or ';' before 'std'`, `unused variable 'nilai'` | Variabel `nilai` sudah dibuat tetapi belum digunakan, serta terdapat kekurangan tanda `;` pada bagian `nilai = 80`. | Gunakan variabel `nilai` dalam perhitungan atau hapus jika tidak diperlukan, kemudian tambahkan tanda `;` pada deklarasi `int nilai = 80`. |
| 2 | `k2_nama.cpp` | Kesalahan Nama Variabel | `Nilai was not declared in this scope; did you mean nilai`, `bonus was not declared in this scope` | Terdapat kesalahan penulisan nama variabel, yaitu menggunakan `Nilai` seharusnya `nilai`, dan variabel `bonus` belum dideklarasikan. | Ubah penulisan `Nilai` menjadi `nilai` dan deklarasikan variabel `bonus` sebelum digunakan. |
| 3 | `k3_runtime.cpp` | Kesalahan Logika | Program melakukan pembagian dengan 0 ketika jumlah mahasiswa yang dimasukkan adalah 0. | Program belum melakukan pemeriksaan terhadap kondisi `jumlah_mahasiswa == 0` sebelum proses pembagian dilakukan. | Periksa terlebih dahulu apakah `jumlah_mahasiswa` bernilai 0 sebelum melakukan pembagian. |
| 4 | `k4_logika.cpp` | Kesalahan Logika | Program menghasilkan pembulatan menjadi `81`, sedangkan hasil yang seharusnya adalah `81.67` karena nilai dibagi dengan `3`. | Pembagian menggunakan `3` sehingga hasilnya menjadi bilangan bulat. | Gunakan `3.0` dalam pembagian agar hasil perhitungan dapat berupa bilangan desimal, yaitu `81.67`. |

## Kesimpulan

Menurut saya, kesalahan logika termasuk jenis kesalahan yang cukup berbahaya karena program masih dapat dijalankan tanpa menampilkan pesan error, tetapi hasil yang diperoleh bisa saja tidak sesuai dengan yang seharusnya. Oleh sebab itu, program tidak hanya perlu diperiksa agar dapat dikompilasi dan dijalankan dengan baik, tetapi hasil perhitungan serta alur logikanya juga perlu diuji secara teliti.
