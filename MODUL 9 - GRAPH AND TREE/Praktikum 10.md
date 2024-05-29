# <h1 align="center">Laporan Praktikum Modul Graph Dan Tree </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

# Dasar Teori
## Graph
### Pengertian Graph
Graph adalah himpunan dari simpul atau node yang terhubung melalui sambungan atau edge. 
Setiap Node mewakili entitas atau objek, sedangkan sambungan menggambarkan hubungan atau 
relasi antara entitas-entitas tersebut.

### Fungsi Graph
1. Pencarian Jalur dan Rute
   
Memungkinkan kita untuk mencari jalur atau rute terpendek antara
dua simpul tertentu. Contohnya adalah ketika menggunakan aplikasi peta untuk 
menemukan rute tercepat dari titik A ke titik B. Jadi semakin jarak antar simpul
semakin cepat rute yang akan ditempuh.

2. Pemodelan Jaringan

Untuk merepresentasikan jaringan-jaringan kompleks, seperti jaringan sosial di medsos.
Dengan menggunakan struktur data ini, kita dapat menganalisis hubungan antara
individu atau entitas yang ada dalam jaringan tersebut.

3. Optimisasi

Dalam beberapa masalah, dapat digunakan untuk mencari solusi optimal, seperti dalam 
algoritma Travelling Salesman yang mencari rute terpendek yang mengunjungi semua titik yang ada.

### Jenis-jenis Graph
Graph dapat diklasifikasikan menjadi beberapa jenis berdasarkan sifat dan karakteristiknya:

1. Directed Graph : Pada jenis ini, sambungan antara simpul memiliki arah tertentu.
   Contohnya, jika ada sambungan dari simpul A ke simpul B, tidak selalu ada sambungan dari simpul B ke simpul A.

2. Undirected Graph: Jenis ini memiliki sambungan antara simpul tidak memiliki arah. Sambungan
   antara A dan B dianggap sama dengan sambungan antara B dan A.

3. Weighted Graph: Memiliki bobot pada setiap sambungan, yang menunjukkan nilai numerik dari hubungan antara simpul-simpul tersebut.

4. Unweighted Graph: Pada jenis ini, semua sambungan memiliki nilai yang sama tanpa adanya bobot.

## Tree
 Struktur data Tree adalah kumpulan node yang saling terhubung dengan struktur data hirarki (one-to-many)

### Struktur pohon adalah struktur yang penting dalam informatika, yang memungkinkan untuk :

– mengorganisasi informasi berdasarkan struktur logika

– memungkinkan cara akses yang khusus terhadap suatu
elemen

### Contoh persoalan yang tepat untuk direpresentasi
sebagai pohon:

– pohon keputusan

– pohon keluarga dan klasifikasi dalam botani

– pohon sintaks dan pohon ekspresi aritmatika

### Tree adalah struktur data yang terdiri dari entitas yang disebut node yang terkait melaui sebuah edge

- Node paling atas disebut dengan root 
Node pd posisi yg lebih tinggi disebut parent dan
yang lebih rendah disebut children

- Node dengan posisi yang yang sama disebut
sibling

- Node dengan posisi paling rendah disebut leaf
  
- Node pd posisi yg lebih tinggi disebut parent dan
yang lebih rendah disebut children

- Node dengan posisi yang yang sama disebut
sibling

- Node dengan posisi paling rendah disebut leaf

# Guided
## Guided 1
```C++
#include <iostream>
#include <iomanip>
using namespace std;
string simpul[7] = {
    "Ciamis",
    "Bandung",
    "Bekasi",
    "tasikmalaya",
    "Cianjur",
    "Purwokerto",
    "Yogyakarta"};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0}};

void tampilGraph()
{
    for (int baris = 0; baris < 7; baris++)
    {
        cout << " " << setiosflags(ios::left) << setw(15)
             << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++)
        {
            if (busur[baris][kolom] != 0)
            {
                cout << " " << simpul[kolom] << "(" << busur[baris][kolom]
                     << ")";
            }
        }
        cout << endl;
    }
}

int main()
{
    tampilGraph();
    return 0;
}
```
## Output Guided 1
![Screenshot (260)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/26537ab3-facb-467b-bd0d-15e6ce8173ec)

## Guided 2
```C++
#include <iostream>
using namespace std;
// PROGRAM BINARY TREE
// Deklarasi Pohon
struct Pohon
{
    char data;
    Pohon *left, *right, *parent; // pointer
};
// pointer global
Pohon *root;
// Inisialisasi
void init()
{
    root = NULL;
}
bool isEmpty()
{
    return root == NULL;
}
Pohon *newPohon(char data)
{
    Pohon *node = new Pohon();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->parent = NULL;
    return node;
}
void buatNode(char data)
{
    if (isEmpty())
    {
        root = newPohon(data);
        cout << "\nNode " << data << " berhasil dibuat menjadi root." << endl;
    }
    else
    {
        cout << "\nPohon sudah dibuat" << endl;
    }
}
Pohon *insertLeft(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->left != NULL)
        {
            cout << "\nNode " << node->data << " sudah ada child kiri!"
                 << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = newPohon(data);
            baru->parent = node;
            node->left = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
                return baru;
        }
    }
}
Pohon *insertRight(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->right != NULL)
        {
            cout << "\nNode " << node->data << " sudah ada child kanan!"
                 << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = newPohon(data);
            baru->parent = node;
            node->right = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
                return baru;
        }
    }
}
void update(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\nNode yang ingin diganti tidak ada!!" << endl;
        else
        {
            char temp = node->data;
            node->data = data;
            cout << "\nNode " << temp << " berhasil diubah menjadi " << data << endl;
        }
    }
}
void retrieve(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        else
        {
            cout << "\nData node : " << node->data << endl;
        }
    }
}
void find(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        else
        {
            cout << "\nData Node : " << node->data << endl;
            cout << "Root : " << root->data << endl;
            if (!node->parent)
                cout << "Parent : (tidak punya parent)" << endl;
            else
                cout << "Parent : " << node->parent->data << endl;
            if (node->parent != NULL && node->parent->left != node &&
                node->parent->right == node)
                cout << "Sibling : " << node->parent->left->data << endl;
            else if (node->parent != NULL && node->parent->right != node && node->parent->left == node)
                cout << "Sibling : " << node->parent->right->data << endl;
            else
                cout << "Sibling : (tidak punya sibling)" << endl;
            if (!node->left)
                cout << "Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << "Child Kiri : " << node->left->data << endl;
            if (!node->right)
                cout << "Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << "Child Kanan : " << node->right->data << endl;
        }
    }
}
// Penelusuran (Traversal)
// preOrder
void preOrder(Pohon *node)
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            cout << " " << node->data << ", ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}
// inOrder
void inOrder(Pohon *node)
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            inOrder(node->left);
            cout << " " << node->data << ", ";
            inOrder(node->right);
        }
    }
}
// postOrder
void postOrder(Pohon *node)
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            postOrder(node->left);
            postOrder(node->right);
            cout << " " << node->data << ", ";
        }
    }
}
// Hapus Node Tree
void deleteTree(Pohon *node)
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            if (node != root)
            {
                if (node->parent->left == node)
                    node->parent->left = NULL;
                else if (node->parent->right == node)
                    node->parent->right = NULL;
            }
            deleteTree(node->left);
            deleteTree(node->right);
            if (node == root)
            {
                delete root;
                root = NULL;
            }
            else
            {
                delete node;
            }
        }
    }
}
// Hapus SubTree
void deleteSub(Pohon *node)
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        deleteTree(node->left);
        deleteTree(node->right);
        cout << "\nNode subtree " << node->data << " berhasil dihapus."
             << endl;
    }
}
// Hapus Tree
void clear()
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!!" << endl;
    else
    {
        deleteTree(root);
        cout << "\nPohon berhasil dihapus." << endl;
    }
}
// Cek Size Tree
int size(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            return 1 + size(node->left) + size(node->right);
        }
    }
}
// Cek Height Level Tree
int height(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            int heightKiri = height(node->left);
            int heightKanan = height(node->right);
            if (heightKiri >= heightKanan)
            {
                return heightKiri + 1;
            }
            else
            {
                return heightKanan + 1;
            }
        }
    }
}
// Karakteristik Tree
void characteristic()
{
    int s = size(root);
    int h = height(root);
    cout << "\nSize Tree : " << s << endl;
    cout << "Height Tree : " << h << endl;
    if (h != 0)
        cout << "Average Node of Tree : " << s / h << endl;
    else
        cout << "Average Node of Tree : 0" << endl;
}
int main()
{
    init();
    buatNode('A');
    Pohon *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI,
        *nodeJ;
    nodeB = insertLeft('B', root);
    nodeC = insertRight('C', root);
    nodeD = insertLeft('D', nodeB);
    nodeE = insertRight('E', nodeB);
    nodeF = insertLeft('F', nodeC);
    nodeG = insertLeft('G', nodeE);
    nodeH = insertRight('H', nodeE);
    nodeI = insertLeft('I', nodeG);
    nodeJ = insertRight('J', nodeG);
    update('Z', nodeC);
    update('C', nodeC);
    retrieve(nodeC);
    find(nodeC);
    cout << "\nPreOrder :" << endl;
    preOrder(root);
    cout << "\n"
         << endl;
    cout << "InOrder :" << endl;
    inOrder(root);
    cout << "\n"
         << endl;
    cout << "PostOrder :" << endl;
    postOrder(root);
    cout << "\n"
         << endl;
    characteristic();
    deleteSub(nodeE);
    cout << "\nPreOrder :" << endl;
    preOrder(root);
    cout << "\n"
         << endl;
    characteristic();
}

```
## Output Guided 2
![Screenshot (261)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/88313685-e290-4776-8be7-ae9b17806a36)

![Screenshot (262)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/a4ee4b66-5598-4693-b5d1-dfae49f58b22)

![Screenshot (263)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/0e054fec-2b90-4da9-ad40-0d191eede061)

# Unguided 
1. Buatlah program graph dengan menggunakan inputan user untuk menghitung 
jarak dari sebuah kota ke kota lainnya.
![Screenshot (265)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/154b15cd-3449-46ab-87ba-e83b04eb95d8)

2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree 
dari user dan berikan fungsi tambahan untuk menampilkan node child dan 
descendant dari node yang diinput kan!

## [Source Code 1]
```C++
#include <iostream>
#include <iomanip>
using namespace std;

int jumlahsimpul;
int bobotsimpul;
string namasimpul;

void isiSimpul(string simpul[])
{
    cout << "Masukkan nama simpul" << endl;
    for (int i = 0; i < jumlahsimpul; i++)
    {
        cout << "Simpul " << i + 1 << " : ";
        cin >> namasimpul;
        simpul[i] = namasimpul;
    }
    cout << endl;
}

int main()
{
    cout << "Masukkan jumlah simpul : ";
    cin >> jumlahsimpul;

    string simpul_name[jumlahsimpul];
    int matriks[jumlahsimpul][jumlahsimpul];
    isiSimpul(simpul_name);

    cout << "Masukkan bobot antar simpul" << endl;
    for (int a = 0; a < jumlahsimpul; a++)
    {
        for (int b = 0; b < jumlahsimpul; b++)
        {
            cout << simpul_name[a] << " ==> " << simpul_name[b] << " = ";
            cin >> bobotsimpul;
            matriks[a][b] = bobotsimpul;
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matriks bobot antar simpul" << endl;
    cout << setw(12) << "";
    for (int a = 0; a < jumlahsimpul; a++)
    {
        cout << setw(12) << simpul_name[a];
    }
    cout << endl;

    for (int a = 0; a < jumlahsimpul; a++)
    {
        cout << setw(12) << simpul_name[a];
        for (int b = 0; b < jumlahsimpul; b++)
        {
            cout << setw(12) << matriks[a][b];
        }
        cout << endl;
    }
}

```
## [Output Program 1 ]

![output 1](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/596658a6-6517-4ae9-b9ff-2a4a5fbbbc5a)

## [Source Code 2]
```C++



```
## [Output Program 2]


## Kesimpulan


## Referensi
[1] Pengertian Graph, Fungsi Graph, Jenis Graph
https://fikti.umsu.ac.id/graph-pengertian-fungsi-dan-jenisnya/

[2] Tree
[https://anakmales.com/cpp-selection-sort/](https://repository.dinus.ac.id/docs/ajar/Tree.pdf)

