
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    float keaktifan, tugas, ujian;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian, nilaiAkhir;

    // Input data siswa
    cout << "===== PROGRAM MENGHITUNG NILAI AKHIR SISWA =====" << endl;
    cout << "Masukkan Nama Siswa       : ";
    getline(cin, nama);

    cout << "Masukkan Nilai Keaktifan  : ";
    cin >> keaktifan;

    cout << "Masukkan Nilai Tugas      : ";
    cin >> tugas;

    cout << "Masukkan Nilai Ujian      : ";
    cin >> ujian;

    // Menghitung nilai murni
    nilaiKeaktifan = keaktifan * 20 / 100;
    nilaiTugas = tugas * 30 / 100;
    nilaiUjian = ujian * 50 / 100;

    // Menghitung nilai akhir
    nilaiAkhir = nilaiKeaktifan + nilaiTugas + nilaiUjian;

    // Menampilkan hasil
    cout << "\n===== HASIL PERHITUNGAN NILAI =====" << endl;
    cout << "Nama Siswa              : " << nama << endl;
    cout << "Nilai Keaktifan (20%)   : " << nilaiKeaktifan << endl;
    cout << "Nilai Tugas (30%)       : " << nilaiTugas << endl;
    cout << "Nilai Ujian (50%)       : " << nilaiUjian << endl;
    cout << "----------------------------------------" << endl;
    cout << "Nilai Akhir             : " << nilaiAkhir << endl;

    return 0;
}
