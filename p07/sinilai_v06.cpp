// SiNilai v0.6: pengolahan nilai dengan validasi string dan masukan angka.
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;

    int jumlah_mahasiswa = 0;
    cout << "=== SiNilai v0.6 ===\n";
    cout << "Jumlah mahasiswa (paling sedikit 1): ";
    cin >> jumlah_mahasiswa;

    while (cin.fail() || jumlah_mahasiswa < 1) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan harus berupa angka. ";
        } else {
            cin.ignore(1000, '\n');
            cout << "Jumlah mahasiswa minimal 1. ";
        }
        cout << "Coba lagi: ";
        cin >> jumlah_mahasiswa;
    }
    cin.ignore(1000, '\n');

    cout << fixed << setprecision(2);

    double total_nilai = 0;
    int jumlah_lulus = 0;
    int jumlah_a = 0;
    int jumlah_b = 0;
    int jumlah_c = 0;
    int jumlah_d = 0;
    int jumlah_e = 0;
    double nilai_tertinggi = -1;
    string nama_tertinggi;

    for (int i = 1; i <= jumlah_mahasiswa; i++) {
        string nama;
        string npm;
        double kehadiran = 0;
        double mingguan = 0;
        double uts = 0;
        double uas = 0;

        cout << "\n--- Mahasiswa ke-" << i << " dari " << jumlah_mahasiswa << " ---\n";

        bool nama_sah = false;
        do {
            cout << "Nama      : ";
            getline(cin, nama);

            bool ada_huruf = false;
            bool ada_angka = false;
            for (int j = 0; j < static_cast<int>(nama.length()); j++) {
                unsigned char karakter = static_cast<unsigned char>(nama[j]);
                if (!isspace(karakter)) {
                    ada_huruf = true;
                }
                if (isdigit(karakter)) {
                    ada_angka = true;
                }
            }

            if (!ada_huruf) {
                cout << "Nama tidak boleh kosong. Silakan masukkan ulang.\n";
            } else if (ada_angka) {
                cout << "Nama tidak boleh mengandung angka. Silakan masukkan ulang.\n";
            } else {
                nama_sah = true;
            }
        } while (!nama_sah);

        bool awal_kata = true;
        for (int j = 0; j < static_cast<int>(nama.length()); j++) {
            unsigned char karakter = static_cast<unsigned char>(nama[j]);
            if (isspace(karakter)) {
                awal_kata = true;
            } else if (awal_kata) {
                nama[j] = static_cast<char>(toupper(karakter));
                awal_kata = false;
            } else {
                nama[j] = static_cast<char>(tolower(karakter));
            }
        }

        cout << "NPM       : ";
        getline(cin, npm);

        cout << "Kehadiran : ";
        cin >> kehadiran;
        while (cin.fail() || kehadiran < 0 || kehadiran > 100) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Masukan harus berupa angka. ";
            } else {
                cin.ignore(1000, '\n');
                cout << "Nilai harus 0 sampai 100. ";
            }
            cout << "Kehadiran : ";
            cin >> kehadiran;
        }

        cout << "Mingguan  : ";
        cin >> mingguan;
        while (cin.fail() || mingguan < 0 || mingguan > 100) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Masukan harus berupa angka. ";
            } else {
                cin.ignore(1000, '\n');
                cout << "Nilai harus 0 sampai 100. ";
            }
            cout << "Mingguan  : ";
            cin >> mingguan;
        }

        cout << "UTS       : ";
        cin >> uts;
        while (cin.fail() || uts < 0 || uts > 100) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Masukan harus berupa angka. ";
            } else {
                cin.ignore(1000, '\n');
                cout << "Nilai harus 0 sampai 100. ";
            }
            cout << "UTS       : ";
            cin >> uts;
        }

        cout << "UAS       : ";
        cin >> uas;
        while (cin.fail() || uas < 0 || uas > 100) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Masukan harus berupa angka. ";
            } else {
                cin.ignore(1000, '\n');
                cout << "Nilai harus 0 sampai 100. ";
            }
            cout << "UAS       : ";
            cin >> uas;
        }
        cin.ignore(1000, '\n');

        double nilai_akhir = kehadiran * BOBOT_KEHADIRAN + mingguan * BOBOT_MINGGUAN
                           + uts * BOBOT_UTS + uas * BOBOT_UAS;

        string huruf_mutu;
        if (nilai_akhir >= 80) {
            huruf_mutu = "A";
        } else if (nilai_akhir >= 75) {
            huruf_mutu = "B+";
        } else if (nilai_akhir >= 70) {
            huruf_mutu = "B";
        } else if (nilai_akhir >= 65) {
            huruf_mutu = "C+";
        } else if (nilai_akhir >= 60) {
            huruf_mutu = "C";
        } else if (nilai_akhir >= 40) {
            huruf_mutu = "D";
        } else {
            huruf_mutu = "E";
        }

        bool lulus = nilai_akhir >= 60;

        cout << "  " << left << setw(20) << nama << right << setw(7) << nilai_akhir
             << "  " << left << setw(3) << huruf_mutu;
        if (lulus) {
            cout << "Lulus\n";
        } else {
            cout << "Belum lulus\n";
        }

        total_nilai += nilai_akhir;
        if (lulus) {
            jumlah_lulus++;
        }

        switch (huruf_mutu[0]) {
            case 'A':
                jumlah_a++;
                break;
            case 'B':
                jumlah_b++;
                break;
            case 'C':
                jumlah_c++;
                break;
            case 'D':
                jumlah_d++;
                break;
            default:
                jumlah_e++;
        }

        if (nilai_akhir > nilai_tertinggi) {
            nilai_tertinggi = nilai_akhir;
            nama_tertinggi = nama;
        }
    }

    cout << "\n=== Laporan Kelas ===\n";
    cout << "Jumlah mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "Lulus            : " << jumlah_lulus << "\n";
    cout << "Belum lulus      : " << jumlah_mahasiswa - jumlah_lulus << "\n";
    cout << "Rata-rata kelas  : " << total_nilai / jumlah_mahasiswa << "\n";
    cout << "Tertinggi        : " << nama_tertinggi << " (" << nilai_tertinggi << ")\n";

    cout << "\nSebaran huruf mutu:\n";
    for (char huruf = 'A'; huruf <= 'E'; huruf++) {
        int banyak = 0;
        if (huruf == 'A') {
            banyak = jumlah_a;
        } else if (huruf == 'B') {
            banyak = jumlah_b;
        } else if (huruf == 'C') {
            banyak = jumlah_c;
        } else if (huruf == 'D') {
            banyak = jumlah_d;
        } else {
            banyak = jumlah_e;
        }

        cout << huruf << " | ";
        for (int j = 1; j <= banyak; j++) {
            cout << "#";
        }
        cout << " " << banyak << "\n";
    }
    return 0;
}
