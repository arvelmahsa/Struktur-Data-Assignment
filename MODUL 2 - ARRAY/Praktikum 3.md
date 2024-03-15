# <h1 align="center">Laporan Praktikum Modul Array </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

## Dasar Teori
Array merupakan struktur data yang paling dasar. Sebelum mempelajari struktur data
lainnya, alangkah baiknya, kita perlu mempelajari Array terlebih dahulu. Berikut ini
adalah beberapa jenis array :

## 1) Array Satu Dimensi
Array satu dimensi adalah tipe variabel yang terdiri dari kumpulan data
dengan tipe yang sama yang disusun dalam satu baris atau satu dimensi. Setiap
elemen di dalam array memiliki sebuah indeks atau nomor yang digunakan
untuk mengakses elemen tersebut. Indeks dimulai dari 0 dan berakhir pada
jumlah elemen dikurangi satu.
Contohnya, sebuah array satu dimensi yang berisi bilangan bulat {1, 2,
3, 4, 5} memiliki lima elemen dan indeksnya dimulai dari 0. Indeks 0 merujuk
pada elemen pertama, indeks 1 merujuk pada elemen kedua, dan seterusnya
hingga indeks 4 merujuk pada elemen kelima.
Contoh :

```C++
#include <iostream>
using namespace std;
int main() {
int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
cout<< arr[1] << endl;
cout<< arr[4];
}
```
## 2) Array Dua Dimensi
Array dua dimensi adalah variable yang terdiri dari kumpulan array
satu dimensi dengan tipe yang sama yang disusun dalam baris dan kolom.
Dalam array dua dimensi, setiap elemen memiliki dua indeks, yaitu indeks
baris dan indeks kolom. Indeks baris menunjukkan posisi elemen dalam baris,
sementara indeks kolom menunjukkan posisi elemen dalam kolom.
Contoh :
```C++
#include <iostream>
using namespace std;
int main() {
int arr[2][2] = {{3, 2}, {2, 5}};
for (int i=0; i<2; i++) { //baris
for(int j=0; j<2; j++) { //kolom
cout<< arr[i][j] << ends;
};
cout << endl;
};
}
```
## 3) Array Multidimensi
Array multidimensi memiliki kesamaan dengan array satu dimensi dan
dua dimensi, namun memiliki kapasitas memori yang lebih besar. Array ini
digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau
array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array
empat dimensi, array lima dimensi, dan seterusnya.
Contoh :
```C++
#include <iostream>
using namespace std;
int main() {
int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}}, {{8,
5, 2}, {9, 2 ,7}}};
for (int i=0; i<2; i++) {
for(int j=0; j<2; j++) {
for(int k=0; k<3; k++) {
cout<< arr[i][j][k] << ends;
};
cout<< endl;
};
cout<< endl;
};
}
```
## 4) Array Empat Dimensi
Contoh :
```C++
int arr [3][2][4][4];
```

## 5) Array Lima Dimensi
Contoh :
```C++
int arr [2][4][4][3][3];
```

## Guided 
### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
// Deklarasi array
int arr[2][3][3];
// Input elemen
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Input Array[" << x << "][" << y << "][" << z <<

"] = ";

cin >> arr[x][y][z];
}
}
cout << endl;
}
// Output Array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Data Array[" << x << "][" << y << "][" << z <<

"] = " << arr[x][y][z] << endl;
}
}
}
cout << endl;
// Tampilan array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << arr[x][y][z] << ends;
}
cout << endl;
}
cout << endl;
}
}
```
Kode di atas digunakan untuk menginput array sesuai dengan banyak yang telah ditentukan, kemudian akan ditampilkan seperti matriks

## Output Guided 1
![Screenshot (163)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/922a154f-ac10-408f-8727-ffd25d673b8c)

![Screenshot (164)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/ae101f4a-54f0-423b-b577-04c9782e9ff1)

### 2. Program Mencari Nilai Maksimal Pada Array
```C++
#include <iostream>
using namespace std;
int main()
{
int maks, a, i = 1, lokasi;
cout << "Masukkan panjang array: ";
cin >> a;
int array[a];
cout << "Masukkan " << a << " angka\n";
for (i = 0; i < a; i++)
{
cout << "Array ke-" << (i) << ": ";
cin >> array[i];
}
maks = array[0];
for (i = 0; i < a; i++)
{
if (array[i] > maks)
{
maks = array[i];
lokasi = i;
}
}
cout << "Nilai maksimum adalah " << maks << " berada di Array
ke " << lokasi << endl;
}
```
Kode di atas berfungsi untuk menginputkan jumlah array kemudian menginputkan angka sesuai jumlah array atau index yang telah
di inputkan oleh user. Setelah itu program akan mencari nilai maksimum dari banyaknya angka yang telah diinputkan.

## Output Guided 2
![Screenshot (165)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/7958c2dd-dd82-4bd9-b860-44e5f960df9e)

## Unguided 
   [Soal]
   
## 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

[Contoh Program]
```C++
#include <iostream>
using namespace std;
int s;

int hitung_keliling(int s){
return 4*s;
}
int hitung_luas(int s){
return s*s;
}
int main (){
cout<<"Masukan Panjang Sisi: ";
cin>>s;

cout<<"Keliling : "<<hitung_keliling(s)<<endl;
cout<<"Luas : "<<hitung_luas(s);

return 0;
}
```
[Output Program 1]

![OUTPUT NO 1](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/06427f4a-a8b6-4b3a-9fe2-02ea5010e252)

[Kesimpulan Nomor 1]

Dari program diatas dapat disimpulkan bahwa, program diatas dinamakan fungsi. Dalam fungsi tersebut terdapat Tipe Data Primitif
yaitu "int" yang digunakan untuk mendeklarasikan angka dan kemudian dicetak menggunakan fungsi yang telah ditentukan.
Jadi kesimpulannya, fungsi dan tipe data primitif adalah komponen yang saling berkesinambungan.

## 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya.
   
[Fungsi class dan struct]

adalah untuk memudahkan user untuk mengelola data yang memiliki struktur sama. Dengan struct dan class kita tidak perlu mendeklarasikan
variabel terlalu banyak. Keduanya juga berfungsi untuk membungkus data didalamnya sebagai anggota, yang membedakan yakni struct memiliki
akses yang bersifat private, sedangkan class bersifat public.

[Contoh Program STRUCT ]
```C++
#include<stdio.h>

struct datamahasiswa
{
    const char *nama;
    const char *alamat;
    int umur;
};

int main ()
{
    struct datamahasiswa mhs;
    mhs.nama = "Dewi";
    mhs.alamat = "Cilacap";
    mhs.umur = 17;

    printf("## DATA MAHASISWA ##\n");
    printf("Nama   : %s\n",mhs.nama);
    printf("Alamat : %s\n",mhs.alamat);
    printf("Umur   : %d\n",mhs.umur);

    return 0;
}
```
[Output Program]

![OUTPUT NO 2 STRUCT](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/6e14e96d-23eb-4aea-9b8b-5b2328f4d141)


[Contoh Program CLASS]
```C++
#include<iostream>
using namespace std;
class mahasiswa{
    public :
    string nama;
    string kelas;
    float nilai;
    void printdata(){
        cout << "Nama  : " << nama << endl;
        cout << "Kelas : " << kelas << endl;
        cout << "IPK   : " << nilai << endl;

    }
};
int main ()
{
    mahasiswa Arvel = {"Arvel Mahsa Athallah F ", "IF XI E", 3.85};
    Arvel.printdata();
    return 0;
}
```
[Output Program]

![OUTPUT NO2 CLASS](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/d0589bc8-ea7d-4066-b88e-da29c9470d4b)


## 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

[CONTOH PROGRAM DENGAN MAP]
```C++
#include <iostream>
#include <map>
using namespace std;
int main()
{
    // insialisasi dan deklarasi map
    map<string, int> umursiswa;

    // isi value map
    umursiswa["Arkhan"] = 19;
    umursiswa["Kinara"] = 17;
    umursiswa["Rocky"] = 18;
    umursiswa["Fatih"] = 20;

    cout << "DAFTAR UMUR SISWA" << endl;

    // perulangan range based loop untuk menampilkan map
    for (auto &entry : umursiswa)
    {
        cout<< "-> "<<entry.first<<" umur : "<<entry.second<<endl;
    }
    return 0;
}
```
[Output Program]

![OUTPUT NO 3](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/713137c1-ef78-46a6-a88d-9095aee7b9c6)

[Perbedaan Array dan Map]

Kode diatas merupakan penggunaan map dalam c++, dimulai dari insialisasi map beserta tipe datanya kemudian pengisian map pada int main lalu terakhir
dengan perulangan for range based loop dengan menggunakan auto mencetak map tersebut. Perbedaan antara array dan map terletak pada tipe data indeks
pada map yang memungkinkan untuk berupa tipe data selain integer. Di map juga terdapat perulangan for range based untuk mengurutkan cetakan sesuai
huruf depan.

## Kesimpulan
Kesimpulan yang didapatkan dari praktikum ini adalah bahwa dalam membuat program kita tidak pernah terlepas dari yang namanya tipe data. Karena
tipe data juga merupakan salah satu komponen penting terbentuknya sebuah program.

## Referensi
[1] MODUL 1 - TIPE DATA
