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

## Unguided 
1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa
memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru,
menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan
nilai. Dengan ketentuan :

a. Setiap mahasiswa memiliki NIM dan nilai.

b. Program memiliki tampilan pilihan menu berisi poin C.

c. Implementasikan fungsi untuk menambahkan data baru, menghapus data,
mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai
(80 – 90).

[Source Code]
```C++




```
[Output Program ]




## Kesimpulan
Keuntungan utama dari hash table dibandingkan struktur data lainnya adalah efisiensi dan kecepatan. Waktu yang dibutuhkan untuk mengakses sebuah elemen cukup cepat sehingga bisa lebih diandalkan. Jadi, Anda tidak perlu memakan waktu atau usaha besar untuk menyimpan dan mencari data yang diperlukan.

## Referensi
[1] Pengertian Fungsi Hash. 
https://yuliana.lecturer.pens.ac.id/Struktur%20Data%20C/Teori%20SD%20-%20pdf/Data%20Structure%20-%20Bab%2010.pdf
[2] Fungsi Utama Hash Table. 
https://dosenit.com/kuliah-it/hash-table
[3] Keuntungan Hash Table
https://algorit.ma/blog/hash-table-adalah-2022/
