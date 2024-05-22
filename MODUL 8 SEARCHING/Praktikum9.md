# <h1 align="center">Laporan Praktikum Modul Searching </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

# Dasar Teori
## Searching
### Sequential Searching
Metode Sequential Searching memiliki tujuan yang sama pada umumnya yaitu, menemukan data yang terdapat pada array. Hanya saja, sequential search 
ini sangat mudah implementasinya dalam pemrograman di banding binary search. Dibawah ini beberapa proses cara kerja metode sequential search.

- Menentukan data yang akan dicari terlebih dahulu.
  
- Mencari data yang dicari pada array satu persatu dengan cara sekuensial.
  
- Dari data pertama hingga data terakhir yang terdapat pada array dibandingkan dengan data yang dicari.
  
- Apabila data ditemukan maka akan muncul statement sukses ditemukan.
  
- Apabila data tidak ditemukan maka juga akan muncul statement data tidak ditemukan

### Binary Search
Metode binary searching berbeda dengan metode sequential search. Perbedaanya terlihat dimana apabila sequential search tanpa melalui proses yang rumit termasuk dapat mencari data secara acak. Berbeda dengan metode binary search, dimana metode ini data harus terurut dengan baik secara ascending ataupun descending yang terdapat pada array. Jadi, metode binary search membutuhkan metode sorting, salah satunya bisa menggunakan selection sort.

### Selection Sort
Selection sort adalah algoritma pengurutan yang digunakan untuk mengurutkan data dari yang terkecil ke yang terbesar atau sebaliknya. Algoritma ini bekerja dengan cara mencari nilai terkecil dari data yang belum diurutkan, kemudian menempatkannya pada posisi pertama dari data yang sudah diurutkan. Proses ini dilakukan berulang-ulang hingga semua data terurut.

# Guided
## Guided 1
```C++
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // algoritma Sequential Search
    for (i = 0; i < n; i++)
    {
        if (data[i] == cari)
        {
            ketemu = true;
            break;
        }
    }
    cout << endl;
    cout << "Program Sequential Search Sederhana\n " << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
    if (ketemu)
    {
        cout << "\n angka " << cari << " ditemukan pada indeks ke -" << i << endl;
        cout << endl;
    }
    else
    {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}
```
## Output Guided 1
![Screenshot (253)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/77b1e2d8-8268-48e2-a810-7278cf93b30a)

## Guided 2
```C++
#include <iostream>
#include <iomanip>
using namespace std;

// Deklarasi array dan variabel untuk pencarian
int arrayData[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort(int arr[], int n)
{
    int temp, min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // Tukar elemen
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void binary_search(int arr[], int n, int target)
{
    int awal = 0, akhir = n - 1, tengah, b_flag = 0;
    while (b_flag == 0 && awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == target)
        {
            b_flag = 1;
            break;
        }
        else if (arr[tengah] < target)
        {
            awal = tengah + 1;
        }
        else
        {
            akhir = tengah - 1;
        }
    }
    if (b_flag == 1)
        cout << "\nData ditemukan pada index ke-" << tengah << endl;
    else
        cout << "\nData tidak ditemukan\n";
}

int main()
{
    cout << "\tBINARY SEARCH" << endl;
    cout << "\nData awal: "; 
    
    // Tampilkan data awal
    for (int x = 0; x < 7; x++)
    {
        cout << setw(3) << arrayData[x];
    }
    cout << endl;
    cout << "\nMasukkan data yang ingin Anda cari: ";
    cin >> cari;
    
    // Urutkan data dengan selection sort
    selection_sort(arrayData, 7);
    cout << "\nData diurutkan: ";
    
    // Tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++)
    {
        cout << setw(3) << arrayData[x];
    }
    cout << endl;
    
    // Lakukan binary search
    binary_search(arrayData, 7, cari);
    return 0;
}
```
## Output Guided 2
![Screenshot (254)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/53ea1462-5dc1-48f1-8ff7-31ab4deb9968)

# Unguided 
1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang 
sudah di input dengan menggunakan Binary Search!

2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam 
sebuah kalimat!

3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 
dengan menggunakan algoritma Sequential Search!

## [Source Code 1]
```C++
// // soal nomor 1
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <iomanip>

// using namespace std;
// void pemilihan_sort(vector<char>& arr) {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++) {
//         int min = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min]) {
//                 min = j;
//             }
//         }
//         swap(arr[i], arr[min]);
//     }
// }


// void pencarian_binary(const vector<char>& arr, char target) {
//     int begin = 0, ending = arr.size() - 1, tengah;
//     bool found = false;

//     while (!found && begin <= ending) {
//         tengah = (begin + ending) / 2;
//         if (arr[tengah] == target) {
//             found = true;
//             break;
//         } else if (arr[tengah] < target) {
//             begin = tengah + 1;
//         } else {
//             ending = tengah - 1;
//         }
//     }

//     if (found)
//         cout << "\nHuruf '"<< target <<"' ditemukan pada index ke-" << tengah << endl;
//     else
//         cout << "\nHuruf '" << target << "' tidak ditemukan\n";
// }

// int main() {
//     string sentence;
//     char letter;
  
//     cout << "\tBINARY SEARCH PROGRAM" << endl;
//     cout << "\nInput Sentence : ";
//     getline(cin, sentence);

//     cout << "\nMasukkan huruf yang ingin dicari: ";
//     cin >> letter;

//     vector<char> charArray(sentence.begin(), sentence.end());

//     cout << "\nKalimat Awal : ";
//     for (char c : charArray) {
//         cout << setw(3) << c;
//     }
//     cout << endl;

//     pemilihan_sort(charArray);

//     cout << "\nKalimat Setelah Di Urutkan : ";
//     for (char c : charArray) {
//         cout << setw(3) << c;
//     }
//     cout << endl;
//     pencarian_binary(charArray, letter);

//     return 0;
// }

// soal nomor 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     string kalimat;
//     int jumlahHuruvokal;
//     cout << endl;
//     cout << "PROGRAM UNTUK MENCARI HURUF VOKAL\n";
//     cout << "Masukkan Kalimat: ";
//     getline(cin, kalimat);

//     int i;
//     // algoritma Sequential Search
//     for (i = 0; i < kalimat.length(); i++)
//     {
//         if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' ||kalimat[i] == 'e' ||kalimat[i] == 'o'||
//         kalimat[i] == 'A' ||kalimat[i] == 'I' ||kalimat[i] == 'U' ||kalimat[i] == 'E' ||kalimat[i] == 'O')
//         {
//             jumlahHuruvokal++;
//             continue;
//         }
//     }
//     cout << "Jumlah Huruf Vokalnya Ada : " << jumlahHuruvokal << endl;
//     return 0;
// }
// soal nomor 3
// #include <iostream>
// using namespace std;
// int arrayData[10] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
// int main()
// {
//     int banyak_angka_empat = 0;
//     // algoritma squential search
//     for (int i = 0; i < 10; i++)
//     {
//         if (arrayData[i] == 4)
//         {
//             banyak_angka_empat++;
//         }
//     }
//     cout << "Banyak Angka 4 ada : " << banyak_angka_empat << endl;
//     return 0;
// }

```
## [Output Program 1 ]
![Screenshot (257)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/bc35e146-7945-437a-9498-f84bb69a88dc)

Program diatas merupakan program untuk mencari huruf dari kalimat yang telah diinputkan 
menggunakan binary search dan selection sort.

## [Source Code 2]
```C++
//soal nomor 2
#include <iostream>
using namespace std;
int main()
{
    string kalimat;
    int jumlahHuruvokal;
    cout << endl;
    cout << "PROGRAM UNTUK MENCARI HURUF VOKAL\n";
    cout << "Masukkan Kalimat: ";
    getline(cin, kalimat);

    int i;
    // algoritma Sequential Search
    for (i = 0; i < kalimat.length(); i++)
    {
        if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' ||kalimat[i] == 'e' ||kalimat[i] == 'o'||
        kalimat[i] == 'A' ||kalimat[i] == 'I' ||kalimat[i] == 'U' ||kalimat[i] == 'E' ||kalimat[i] == 'O')
        {
            jumlahHuruvokal++;
            continue;
        }
    }
    cout << "Jumlah Huruf Vokalnya Ada : " << jumlahHuruvokal << endl;
    return 0;
}
```
## [Output Program 2]
![Screenshot (255)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/50e4fa9e-da6a-484b-86de-4426c0650fd3)

Program diatas merupakan program untuk mencari huruf vokal menggunakan sequential search.
## [Source Code 3]
```C++
// soal nomor 3
#include <iostream>
using namespace std;
int arrayData[10] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
int main()
{
    int banyak_angka_empat = 0;
    // algoritma squential search
    for (int i = 0; i < 10; i++)
    {
        if (arrayData[i] == 4)
        {
            banyak_angka_empat++;
        }
    }
    cout << "Banyak Angka 4 ada : " << banyak_angka_empat << endl;
    return 0;
}
```
## [Output Program 3]
![Screenshot (256)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/c410c48d-85f0-4e31-aa12-45fbdc3418f5)

Program diatas merupakab penerapan squential search untuk mencari banyak angka yang sama pada array.
## Kesimpulan
Searching merupakan program untuk mencari inputan. Dibagi menjadi dua yaitu binary dan squential. Masing-Masing memiliki algoritma yang berbeda.

## Referensi
[1] Pengertian Binary Search, Sequential Search.
http://www.sarjanapedia.com/2019/02/metode-searching-dalam-cpp.html

[2] Selection Sort
https://anakmales.com/cpp-selection-sort/

