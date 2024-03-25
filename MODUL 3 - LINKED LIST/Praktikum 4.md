# <h1 align="center">Laporan Praktikum Modul Linked List </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

## Dasar Teori
## a) Single Linked List
Linked List merupakan suatu bentuk struktur data yang berisi kumpulan data yang disebut sebagai node 
yang tersusun secara sekuensial, saling sambung menyambung, dinamis, dan terbatas. Setiap elemen dalam linked list
dihubungkan ke elemen lain melalui pointer. Masing-masing komponen sering disebut dengan simpul atau node atau verteks. 

Pointer adalah alamat elemen. Setiap simpul pada dasarnya dibagi atas dua bagian pertama disebut bagian
isi atau informasi atau data yang berisi nilai yang disimpan oleh simpul. Bagian kedua disebut bagian pointer 
yang berisi alamat dari node berikutnya atau sebelumnya. Dengan menggunakan struktur seperti ini, linked list
dibentuk dengan cara menunjuk pointer next suatu elemen ke elemen yang mengikutinya. Pointer next pada elemen
terakhir merupakan NULL, yang menunjukkan akhir dari suatu list. Elemen pada awal suatu list disebut head
dan elemen terakhir dari suatu list disebut tail.

![Screenshot (170)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/ac072179-f0d8-412f-9d32-0195838216df)

Dalam operasi Single Linked List, umumnya dilakukan operasi penambahan dan penghapusan simpul pada awal atau
akhir daftar, serta pencarian dan pengambilan nilai pada simpul tertentu dalam daftar. Karena struktur data ini
hanya memerlukan satu pointer untuk setiap simpul, maka Single Linked List umumnya lebih efisien dalam penggunaan
memori dibandingkan dengan jenis Linked List lainnya, seperti Double Linked List dan Circular Linked List.
Single linked list yang kedua adalah circular linked list. Perbedaan circular linked list dan non circular linked 
adalah penunjuk next pada node terakhir pada circular linked list akan selalu merujuk ke node pertama.

![Screenshot (171)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/58d37faf-d483-4255-b6df-48a3f9200e2e)

## b) Double Linked List
Double Linked List adalah struktur data Linked List yang mirip dengan Single Linked List, namun dengan tambahan satu pointer tambahan pada setiap
simpul yaitu pointer prev yang menunjuk ke simpul sebelumnya. Dengan adanya pointer prev, Double Linked List memungkinkan untuk melakukan
operasi penghapusan dan penambahan pada simpul mana saja secara efisien. Setiap simpul pada Double Linked List memiliki tiga elemen penting, yaitu
elemen data (biasanya berupa nilai), pointer next yang menunjuk ke simpul berikutnya, dan pointer prev yang menunjuk ke simpul sebelumnya.

Keuntungan dari Double Linked List adalah memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul dimana saja dengan
efisien, sehingga sangat berguna dalam implementasi beberapa algoritma yang membutuhkan operasi tersebut. Selain itu, Double Linked List juga
memungkinkan kita untuk melakukan traversal pada list baik dari depan (head) maupun dari belakang (tail) dengan mudah. Namun, kekurangan dari
Double Linked List adalah penggunaan memori yang lebih besar dibandingkan dengan Single Linked List, karena setiap simpul membutuhkan
satu pointer tambahan. Selain itu, Double Linked List juga membutuhkan waktu eksekusi yang lebih lama dalam operasi penambahan dan penghapusan
jika dibandingkan dengan Single Linked List.
Representasi sebuah double linked list dapat dilihat pada gambar berikut ini:

![Screenshot (172)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/376476a5-14e5-4cd5-b925-3090dc7bc3e6)

Di dalam sebuah linked list, ada 2 pointer yang menjadi penunjuk utama, yakni pointer HEAD yang menunjuk pada node pertama di dalam linked list
itu sendiri dan pointer TAIL yang menunjuk pada node paling akhir di dalam linked list. Sebuah linked list dikatakan kosong apabila isi pointer head adalah
NULL. Selain itu, nilai pointer prev dari HEAD selalu NULL, karena merupakan data pertama. Begitu pula dengan pointer next dari TAIL yang
selalu bernilai NULL sebagai penanda data terakhir.

## Guided
## a.) Latihan Single Linked List
source code

```c++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    // komponen/member
    int data;
    Node *next;
};
Node *head;
Node *tail;
// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}
// Tambah Depan
void insertDepan(int nilai)
{
    // Buat Node baru
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
    // Buat Node baru
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
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
// Tambah Tengah
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
        baru = new Node();
        baru->data = data;
        // tranversing
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
        if (head->next != NULL)
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
        cout << "List kosong!" << endl;
    }
}
// Hapus Belakang
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
        cout << "List kosong!" << endl;
    }
}
// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;
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
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}
// Ubah Depan
void ubahDepan(int data)
{
    if (isEmpty() == false)
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;
    if (isEmpty() == false)
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
// Ubah Belakang
void ubahBelakang(int data)
{
    if (isEmpty() == false)
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus List
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
// Tampilkan List
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
int main()
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
    insertTengah(7, 2);
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

![Screenshot (173)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/cd141e3b-f057-4867-ae9c-027e259de1cf)

## b.) Latihan Double Linked List
Source code

```C++
#include <iostream>
using namespace std;


class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

## Output Guided 2
![Screenshot (174)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/4dfa6eac-bb83-4fa8-9d54-d480aa93722b)


## Unguided 
   [Soal]
   
## 1. Soal Mengenai Linked List
Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan
dari user. Lakukan operasi berikut:

a. Masukkan data sesuai urutan berikut. (Gunakan insert depan,
belakang atau tengah). Data pertama yang dimasukkan adalah
nama dan usia anda.

[Nama_anda] [Usia_anda]
John            19
Jane            20
Michael         18
Yusuke          19
Akechi          20
Hoshino         18
Karin           18

b. Hapus data Akechi

c. Tambahkan data berikut diantara John dan Jane : Futaba 18

d. Tambahkan data berikut diawal : Igor 20

e. Ubah data Michael menjadi : Reyn 18

f. Tampilkan seluruh data

## Source Code 
```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    // komponen/member
    int usia;
    string namaanda;
    Node *next;
};
Node *head;
Node *tail;
// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}
// Tambah Depan
void insertDepan(int usia, string namaanda)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->usia = usia;
    baru->namaanda = namaanda;
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
void insertBelakang(int usia, string namaanda)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->usia = usia;
     baru->namaanda = namaanda;
    baru->next = NULL;
    if (isEmpty() == true)
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
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
// Tambah Tengah
void insertTengah(int usia, int posisi, string namaanda)
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
        baru = new Node();
        baru->usia = usia;
        baru->namaanda = namaanda;
        // tranversing
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
        if (head->next != NULL)
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
        cout << "List kosong!" << endl;
    }
}
// Hapus Belakang
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
        cout << "List kosong!" << endl;
    }
}
// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;
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
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}
// Ubah Depan
void ubahDepan(int usia, string namaanda)
{
    if (isEmpty() == false)
    {
        head->usia = usia;
        head->namaanda = namaanda;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Tengah
void ubahTengah(int usia, int posisi, string namaanda)
{
    Node *bantu;
    if (isEmpty() == false)
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
            bantu->usia = usia;
            bantu->namaanda = namaanda;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Belakang
void ubahBelakang(int usia,string namaanda)
{
    if (isEmpty() == false)
    {
        tail->usia = usia;
        tail->namaanda = namaanda;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus List
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
// Tampilkan List
void tampil()
{
    Node *bantu;
    bantu = head;
    int nomor = 1;
    if (isEmpty() == false)
    {
        while (bantu != NULL)
        {
            cout << nomor << ". " << bantu->namaanda << "   " << bantu->usia << endl;
            bantu = bantu->next;
            nomor++;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
int main()
{
    int pilihan, usia, posisi;
    string nama;
    init();
    do{
    system("cls");
    cout << " DATA NAMA DAN USIA\n";
    cout << " 1.  Tambah depan\n";
    cout << " 2.  Tambah belakang\n";
    cout << " 3.  Tambah Tengah\n";
    cout << " 4.  Hapus Depan\n";
    cout << " 5.  Hapus Belakang\n";
    cout << " 6.  Hapus Tengah\n";
    cout << " 7.  Ubah Depan\n";
    cout << " 8.  Ubah Belakang\n";
    cout << " 9.  Ubah Tengah\n";
    cout << " 10. Remove All\n";
    cout << " 11. Tampilkan Data\n";
    cout << " Inputkan Nomor : ";
    cin >> pilihan;
    switch(pilihan)
    {
        case 1 : cout << " Nama : ";
        cin>> nama;
        cout << " Usia : ";
        cin>>usia;
        insertDepan(usia, nama);
        break;

        case 2 : cout << " Nama : ";
        cin>> nama;
        cout << " Usia : ";
        cin>>usia;
        insertBelakang(usia, nama);
        break;

        case 3 : cout << " Nama : ";
        cin>> nama;
        cout << " Usia : ";
        cin>>usia;
        cout << " Posisi : ";
        cin >> posisi;
        insertTengah(usia, posisi ,nama);
        break;

        case 4 :
        hapusDepan();
        break;

        case 5 :
        hapusBelakang();
        break;

        case 6 :
        cout << " Posisi Hapus : ";
        cin >> posisi;
        hapusTengah(posisi);
        break;


        case 7 : cout << " Nama : ";
        cin>> nama;
        cout << " Usia : ";
        cin>>usia;
        ubahDepan(usia, nama);
        break;

        case 8 :  cout << " Nama : ";
        cin>> nama;
        cout << " Usia : ";
        cin>>usia;
        ubahBelakang(usia, nama);
        break;

        case 9 :  cout << " Nama : ";
        cin>> nama;
        cout << " Usia : ";
        cin>>usia;
        cout << "Posisi : ";
        cin >> posisi;
        ubahTengah(usia,posisi, nama);
        break;

        case 10 :
        clearList();
        break;

        case 11 :
        tampil();
        system ("pause");
        break;

        default: cout << "Inputan yang anda masukan tidak valid !!";
        break;
    }
    }while (true);
    return 0;
}
```

## [Output Program 1]

a. Masukkan data sesuai urutan berikut. (Gunakan insert depan,
belakang atau tengah). Data pertama yang dimasukkan adalah
nama dan usia anda

![Screenshot (176)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/d88f290a-6f90-4976-80ca-6a5f443cb1d7)

b. Hapus data Akechi

![Screenshot (177)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/6d3f40f4-3bfe-48ae-8b83-4ad7de86efae)

![Screenshot (178)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/a47d4ed2-f902-49e5-b4eb-6bf912a66b32)

c. Tambahkan data berikut diantara John dan Jane : Futaba 18

![Screenshot (179)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/b34aba06-3644-42c9-b963-dd1105f7d94d)

![Screenshot (180)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/1662d91b-f37d-46df-ae71-150295df91fd)

d. Tambahkan data berikut diawal : Igor 20

![Screenshot (181)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/422abf72-2fef-4e50-a6ca-aefaa1c6a624)

![Screenshot (182)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/4f1c607e-967a-4f73-a37a-573376dc1208)

e. Ubah data Michael menjadi : Reyn 18

![Screenshot (183)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/e847559e-afd5-4b8e-a925-bae40f869886)

f. Tampilkan seluruh data

![Screenshot (184)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/4872c0a7-8fac-498e-901e-2873f483a6df)

Kode diatas adalah Penerapan Single Linked List untuk menginputkan data nama dan usia yang telah ditentukan. Kemudian ada 11 menu yang 
akan bekerja sesuai perintah sesuai dengan yang di coding.

## 2. Soal mengenai Double Linked List
Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di
urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.

Nama Produk    Harga

Originote     60.000

Somethinc    150.000

Skintific    100.000

Wardah       50.000

Hanasui      30.000   

Case:

1. Tambahkan produk Azarine dengan harga 65000 diantara
Somethinc dan Skintific

2. Hapus produk wardah

3. Update produk Hanasui menjadi Cleora dengan harga 55.000

4. Tampilkan menu seperti dibawah ini


Toko Skincare Purwokerto

1. Tambah Data

2. Hapus Data

3. Update Data

4. Tambah Data Urutan Tertentu

5. Hapus Data Urutan Tertentu

6. Hapus Seluruh Data

7. Tampilkan Data

8. Exit

Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah
ini :

Nama Produk    Harga

Originote     60.000

Somethinc    150.000

Azarine       65.000

Skintific    100.000

Cleora        55.000

## Source Code
```C++
#include <iostream>
using namespace std;

class Node
{
public:
    string harga;
    string namaproduk;
    Node *prev;
    Node *next;
};
class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    int hitungList()
    {
        Node *hitung;
        hitung = head;
        int jumlah = 0;
        while (hitung != NULL)
        {
            jumlah++;
            hitung = hitung->next;
        }
        return jumlah;
    }

    void push(string harga, string namaproduk)
    {
        Node *newNode = new Node;
        newNode->harga = harga;
        newNode->namaproduk = namaproduk;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr)
        {
            head->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        head = newNode;
    }

    void push_middle(string harga, string namaproduk, int posisi)
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
            baru = new Node();
            baru->namaproduk = namaproduk;
            baru->harga = harga;
            // tranversing
            bantu = head;
            int nomor = 1;
            while (nomor < posisi - 1)
            {
                bantu = bantu->next;
                nomor++;
            }
            baru->next = bantu->next;
            bantu->next = baru;
            baru->prev = bantu;
            bantu->next->prev = baru;
        }
    }
    void pop()
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }
        delete temp;
    }
    
    void pop_middle(int position)
    {
        Node *temp, *current, *prevCurrent;

        if (position < 1 || position > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (position == 1)
        {
            cout << "Posisi bukan di tengah" << endl;
        }
        else
        {
            int number = 1;
            current = head;

            while (number <= position)
            {
                if (number == position - 1)
                {
                    prevCurrent = current;
                }

                if (number == position)
                {
                    temp = current;
                }

                current = current->next;
                number++;
            }
            prevCurrent->next = current;
            current->prev = prevCurrent;
            delete temp;
        }
    }
    bool update(string oldData, string namaproduk, string harga)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->namaproduk == oldData)
            {
                current->namaproduk = namaproduk;
                current->harga = harga;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->namaproduk << "   " << current->harga << endl;
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList list;
    int posisi;
    string namaproduk, harga;
    while (true)
    {   system("cls");
        cout << "Toko Skincare Purwokerto\n";
        cout << " 1. Tambah Data" << endl;
        cout << " 2. Hapus Data" << endl;
        cout << " 3. Update data" << endl;
        cout << " 4. Tambah Data Urutan Tertentu" << endl;
        cout << " 5. Hapus Data Urutan Tertentu" << endl;
        cout << " 6. Hapus Seluruh Data" << endl;
        cout << " 7. Tampilkan Data" << endl;
        cout << " 8. Exit" << endl;
        int choice;
        cout << " Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
        {
            cout << "Nama Produk : ";
            cin >> namaproduk;
            cout << "Harga Produk : ";
            cin >> harga;
            list.push(harga, namaproduk);
            break;
        }
        case 2:
        {
            list.pop();
            break;
        }
        case 3:
        {
            string oldData, newData;
            cout << "Nama Produk Sebelumnya : ";
            cin >> oldData;
            cout << "Nama Produk Baru : ";
            cin >> newData;
            cout << "Harga : ";
            cin >> harga;
            bool updated = list.update(oldData, newData, harga);
            if (!updated)
            {
                cout << "Data not found" << endl;
            }
            break;
        }
        case 4:
        {
            cout << "Pilih Nomor Urut : ";
            cin >> posisi;
            cout << "Nama Produk : ";
            cin >> namaproduk;
            cout << "Harga : ";
            cin >> harga;
            list.push_middle(harga, namaproduk, posisi);
            break;
        }
        case 5:
        {
            cout << "Pilih Nomor Yang Untuk Menghapus Data : ";
            cin >> posisi;
            list.pop_middle(posisi);
            break;
        }
        case 6:
        {
            list.deleteAll();
            break;
        }
        case 7:
        {
            list.display();
            system ("pause");
            break;
        }
        case 8:
        {
           return 0;
        }
        default:
        {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    }
    return 0;
}
```

Case:

1. Tambahkan produk Azarine dengan harga 65000 diantara
Somethinc dan Skintific

2. Hapus produk wardah

3. Update produk Hanasui menjadi Cleora dengan harga 55.000

4. Tampilkan menu seperti dibawah ini


[Output Program]

## Kesimpulan
Dari praktikum diatas dapat disimpulkan beberapa tentang array :

1. Dengan menggunakan array, kita dapat mengakses elemen-elemen data secara langsung melalui indeksnya, tanpa perlu mencari atau mengiterasi melalui seluruh struktur data.

2. Array memungkinkan alokasi memori yang terstruktur dan efisien. Hal ini memungkinkan untuk mengatur data dengan baik dalam memori komputer, memungkinkan akses cepat dan manipulasi data.

3. Array memiliki ukuran yang tetap setelah dideklarasikan. Keuntungannya adalah kita tahu ukuran maksimum dari awal, yang memudahkan alokasi memori. Namun, bisa menjadi kerugian jika kita tidak tahu ukuran pasti yang diperlukan atau jika kita memerlukan fleksibilitas dalam penambahan atau pengurangan elemen.

4. Dengan menggunakan indeks, program dapat dengan mudah mengakses elemen-elemen dalam array. Hal ini memudahkan dalam manipulasi data, seperti penambahan, pengurangan, atau pengurutan. 

## Referensi
[1] MODUL 2 - ARRAY
