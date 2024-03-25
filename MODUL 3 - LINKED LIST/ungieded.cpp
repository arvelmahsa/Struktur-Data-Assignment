// NOMOR 1
/*#include <iostream>
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
}*/
// nomor 2
/*#include <iostream>
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
}*/
