# <h1 align="center">Laporan Praktikum Modul Circular And Non Circular </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

## Dasar Teori
## 

## Guided
## Linked List Non Circular
source code
```c++
#include <iostream>
using namespace std;
///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi struct node

struct Node
{
    int data;
    Node *next;
};
Node *head;
Node *tail;

//Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}

//Pengecekan
bool isEmpty()
{
    if (head == NULL)
    return true;
    else
    return false;
}

// tambah depan
void insertDepan(int nilai)
{
    // buat node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

// Tambah Belakang
void insertBelakang(int nilai)
{
    //Buat Node Baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true )
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah ++;
        hitung = hitung->next;
    }
    return jumlah;
}

//Tambah Tengah
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node ();
        baru->data = data;

        // transversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next !=NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List Kosong!" << endl;
    }
}

//Hapus Belakang
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List Kosong!" << endl;
    }
}

// hapus tengah
void hapusTengah(int posisi)
{
    Node *bantu, *hapus, *sebelum;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkuan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi -1)
            {
                sebelum = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        sebelum->next = bantu;
        delete hapus;
    }
}

// ubah depan
void ubahDepan(int data)
{
    if (isEmpty() == 0)
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

//Ubah tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;
    if (isEmpty() == 0)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;
            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            bantu->data = data;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// ubah belakang
void ubahBelakang(int data)
{
    if (isEmpty() == 0)
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

//hapus list
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// tampilkan list
void tampil()
{
    Node *bantu;
    bantu = head;
    if (isEmpty() == false)
    {
        while (bantu != NULL)
        {
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main ()
{
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();

    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    
    insertTengah(7,2);
    tampil();

    hapusTengah(2);
    tampil();

    ubahDepan(1);
    tampil();

    ubahBelakang(8);
    tampil();

    ubahTengah(11, 2);
    tampil();

    return 0;

}
```
## Output Guided 1

![Screenshot (195)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/28af9c3f-f997-4110-894c-77348da0a839)

## Linked List Circulsr
Source code

```C++
#include <iostream>
using namespace std;

// PROGRAM SINGLE LINKED LIST CIRCULAR 

// DEKLARASI STRUCT NODE

struct Node
{
    string data;
    Node *next;
};

Node *head, *tail, *baru, *bantu, *hapus;

void init ()
{
    head = NULL;
    tail = head;
}

//pengecekan
int isEmpty()
{
    if (head == NULL)
    return 1;// true
    else
    return 0;// false
}

//buat node baru
void buatNode(string data)
{
    baru = new Node;
    baru -> data = data;
    baru -> next = NULL;
}

// hitung list
int hitungList()
{
    bantu = head;
    int jumlah = 0;

    while (bantu != NULL)
    {
        jumlah++;
        bantu = bantu -> next;
    }
    return jumlah;
}

// tambah depan
void insertDepan(string data)
{
    // buat node baru
    buatNode (data);

    if(isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru -> next = head;
    }
    else
    {
        while (tail -> next != head)
        {
            tail = tail -> next;
        }
        baru->next = head;
        head = baru;
        tail -> next = head;
    }
}

// tambah belakang 
void insertBelakang(string data)
{
    //buat node baru
    buatNode(data);

    if (isEmpty()==1)
    {
        head = baru;
        tail = head;
        baru-> next = head;
    }
    else
    {
        while (tail -> next != head)
        {
            tail = tail -> next;
        }
        tail->next = baru;
        baru->next = head;
        tail = baru;
    }
}

// tambah tengah
void insertTengah(string data, int posisi)
{
    if (isEmpty()==1)
    {
        head = baru;
        tail = head;
        baru->next=head;
    }
    else
    {
        baru->data = data;
        //transversing
        int nomor = 1;
        bantu = head;
        while (nomor < posisi -1)
        {
            bantu = bantu ->next;
            nomor ++;
        }
        baru -> next = bantu -> next;
        bantu -> next = baru;
    }
}

//hapus depan
void hapusDepan()
{
    if (isEmpty()== 0)
    {
        hapus = head;
        tail = head;
    }
    if (hapus->next == head)
    {
        head = NULL;
        tail = NULL;

        delete hapus;
    }
    else
    {
        while (tail->next != hapus)
        {
            tail = tail -> next;
        }
        head = head -> next;
        tail -> next = head;
        hapus -> next = NULL;

        delete hapus;
    }
}

//hapus belakang
void hapusBelakang()
{
    if (isEmpty()==0)
    {
        hapus = head;
        tail = head;
        if (hapus->next == head)
        {
            head = NULL;
            tail = NULL;

            delete hapus;
        }
        else
        {
            while (hapus->next != head)
            {
                hapus = hapus -> next;
            }
            while (tail->next != hapus)
            {
                tail = tail -> next;
            }
            tail -> next = head;
            hapus -> next = NULL;

            delete hapus;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// hapus tengah
void hapusTengah (int posisi)
{
    if (isEmpty()==0)
    {
        //transvering
        int nomor = 1;
        bantu = head;

        while (nomor < posisi - 1)
        {
            bantu = bantu -> next;
            nomor++;
        }
        hapus = bantu->next;
        bantu -> next = hapus -> next;

        delete hapus;
    }
    else
    {
        cout << "List masih kososng !" << endl;
    }
}

//hapus list
void clearList()
{
    if (head != NULL)
    {
        hapus = head -> next;

        while (hapus != head)
        {
            bantu = hapus -> next;
            delete hapus;
            hapus = bantu;
        }
        delete head;
        head = NULL;
    }
    cout << "List berhasil terhapus!"<< endl;
}

//tampilkan list
void tampil ()
{
    if (isEmpty()==0)
    {
        tail = head;
        do
        {
            cout << tail->data<<ends;
            tail = tail->next;
        }
        while (tail != head);
        cout << endl;
    }
    else
    {
        cout << "List masih kosong !"<< endl;
    }
}

int main ()
{
    init ();
    insertDepan("Ayam");
    tampil();
    insertDepan("Bebek");
    tampil();
    insertBelakang("Cicak");
    tampil();
    insertBelakang("Domba");
    tampil();

    hapusBelakang();
    tampil();
    hapusDepan();
    tampil();

    insertTengah("Sapi",2);
    tampil();
    hapusTengah(2);
    tampil();

    return 0;

}
```

## Output Guided 2

![Screenshot (196)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/8fc7155e-eb67-4d02-87ba-942b93436b9a)

## Unguided 
   [Soal]
   Buatlah program menu Linked List Non Circular untuk menyimpan Nama dan NIM
   mahasiswa, dengan menggunakan input dari user.
## 1. Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan NIM mahasiswa 
berikut contoh tampilan output dari nomor 1:
## Tampilan Menu
![output pertama](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/a3987a16-f6d3-449f-91a2-abf17616574f)

## Tampilan Operasi Tambah
Tambah Depan

![tambah depan](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/68a6e6f4-3102-491a-a978-89cfa6d2b0b1)


Tambah Tengah

![tambah tengah](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/6fecb5f7-001d-4ac9-80ae-ded9c1145b50)

## Tampilan Operasi Hapus
Hapus Belakang

![hapus belakang](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/30a7e6c7-69ab-4d69-91c5-a98523f6295e)

Hapus Tengah

![hapus tengah](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/eaf91a3d-d0aa-4ddc-b0a8-56862434e7f4)

## Tampilan Operasi Ubah
Ubah Belakang

![ubah belakang](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/3a816934-4ba4-487f-9104-b688ab376400)

Ubah Tengah

![ubah tengah](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/ea03d49a-47ae-4ff8-8c29-f6000c3a55da)

## Tampilan Operasi Tampil Data

![tampil data](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/2b132dc6-6c50-4ce1-bbc2-62bb7b4a83da)

## Source Code 
```C++

```

## [Output Program 1]

## 2. Soal mengenai Double Linked List

## Source Code
```C++

```

## Kesimpulan

## Referensi
[1] Binus University, Pengertian Single Linked List. https://socs.binus.ac.id/2017/03/15/single-linked-list/.
    rizkidoank. Pengertian Double Linked List. rizkidoank.com. https://www.rizkidoank.com/2016/10/17/double-linked-list/.
    
[2] Perbedaan Array dan Linked List, perbedaan.co.id, https://www.perbedaan.co.id/perbedaan-array-dan-linked-list/. 2023.



