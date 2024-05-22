# <h1 align="center">Laporan Praktikum Modul Searching </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

# Dasar Teori
## Pengertian searching

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
// no 1
// Arvel Mahsa
//2311102188
#include <iostream>
using namespace std;
const int maksimalQueue = 5; // Maksimal antrian
int front = 0;               // Penanda antrian
int back = 0;                // Penanda
struct Node
{
    string data;
    Node *next;
}; // deklarasi node
Node *head, *tail, *newNode, *temp, *del, *current, *count;
// inisalisasi node linked listt
void init()
{
    head = NULL;
    tail = NULL;
}
bool isEmpty()
{ // mengecek apakah linked list nya kososng atau tidak
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void tambahAntrean(string data)
{ // Fungsi menambahkan antrian
    newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (isEmpty())
    { // Kondisi ketika queue kosong
        head = newNode;
        tail = newNode;
        tail->next = NULL;
    }
    else
    { // Antrianya ada isi
        tail->next = newNode;
        tail = newNode;
        tail->next = NULL;
    }
}

void kurangiAntrean()
{ // Fungsi mengurangi antrian
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        if (head->next != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            head = tail = NULL;
        }
    }
}

int hitungQueue()
{ // Fungsi menghitung banyak antrian
    count = head;
    int hitung_antrean = 0;
    while (count != NULL)
    {
        count = count->next;
        hitung_antrean++;
    }
    return hitung_antrean;
}
void bersihkanQueue()
{ // Fungsi menghapus semua antrian
    temp = head;
    while (temp != NULL)
    {
        del = temp;
        temp = temp->next;
        delete del;
    }
    head = tail = NULL;
}

void lihatQueue()
{ // Fungsi melihat antrian
    cout << "Data antrian teller:" << endl;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    tambahAntrean("Andi");
    tambahAntrean("Maya");
    lihatQueue();
    cout << "Jumlah antrian = " << hitungQueue() << endl;
    cout << endl;
    kurangiAntrean();
    lihatQueue();
    cout << "Jumlah antrian = " << hitungQueue() << endl;
    cout << endl;
    bersihkanQueue();
    lihatQueue();
    cout << "Jumlah antrian = " << hitungQueue() << endl;
    cout << endl;
    return 0;
}
```
## [Output Program 1 ]
![output nomor 1](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/08ad7b6d-6191-4246-9a2a-397938a66146)

Program diatas adalah penerapan queue dengan konsep single linked list. Dengan konsep linked list user dapat menginputkan
antrean sebanyak mungkin tanpa harus mengubah jumlah array. Dalam linked list perlu mendeklarasikan struct dan node serta 
variabel pointer tambahan seperti diatas. Beberapa konsep yang digunakan pada fungsi queue diganti menggunakan konsep 
linked list.

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

## Kesimpulan

## Referensi
[1] Pengertian Queue. 

[file:///C:/Users/Acer/Downloads/ranita%20sari(1).pdf](https://repository.unikom.ac.id/41990/1/pertemuan%203.pdf)

[2] Karakteristik Queue. 

Nixon Erzed, Karakteristik Queue, Struktur data Array pada
STACK dan QUEUE, (8), Halaman 13.
https://lms-paralel.esaunggul.ac.id/pluginfile.php?file=%2F87682%2Fmod_resource%2Fcontent%2F1%2F08_7228_ccs120_112018_pdf.pdf

