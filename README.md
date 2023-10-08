1. Program Penghitung Jarak Dua Titik
```markdown
# Program Penghitung Jarak Dua Titik

Program ini adalah aplikasi sederhana yang menghitung jarak antara dua titik dalam koordinat kartesian. Program ini ditulis dalam bahasa C++ dan menggunakan fungsi `sqrt` (akar kuadrat) dan `pow` (pangkat) dari pustaka `<cmath>`.

## Penjelasan Singkat

Program ini meminta pengguna untuk memasukkan koordinat dua titik, yaitu `(x1, y1)` dan `(x2, y2)`. Kemudian, program menghitung jarak antara kedua titik tersebut dengan menggunakan rumus jarak Euclidean:

```
jarak = sqrt((x1 - x2)^2 + (y1 - y2)^2)
```

Hasil perhitungan jarak kemudian ditampilkan di layar.
```
## Cara Menggunakan

1) Clone repositori ini ke komputer Anda:

   ```shell
   git clone https://github.com/username/repo.git
   ```

2) Compile program C++:

   ```shell
   g++ main.cpp -o jarak_dua_titik
   ```

3) Jalankan program:

   ```shell
   ./jarak_dua_titik
   ```

4) Ikuti petunjuk yang muncul di layar untuk memasukkan koordinat titik-titik yang ingin Anda hitung jaraknya.






2.Konversi Jam ke Detik
```markdown
# Konversi Jam ke Detik

Program ini adalah aplikasi sederhana untuk mengkonversi jumlah detik ke dalam format jam, menit, dan detik. Program ini ditulis dalam bahasa C++.

## Penjelasan Singkat

Program ini meminta pengguna untuk memasukkan jumlah detik dalam rentang 0 hingga 999999. Kemudian, program akan mengkonversi jumlah detik tersebut ke dalam format hari, jam, menit, dan detik. Berikut adalah rumus yang digunakan:

- Jumlah Hari (H) = n / 86400
- Sisa Detik dalam Hari (rH) = n % 86400
- Jumlah Jam (J) = rH / 3600
- Sisa Detik dalam Jam (rJ) = rH % 3600
- Jumlah Menit (M) = rJ / 60
- Detik (D) = rJ % 60

Hasil konversi akan ditampilkan di layar.

```
##Cara Menggunakan

1) Clone repositori ini ke komputer Anda:

   ```shell
   git clone https://github.com/username/repo.git
   ```

2) Compile program C++:

   ```shell
   g++ main.cpp -o konversi_jam_detik
   ```

3) Jalankan program:

   ```shell
   ./konversi_jam_detik
   ```

4) Ikuti petunjuk yang muncul di layar untuk memasukkan jumlah detik yang ingin Anda konversi.

