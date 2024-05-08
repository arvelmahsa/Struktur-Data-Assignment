# <h1 align="center">Laporan Praktikum Modul Stack </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

# Dasar Teori
## Pengertian Stack
Kumpulan items yang teratur dimana items baru akan dimasukkan ke dan sebuah items
akan dikeluarkan dari satu ujung yang sama,yaitu dari TOP sebuah stack.Struktur data
linier dimana hanya bagian TOP-nya saja yang bisa diakses. Bersifat LIFO=LastInFirst
Out. Bisa diimplementasikan menggunakan array atau LinkedList.

## Ilustrasi Stack
Terdapat dua buah kotak yang ditumpuk,kotak yang satu akan ditumpuk diatas kotak
yang lainnya.Jika kemudian stack 2 kotak tadi,ditambah kotak ketiga,keempat,kelima,
dan seterusnya,maka akan diperoleh sebuah stack kotak yang terdiri dari N kotak

## Operasi Dasar Pada Stack
Adapun operasi-operasi dasar dari suatu stack adalah :

a) Create(Stack)

Operasi Create(Stack) digunakan untuk membuat suatu stack baru
dengan nama stack, yang nilai elemen saat stack tersebut dibuat adalah NOEL(S)
= 0, TOP(S) = NULL (tidak terdefinisikan)

b) IsEmpty(Stack)

Operasi ini merupakan operasi untuk mencek isi dari suatu stack dalam
keadaan kosong atau berisi. Operasi ini memiliki 2 (dua) kondisi boolean yaitu :

- True jika stack tersebut kosong atau dapat dikatakan NOEL(S) = 0
  
- False jika stack tersebut tidak dalam kondisi kosong atau dapat dikatakan
NOEL(S) > 0

c) Push(Stack, Elemen)

Operasi ini merupakan operasi untuk menambahkan satu elemen dengan
nilai X pada puncak suatu stack, sehingga posisi TOP(S) akan bernilai X, penerapan
operasi push pasa suatu stack S akan berakibat overflow jika NOEL(S) dari stack
tersebut telah bernilai maksimum.

d) Pop(Stack)

Operasi ini berfungsi untuk menghapus satu elemen dari stack S, sehingga
posisi NOEL(S) akan berkurang satu elemen, dan TOP(S) akan berubah. Operasi
pop dapat menyebabkan kondisi underflow jika suatu stack S yang berada dalam
kondisi minimum dikenakan operasi pop.

e) IsFULL

Operasi ini untuk memeriksa apakah Stack sudah penuh.

f) CLEAR

Operasi ini untuk mengosongkan stack.

# Guided
## Guided 1
```C++
#include<iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull()
{
    return (top == maksimal);
}

bool isEmpty()
{
    return (top == 0);
}

void pushArrayBuku(string data)
{
    if(isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dihapus " << endl;
    }
    else
    {
        arrayBuku[top-1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi)
{
    if(isEmpty())
    {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        cout << "Posisi ke " << posisi << " Adalah " <<
        arrayBuku[index] << endl;
    }
}

int countStack()
{
    return top;
}

void changeArrayBuku(int posisi, string data)
{
    if (posisi > top)
    {
        cout << "Posisi melebihi data yang ada" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi ; i++)
        {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArrayBuku()
{
    for (int i = top; i >= 0; i--)
    {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dicetak" << endl;
    }
    else
    {
        for (int i = top-1; i >= 0; i--)
        {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main ()
{
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah Data Stack Penuh? " << isFull() << endl;
    cout << "Apakah data stack kososng? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();

    cout << "\n";

    destroyArrayBuku();
    cout << "Jumlah data setelah dihapus : " << top << endl;

    cetakArrayBuku();

    return 0;
}
```
## Output Guided 1
![Screenshot (237)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/1a189d2c-e16f-4c7d-af3d-0a365a7381bf)

# Unguided 
1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan
dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari
depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

![Screenshot (234)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/7c2011f5-9470-4277-9691-f6ce2a0e20dc)

2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan
stack dengan minimal 3 kata. Jelaskan output program dan source codenya
beserta operasi/fungsi yang dibuat?

![Screenshot (235)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/7e69fc9d-ebc3-4ad6-b350-1af723ce9731)

## [Source Code 1]
```C++
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string array_kata[5];
int maksimal = 5, top = 0;

bool isFull()
{
    return (top == maksimal);
}

bool isEmpty()
{
    return (top == 0);
}

// Untuk Mengubah huruf besar menjadi kecil
string to_lower(string kata_188)
{
    string kata = "";
    for (int i = 0; i < kata_188.length(); i++)
    {
        kata += tolower(kata_188[i]);
    }
    return kata;
}

// Untuk mengecek ke palindroman
void cek_palindrom(string kata_188)
{
    string kata = to_lower(kata_188);
    string reverse_kata = "";

    for (int i = kata_188.length() - 1; i >= 0; i--)
    {
        reverse_kata += kata[i];
    }

    cout << reverse_kata;

    if (kata == reverse_kata)
    {
        cout << " Adalah Kata Palindrom";
    }
    else
    {
        cout << " Bukan Kata Palindrom";
    }
}

void pusharray_kata(string data)
{
    if (isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        cek_palindrom(data);
        array_kata[top] = data;
        top++;
    }
}

int countStack()
{
    return top;
}

void cetakarray_kata()
{
    if (isEmpty())
    {
        cout << "Tidak ada kata yg dicetak" << endl;
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            cout << array_kata[i] << endl;
        }
    }
}

int main()
{
    string kata;
    cout << endl;
    cout << "Ketikan kata = ";
    cin >> kata;
    pusharray_kata(kata);
    cout << endl;

    return 0;
}
```
## [Output Program 1 ]
![Screenshot (238)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/e313f48c-ebe7-4853-829a-15ebf4fe74e8)

Program diatas merupakan penerapan dari stack berupa program untuk mengecek apakah kata yang di inputkan adalah palindrom atau bukan.
Program diatas menerapkan fungsi to_lower untuk mengecilkan huruf yang diinputkan sekaligus supaya ketika user menginputkan kata dengan 
huruf besar tetap bisa dicek palindrom atau bukannya.

## [Source Code 2]
```C++
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string array_kata[4];
int maksimal = 4, top = 0;

bool isFull()
{
    return (top == maksimal);
}

bool isEmpty()
{
    return (top == 0);
}

string cek_reverse(string kata_188)
{
    string reverse_kata = "";

    for (int i = kata_188.length() - 1; i >= 0; i--)
    {
        reverse_kata += kata_188[i];
    }
    cout << "Jika Dibalik Menjadi : ";
    return reverse_kata;
}

void pusharray_kata(string data)
{
    if (isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        string data_baru = cek_reverse(data);
        array_kata[top] = data_baru;
        top++;
    }
}

int countStack()
{
    return top;
}

void cetakarray_kata()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dicetak" << endl;
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            cout << array_kata

                        [i]
                 << endl;
        }
    }
}

int main()
{
    string kata;
    cout << endl;
    cout << "Ketikan Kata/Kalimat : ";
    getline(cin, kata);
    pusharray_kata(kata);
    cetakarray_kata();
    cout << endl;
    return 0;
}
```
## [Output Program 2]
![Screenshot (239)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/2276fdea-a366-4da4-b6e3-40a17fe1ec52)

Program diatas adalah penerapan program stack, untuk membalikan kata yang telah di inputkan oleh user.

## Kesimpulan
Secara umum stack dalam pemrograman adalah struktur data yang mengikuti prinsip LIFO (Last In, First Out), yang berarti 
elemen yang terakhir dimasukkan ke dalam stack dan akan menjadi yang pertama dikeluarkan. Dalam konteks pengembangan perangkat lunak, stack 
sering digunakan untuk manajemen memori dan penumpukan tindakan atau proses yang harus dieksekusi.

## Referensi
[1] Pengertian Dan Ilustrasi Stack. 

file:///C:/Users/Acer/Downloads/ranita%20sari(1).pdf

[2] Operasi Dasar Pada Stack. 

[https://dosenit.com/kuliah-it/hash-table](https://repository.bsi.ac.id/repo/files/355474/download/Makalah-Struktur-data-dikti.pdf)
