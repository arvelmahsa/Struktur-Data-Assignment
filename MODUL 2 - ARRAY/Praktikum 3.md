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
#include<iostream>
using namespace std;
//Program input array 3 dimensi
int main ()
{
    //deklarasi array
    int arr[2][3][3];
    //input elemen
    for(int x = 0; x < 2; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            for(int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr [x][y][z];
            }
        }
        cout << endl;
    }
    //output array
    for(int x = 0; x < 2; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << " Data Array ["<< x << "]["<< y <<"][" << z <<"] = " << arr [x][y][z] << endl;
            }
        }
    }
    cout << endl;
    //tampilkan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr [x] [y] [z] << ends;
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
#include<iostream>
using namespace std;
int main ()
{   int a;
    int maks, i = 1, lokasi;
    cout << "Masukan Panjang Array : ";
    cin >> a;
    int array[a];
    cout << "Masukan " << a << " angka \n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke- "<< (i) << ": ";
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
    cout << "Nilai Maksimum adalah " << maks << " berada di Array ke "<< lokasi << endl;
}
```
Kode di atas berfungsi untuk menginputkan jumlah array kemudian menginputkan angka sesuai jumlah array atau index yang telah
di inputkan oleh user. Setelah itu program akan mencari nilai maksimum dari banyaknya angka yang telah diinputkan.

## Output Guided 2
![Screenshot (165)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/7958c2dd-dd82-4bd9-b860-44e5f960df9e)

## Unguided 
   [Soal]
   
## 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
[Gambar Soal]

![Screenshot (166)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/5be91f8f-5398-4a30-9b6b-6d5ffb16d4d3)

[Contoh Program]
```C++
#include <iostream>
using namespace std;
int main()
{
    int data_array[10]={1,2,3,4,5,6,7,8,9,10};
    cout << "Data Array   : ";
    for (int i = 0; i < 10; i++)
    {
        cout << data_array[i] << " ";
    }cout << endl;

    cout << "Nomor Genap  : ";
    for (int i = 0; i < 10; i++)
    {
        if(data_array[i]%2==0)
        {
          cout << data_array[i] << " "; 
        }
    }cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < 10; i++)
    {
        if (data_array[i]%2!=0)
        {
            cout << data_array[i] << " ";
        }
    }cout << endl;
    return 0;
}
```
[Output Program 1]

![Screenshot (167)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/1e9957a7-33f8-48c3-8238-90ca727fc835)

Kode diatas adalah kode untuk menyeleksi nomor ganjil dan genap dari data array yang sudah di tentukan. Banyak Array di inisialisasikan terlebih
dahulu kemudian untuk menampilkannya menggunakkan perulangan "for" dengan statement seperti diatas. Selanjutnya untuk mencari nilai genap, gunakan
statement for yang sama, lalu didalam "For" tersebut gunakan statement percabangan "if" dengan kondisi jika data array diatas dibagi 2 hasilnya 
adalah 0. Lalu untuk mencari nomor ganjil juga sama, namun untuk kondisi "if" jika data array dibagi 2 tidak sama dengan 0.

## 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
   
[Contoh Program]
```C++

```
[Output Program]

## 3.Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

[Contoh Program]
```C++
#include<iostream>
using namespace std;
int main ()
{   int a;
float rata_rata;
    int maks,min, i = 1;
    cout << "Masukan Jumlah Array : ";
    cin >> a;
    int banyak_angka[a];
    cout << "Masukan " << a << " angka \n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke- "<< (i) << ": ";
        cin >> banyak_angka[i];
    }
    maks = banyak_angka[0];
    for (i = 0; i < a; i++)
    {
        if (banyak_angka[i] > maks)
        {
            maks = banyak_angka[i];
        }
    }
    cout << "Nilai Maksimum adalah " << maks << endl;
    min = banyak_angka[0];
    for (i = 0; i < a; i++)
    {
        if (banyak_angka[i] < min)
        {
            min = banyak_angka[i];
        }
    }
    cout << "Nilai Minimum adalah " << min << endl;
    for (int i = 0; i < a; i++){
        rata_rata += banyak_angka[i];
    }
    cout << "Rata-Rata adalah " << rata_rata/a << endl;
 return 0;
}
```
[Output Program]

![Screenshot (168)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/8b77f336-26e6-4345-b039-f860c4fcc19e)

Program diatas berfungsi untuk mencari nilai maksimum, minimum, dan rata-rata dari jumlah angka yang sudah diinputkan oleh user. 
Langkah awal yakni menginisialisasi terlebih dahulu variabel yang diperlukan. Lalu buat output untuk menginputkan jumlah array atau
index. Setelah menginputkan jumlah array kemudian buat output untuk menginputkan banyak bilangan yang kita inginkan sesuai jumlah array
yang sudah kita inputkan. Kemudian untuk mencari nilai minimum, cara nya adalah menginisialisasikan bahwa nilai minimum sama dengan 
angka yang kita input. Untuk menampilkannya gunakan perulangan "For" dengan rumus seperti diatas, kemudian didalamnya gunakan statement
percabangan "if" dengan kondisi banyak angka kurang dari min maka nilai minimum adalah banyak angka. Begitu juga untuk mencari nilai
maksimum. Lalu untuk mencari rata-rata gunakan perulangan "for" dengan rumus seperti diatas, kemudian didalamnya gunakan rumus bahwa
rata-rata adalah hasil penjumlahan dari angka yang kita inputkan kemudian dibagi dengan jumlah index atau array.

## Kesimpulan


## Referensi
[1] MODUL 1 - TIPE DATA
