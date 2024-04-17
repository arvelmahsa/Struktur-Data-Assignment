# <h1 align="center">Laporan Praktikum Modul Hash Table </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

# Dasar Teori
## Pengertian Fungsi Hash
Secara umum fungsi hash (H) adalah fungsi untuk mengkonversikan himpunan kunci rekaman (key) menjadi himpunan alaman pengingat (posisi subskrib dalam larik / L)
dan bisa dituliskan dengan menggunakan notasi sebagai berikut : 

H : K → L

Dua aspek penting yang perlu dipertimbangkan dalam pemilihan fungsi hash adalah sebagai berikut. 
1. Fungsi H harus mudah dan cepat dicari atau dihitung.
2. Fungsi H sebisa mungkin mendistribusikan posisi yang dimaksud secara uniform
sepanjang himpunan L, sehingga banyaknya tabrakan yang mungkin terjadi bisa
diminimalkan. 

Secara alamiah, tidak ada garansi yang memungkinkan bahwa aspek
kedua bisa dipenuhi tanpa terlebih dahulu mengetahui kunci-kunci yang ada.

## Fungsi Utama Hash Table
Fungsi utama dari Hash Table (Tabel Hash) adalah untuk menyediakan struktur data yang memungkinkan pencarian, penyisipan, dan penghapusan data dengan efisien. Berikut adalah beberapa fungsi utama dari Hash Table:

1. Pencarian (Search)
Hash Table memungkinkan pencarian data berdasarkan kunci (key) dengan cepat. Saat kita ingin mencari nilai berdasarkan kunci, fungsi hash akan mengonversi kunci menjadi indeks, dan nilai yang sesuai dapat diakses langsung dari indeks tersebut, menghasilkan waktu akses yang konstan (O(1)).

2. Penyisipan (Insertion)
Hash Table memungkinkan penambahan data baru dengan kunci dan nilainya. Saat kita ingin menyisipkan data baru, fungsi hash akan mengonversi kunci menjadi indeks, dan nilai tersebut akan disimpan pada indeks yang sesuai. Proses ini dapat dilakukan dengan waktu yang konstan (O(1)) pada kebanyakan kasus, membuatnya sangat efisien.

3. Penghapusan (Deletion)
Hash Table memungkinkan penghapusan data berdasarkan kunci. Saat kita ingin menghapus data, hash table akan menggunakan fungsi hash untuk menemukan indeks data yang sesuai dengan kunci dan menghapusnya dari tabel. Seperti pencarian dan penyisipan, operasi penghapusan juga berjalan dengan waktu yang konstan (O(1)) dalam kebanyakan kasus.

4. Asosiasi Kunci-Nilai (Key-Value Association)
Hash Table menyimpan data dalam bentuk pasangan kunci-nilai (key-value). Ini memungkinkan kita untuk mengaitkan kunci dengan nilai tertentu sehingga kita dapat dengan mudah mengakses nilai tersebut ketika diberikan kunci.

5. Kecepatan Akses
Salah satu keunggulan utama dari Hash Table adalah kecepatan aksesnya. Dengan menggunakan fungsi hash, proses mencari dan mengakses data menjadi sangat cepat karena kita dapat langsung menuju lokasi data tanpa perlu mencari secara berurutan.


# Guided 
## Guided 1

```C++
//Arvel-23111102188
// IF-11-E
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
// Fungsi hash sederhana
int hash_func (int key){
    return key % MAX_SIZE;
}

//Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value),
    next (nullptr) {}
};

// Class hash table
class HashTable {
    private :
    Node** table;
    public :
    HashTable(){
        table = new Node*[MAX_SIZE]();
    }
    ~HashTable(){
        for (int i = 0; i < MAX_SIZE; i++){
            Node* current = table[i];
            while (current != nullptr){
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    //insertion
    void insert(int key, int value){
        int index = hash_func(key);
        Node*current = table[index];
        while (current != nullptr){
            if (current->key == key){
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node (key, value);
        node -> next = table[index];
        table[index] = node;
    }
    // Searching
    int get(int key){
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr){
            if (current -> key == key){
            return current -> value;
            }
            current = current -> next;
        }
        return -1;
    }

    // Deletion
    void remove(int key){
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr){
            if (current->key == key){
                if (prev == nullptr){
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
             delete current;
             return;
            }
            prev = current;
            current = current -> next;
        }
    }
// traversal
void traverse(){
for (int i = 0; i < MAX_SIZE; i++){
    Node* current = table[i];
    while (current != nullptr){
        cout << current->key << ": "<< current->value << endl;
        current = current->next;
      }
    }
  }
};
int main (){
    HashTable ht;
    // Insertion
    ht.insert(1,10);
    ht.insert(2,20);
    ht.insert(3,30);

    // Seaarching
    cout << "Get key 1 : " << ht.get(1) << endl;
    cout << "Get key 4 : " << ht.get(4) << endl;

    // Deletion
    ht.remove(4);

    // Traversal
    ht. traverse();

    return 0;
}
```
## Output Guided 1
![Screenshot (220)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/86ef0ed2-5608-42ae-a413-17f7559ced60)

## Guided 2
```C++
// Arvel Mahsa
// 2311102188
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;
class HashNode{
    public:
    string name;
    string phone_number;
    
    HashNode(string name, string phone_number){
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap{
    private:
    vector <HashNode*> table[TABLE_SIZE];
    public:
    int hashFunc(string key){
        int hash_val = 0;
        for (char c : key){
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }
    void insert(string name, string phone_number){
        int hash_val = hashFunc(name);
        for (auto node : table [hash_val]){
            if (node->name==name){
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val]. push_back (new HashNode (name, phone_number));
    }
    void remove(string name){
        int hash_val = hashFunc(name);
        for (auto it = table[hash_val]. begin();it != table[hash_val].end(); it++){
            if ((*it)->name == name){
                table[hash_val].erase(it);
                return;
            }
        }
    }
    string searchByName(string name){
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]){
            if(node->name == name){
                return node->phone_number;
            }
        }
        return "";
    }

    void print(){
        for (int i = 0; i < TABLE_SIZE; i++){
            cout << i << ": ";
            for (auto pair : table[i]){
                if(pair != nullptr){
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main (){
    HashMap employee_map;

    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomor Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Nomor Hp Pastah : " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove ("Mistah");

    cout << "Nomor Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;

    employee_map.print();
    return 0;

}
```
## Output Guided 2
![Screenshot (221)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/3acc3afe-eb66-4a66-937b-63a3e8e75f51)

# Unguided 
1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa
   memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru,
   menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan
   nilai. Dengan ketentuan :
   
   a. Setiap mahasiswa memiliki NIM dan nilai.
   b. Program memiliki tampilan pilihan menu berisi poin C.
   c. Implementasikan fungsi untuk menambahkan data baru, menghapus data,
      mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai
      (80 – 90).

## [Source Code]
```C++
// Arvel Mahsa Athallah Firdaus
// 2311102188
// IF-11-E
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

int nilai_mhs;
string NIM_mhs;
class HashNode
{
public:
    int nilai_mhs;
    string NIM_mhs;

    HashNode(int nilai_mhs, string NIM_mhs)
    {
        this->nilai_mhs = nilai_mhs;
        this->NIM_mhs = NIM_mhs;
    }
};

class HashMap
{
private:
    vector<HashNode *> table[TABLE_SIZE];

public:
    int hashFunc(string key)
    {
        int hash_val = 0;
        for (char c : key)
        {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    //Fungsi Menambah Data
    void insert(string NIM_mhs, int nilai_mhs)
    {
        int hash_val = hashFunc(NIM_mhs);
        for (auto node : table[hash_val])
        {
            if (node->nilai_mhs == nilai_mhs)
            {
                node->NIM_mhs = NIM_mhs;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(nilai_mhs, NIM_mhs));
    }

    //Fungsi Menghapus Data
    void remove(string NIM_mhs)
    {
        int hash_val = hashFunc(NIM_mhs);
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++)
        {
            if ((*it)->NIM_mhs == NIM_mhs)
            {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    //Fungsi Mencari Data Berdasarkan NIM
    void searchByNIM(string NIM_mhs)
    {
        int hash_val = hashFunc(NIM_mhs);
        for (auto node : table[hash_val])
        {
            if (node->NIM_mhs == NIM_mhs)
            {
                cout << "NIM   : " << node->NIM_mhs << endl;
                cout << "Nilai : " << node->nilai_mhs << endl;
            }
        }
    }

    //Fungsi Mencari Data Berdasarkan Nilai
    void searchByNilai(int batas_siji, int batas_loro)
    {
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            cout << i << ": ";
            for (auto pair : table[i])
            {
                if (pair != nullptr)
                {
                    if (pair->nilai_mhs >= batas_siji && pair->nilai_mhs <= batas_loro)
                    {
                        cout << "NIM : " << pair->NIM_mhs << "  "  << "Nilai : " << pair->nilai_mhs;
                    }
                }
            }
            cout << endl;
        }
    }

   //Fungsi Menampilkan Data
    void print()
    {
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            cout << i << " ";
            for (auto pair : table[i])
            {
                if (pair != nullptr)
                {
                    cout << pair->NIM_mhs << " = " << pair->nilai_mhs;
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    int choose, nilai_mhs;
    int nilai_siji, nilai_loro;
    string NIM_mhs;
    HashMap CPMK;

    while (true)
    {
        system("cls");
        cout << "-----------------------------------------\n";
        cout << "|          MENU CPMK MAHASISWA          |\n";
        cout << "-----------------------------------------\n";
        cout << "| 1. Tambah Data                        |\n";
        cout << "| 2. Hapus Data                         |\n";
        cout << "| 3. Cari Data (Berdasarkan NIM)        |\n";
        cout << "| 4. Cari Data (Berdasarkan Nilai)      |\n";
        cout << "| 5. Tampilkan Data                     |\n";
        cout << "| 6. Exit                               |\n";
        cout << "-----------------------------------------\n\n";
        cout << "Choose Number : ";
        cin >> choose;
        cout << endl;
        switch (choose)
        {
        case 1:
            cout << "Inputkan NIM Mahasiswa   : ";
            cin >> NIM_mhs;
            cout << "Inputkan Nilai Mahasiswa : ";
            cin >> nilai_mhs;
            CPMK.insert(NIM_mhs, nilai_mhs);
            system("pause");
            break;

        case 2:
            cout << "Inputkan NIM Mahasiswa yang akan dihapus : ";
            cin >> NIM_mhs;
            CPMK.remove(NIM_mhs);
            cout << "Data Succesfully been removed ... \n";
            cout << endl;
            system("pause");
            break;

        case 3:
            cout << "Inputkan NIM Mahasiswa yang akan dicari : ";
            cin >> NIM_mhs;
            CPMK.searchByNIM(NIM_mhs);
            system("pause");
            break;

        case 4:
            cout << "Inputkan Nilai Pertama : ";
            cin >> nilai_siji;
            cout << "Inputkan Nilai Kedua   : ";
            cin >> nilai_loro;
            CPMK.searchByNilai(nilai_siji, nilai_loro);
            system("pause");
            break;

        case 5 : 
            CPMK.print();
            system("pause");
            break;

        case 6:
            cout << "S u k r o n . . .";
            return 0;

        default:
            cout << "Nomor e kurang memper !";
            break;
        }
    }
    
    return 0;
}
```
## [Output Program ]
Menambah Data Baru

![Tambah Data](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/62baf3db-0e6e-4131-8afd-af65fceca581)

Menghapus Data

![Remove Data](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/3298fd6a-42c5-46bd-9e21-53c4aaee2d49)

Mencari Data Berdasarkan NIM

![Cari Data berdasarkan NIM](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/706dde7b-f07a-4871-9048-45f6f36b270c)

Mencari Data Berdasarkan Nilai Rentang 80 - 90

![Cari Data Berdasarkan Nilai](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/ac293f96-af8d-4442-94a9-4cf5eb45ff33)

Program diatas merupakan implementasi dari Hash Table untuk menginputkan data Nilai dan NIM Mahasiswa.

## Kesimpulan
Keuntungan utama dari hash table dibandingkan struktur data lainnya adalah efisiensi dan kecepatan. Waktu yang dibutuhkan untuk mengakses sebuah elemen cukup cepat sehingga bisa lebih diandalkan. Jadi, Anda tidak perlu memakan waktu atau usaha besar untuk menyimpan dan mencari data yang diperlukan.

## Referensi
[1] Pengertian Fungsi Hash. 
https://yuliana.lecturer.pens.ac.id/Struktur%20Data%20C/Teori%20SD%20-%20pdf/Data%20Structure%20-%20Bab%2010.pdf
[2] Fungsi Utama Hash Table. 
https://dosenit.com/kuliah-it/hash-table
[3] Keuntungan Hash Table
https://algorit.ma/blog/hash-table-adalah-2022/
