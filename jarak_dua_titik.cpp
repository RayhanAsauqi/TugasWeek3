#include <iostream>
#include <cmath> // Function SQRT() untuk fungsi akar pangkat dua dan Function POW() untuk operator pangkat

using namespace std;
// Kamus
struct Titik
{
    float x; // absis
    float y; // ordinat
};

Titik t1, t2; // titik dalam koordinat kartesian
float d;      // jarak antara dua titik koordinat

// Function SQRT (n: real) : real
//{Fungsi terdefinisi mengeluarkan nilai akar kuadrat dari n}

// Algoritma
int main()
{
    cout << "------------------------------------" << endl;
    cout << "Nama Programmer : 120103041 Rayhan Alsauqi" << endl;
    cout << "Versi Program : Jarak Dua Titik " << endl;
    cout << "Tanggal Pembuatan : 04 oktober 2023" << endl;
    cout << "Tanggal Revisi : 08 oktober 2023" << endl;
    cout << "------------------------------------" << endl;
    cout << "Masukkan data  titik koordinat.. " << '\n';
    cout << "t1.x = ";
    cin >> t1.x;
    cout << "t1.y = ";
    cin >> t1.y;
    cout << "t2.x = ";
    cin >> t2.x;
    cout << "t2.y = ";
    cin >> t2.y;

    d = sqrt(pow(t1.x - t2.x, 2)) + pow(t1.y - t2.y, 2);
    cout << "\n"
         << " Jarak antara titik t1 dan t2 adalah " << d;

    return 0;
}