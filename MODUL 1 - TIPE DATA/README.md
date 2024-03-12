# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Arvel Mahsa Athallah Firdaus/2311102188/IF-11-E</p>

## Dasar Teori

Tipe data adalah adalah sebuah pengklasifikasian data berdasarkan jenis data
tersebut. Tipe data dibutuhkan agar kompiler dapat mengetahui bagaimana sebuah
data akan digunakan. Adapun tipe data yang akan dipelajari, sebagai berikut :
1. Tipe data Primitif
2. Tipe data Abstrak
3. Tipe data Koleksi
   
## Tipe data Primitif
Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, tipe data
primitif ini disediakan oleh banyak bahasa pemrograman, perbedaannya terletak pada
jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada
bahasa pemrograman,compiler dan sistem operasinya. Contoh tipe data primitif
adalah :

a. Int : adalah tipe data yang digunakan untuk menyimpan bilangan bulat
seperti 12, 1, 4, dan sebagainya.

b. Float : tipe data yang digunakan untuk menyimpan bilangan desimal
seperti 1.5, 2.1, 3.14, dan sebagainya.

c. Char : berfungsi untuk menyimpan data berupa sebuah huruf. Biasanya
digunakan untuk simbol seperti A, B, C dan seterusnya

d. Boolean : tipe data ini digunakan untuk menyimpan nilai boolean yang
hanya memiliki dua nilai yaitu true dan false.

## Tipe Data Abstrak
Tipe data abstrak atau yang biasa disebut Abstrak Data Tipe(ADT) merupakan
tipe data yang dibentuk oleh programer itu sendiri. Pada tipe data abstrak bisa berisi
banyak tipe data, jadi nilainya bisa lebih dari satu dan beragam tipe data. Fitur Class
adalah fitur Object Oriented Program(OPP) pada bahasa C++ yang mirip dengan fitur
data structures Struct pada bahasa C. Keduanya berfungsi untuk membungkus tipe
data di dalamnya sebagai anggota. menurut learn.microsoft.com perbedaan antara
Praktikum Struktur Data dan Algoritma 2
Struct dan Class adalah pada akses defaultnya dimana Struct bersifat public dan Class
bersifat private.

## Tipe Data Koleksi
Tipe data koleksi (Collection Data Type) adalah tipe data yang digunakan untuk
mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Tipe
data koleksi memungkinkan Anda menyimpan, mengelola, dan mengakses sejumlah
besar data dengan cara yang terstruktur. Ada beberapa tipe data koleksi yang umum
digunakan dalam pemrograman, dan di antaranya adalah:

a. Array : Array adalah struktur data statis yang menyimpan elemen-elemen
dengan tipe data yang sama. Elemen-elemen tersebut dapat diakses
dengan menggunakan indeks. Array memiliki ukuran tetap yang
ditentukan saat deklarasi.

b. Vector : Vector adalah Standard Template Library (STL) jika di dalam
C/C++ memiliki bentuk std::vector . Umumnya, vector mirip seperti array
yang memiliki kemampuan untuk menyimpan data dalam bentuk elemenelemen yang alokasi memorinya dilakukan otomatis dan bersebelahan.
Kemampuan vector bukan hanya pada jumlah elemen yang dinamis,
vector pada C/C++ juga dilengkapi dengan fitur-fitur pelengkap seperti
element access, iterators, capacity, modifiers

c. Map : Map terasa mirip dengan array namun dengan index yang
memungkinkan untuk berupa tipe data selain integer. Pada map, indeks
tersebut diberi nama “key”. Pada std::map digunakan Self-Balancing Tree
khususnya Red-Black Tree.

## Guided 

### 1. [TIPE DATA PRIMITIF]

```C++
#include<iostream>
using namespace std;
// Main program
int main()
{
    char op;
    float num1,num2;
    // It allows user to enter operator i.e.+,-,*,/
    cin >> op;
    // it allow user to enter the operands
    cin >> num1 >> num2;
    // switch statement begins
    switch (op)
    {
        // if user enter +
        case '+':
        cout << num1 + num2 ;
        break;
        //if user enter -
        case '-':
        cout << num1 - num2 ;
        break;
        // if user enter *
        case '*':
        cout << num1 * num2 ;
        break;
        // if user enter /
        case '/':
        cout << num1 / num2 ;
        break;
        // if the operator is other than +.-.* or /,
        // error message will display
        default :
        cout << "Error! operator is not correct";
    }// switch statement ends
    return 0;
}
```
Kode di atas digunakan untuk mencetak angka yang dihitung sesuai dengan angka yang diinputkan oleh user

### 2. [TIPE DATA ABSTRAK]
```C++
#include<stdio.h>

//struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};
int main ()
{
    // menggunakan struct
    struct Mahasiswa mhs1,mhs2;
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    //mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama : %s\n",mhs1.name);
    printf("Alamat : %s\n",mhs1.address);
    printf("umur : %d\n",mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama : %s\n",mhs2.name);
    printf("Alamat : %s\n",mhs2.address);
    printf("Umur : %d\n",mhs2.age);
    return 0;
}
```
Kode di atas adalah penggunaan struktur atau struct untuk mengolah beberapa data yang memiliki struktur sama. Contohnya apabila kita ingin 
mengolah data diri mahasiswa meliputi nama, alamat, dan umur. Dengan menggunakan struct, kita tidak perlu mendeklarasikan variabel lebih
banyak. 

### 3. [TIPE DATA KOLEKSI]
```C++
#include<iostream>
using namespace std;
int main()
{
    //deklarasi dan inisialisasi array
    int nilai [5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array
    cout << "Isi array pertama :" << nilai [0] << endl;
    cout << "Isi array kedua :" << nilai [1] << endl;
    cout << "Isi array ketiga :" << nilai [2] << endl;
    cout << "Isi array keempat :" << nilai [3] << endl;
    cout << "Isi array kelima :" << nilai [4] << endl;
    return 0;
}
```
Kode diatas adalah contoh penggunaan array untuk menyimpan nilai dan mencetaknya.

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
