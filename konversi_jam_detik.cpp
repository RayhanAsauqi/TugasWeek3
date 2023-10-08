#include <iostream>
using namespace std;

// Kamus
int n;  // [0..999999] {data yg dibaca}
int H;  // >= 0 {Hari}
int J;  // [0..23] {Jam}
int M;  // [0..59] {Menit}
int D;  // [0..59] {Detik}
int rH; // [0..86399] {sisa detik dalam perhitungan Hari}
int rJ; // [0..3599] {sisa detik dalam perhitungan Jam}

int main()
{
    cout << "------------------------------------" << endl;
    cout << "Nama Programmer : 120103041 Rayhan Alsauqi" << endl;
    cout << "Versi Program : Konversi Jam Detik " << endl;
    cout << "Tanggal Pembuatan : 04 oktober 2023" << endl;
    cout << "Tanggal Revisi : 08 oktober 2023" << endl;
    cout << "------------------------------------" << endl;
    cout << "Masukkan nilai antara 0 - 999999" << endl;
    cout << "n = ";
    cin >> n;
    //
    H = n / 86400;
    rH = n % 86400;
    // n = H * 86400 + rH and 0 = rH < 86400
    J = rH / 3600;
    rJ = rH % 3600;
    // n = H * 86400 + J * 3600 + rJ and 0 = rH < 86400 and 0 = rJ < 3600
    M = rJ / 60;
    D = rJ % 60;
    // n = H * 86400 + J * 3600 + rJ and 0 = rH < 86400 and 0 = rJ < 3600 and 0 =
    // M < 60 and 0 = D < 60
    cout << "nilai n = " << n << " ekivalen dengan nilai " << H << " hari " << J << " jam " << M << " menit " << D << " detik";
    return 0;
}