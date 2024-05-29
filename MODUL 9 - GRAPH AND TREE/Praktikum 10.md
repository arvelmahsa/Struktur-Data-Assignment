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

Program diatas merupakan penerapan dari graph untuk menginputkan bobot antara simpul 1 dengan simpul yang lainnya. Kemudian
di implementasikan dengan bentuk matrix.

## [Source Code 2]
```C++
//Soal Nomor 2
#include <iostream>
#include <iomanip>
using namespace std;
struct Node
{
    char data;
    Node *kiri, *kanan, *induk; // pointer
};

Node *root_of_tree;
class Tree
{
public:
    Tree()
    {
        root_of_tree = nullptr;
    }
    bool isEmpty()
    {
        return root_of_tree == nullptr;
    }
    Node *BuatNode(char data)
    {
        Node *baru = new Node;
        baru->data = data;
        baru->kiri = nullptr;
        baru->kanan = nullptr;
        baru->induk = nullptr;
        return baru;
    }
    void addTree(char data)
    {
        if (isEmpty())
        {
            root_of_tree = BuatNode(data);
            cout << "\nNode " << data << " Succesfully created to root_of_tree." << endl;
        }
        else
        {
            cout << "\nTree are created" << endl;
        }
    }

    Node *addleftTree(char data, Node *node)
    {
        if (isEmpty())
        {
            cout << "\nMake a tree first!" << endl;
            return nullptr;
        }
        else
        {
            if (node == nullptr)
            {
                cout << "Node not valid!" << endl;
                return nullptr;
            }
            if (node->kiri != nullptr)
            {
                cout << "\nNode " << node->data << " are available in left root!" << endl;
                return nullptr;
            }
            else
            {
                Node *baru = BuatNode(data);
                baru->induk = node;
                node->kiri = baru;
                cout << "\nNode " << data << " are succesfully added to left child " << node->data << endl;
                return baru;
            }
        }
    }

    Node *addrightTree(char data, Node *node)
    {
        if (isEmpty())
        {
            cout << "\nMake a tree first!" << endl;
            return nullptr;
        }
        else
        {
            if (node == nullptr)
            {
                cout << "Node not valid" << endl;
                return nullptr;
            }
            if (node->kanan != nullptr)
            {
                cout << "\nNode " << node->data << " are available in right child!"<< endl;
                return nullptr;
            }
            else
            {
                Node *baru = BuatNode(data);
                baru->induk = node;
                node->kanan = baru;
                cout << "\nNode " << data << " Successfully add to right child " << node->data << endl;
                return baru;
            }
        }
    }

    void updateTree(char data, Node *node)
    {
        if (isEmpty())
        {
            cout << "\nMake a tree first!" << endl;
        }
        else
        {
            if (!node)
                cout << "\nThe node you want to change is not available!!" << endl;
            else
            {
                char temp = node->data;
                node->data = data;
                cout << "\nNode " << temp << " succesfully change to " << data << endl;
            }
        }
    }

    void retrieveTree(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nMake a tree first!" << endl;
        }
        else
        {
            if (!node)
                cout << "\nNode is not found" << endl;
            else
            {
                cout << "\nData node : " << node->data << endl;
            }
        }
    }

    void find(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nMake a tree first!" << endl;
        }
        else
        {
            if (!node)
                cout << "\nNode is not found" << endl;
            else
            {
                cout << "\nData Node  : " << node->data << endl;
                cout << "Root of tree : " << root_of_tree->data << endl;

                if (!node->induk)
                {
                    cout << "Parent : (Not have a parent)" << endl;
                }
                else
                {
                    cout << "Parent : " << node->induk->data << endl;
                }

                if (node->induk != nullptr && node->induk->kiri != node && node->induk->kanan == node)
                {
                    cout << "Sibling : " << node->induk->kiri->data << endl;
                }
                else if (node->induk != nullptr && node->induk->kanan != node && node->induk->kiri == node)
                {
                    cout << "Sibling : " << node->induk->kanan->data << endl;
                }
                else
                {
                    cout << "Sibling : (Not have a sibling)" << endl;
                }

                if (!node->kiri)
                {
                    cout << "Child Kiri : (Not have left child)" << endl;
                }
                else
                {
                    cout << "Child Kiri : " << node->kiri->data << endl;
                }

                if (!node->kanan)
                {
                    cout << "Child Kanan : (Not have right child)" << endl;
                }
                else
                {
                    cout << "Child Kanan : " << node->kanan->data << endl;
                }
            }
        }
    }

    // Search (Traversal)
    void pre_order(Node *node)
    {
        if (isEmpty())
            cout << "\nMake a tree first!" << endl;
        else
        {
            if (node != nullptr)
            {
                cout << " " << node->data << ", ";
                pre_order(node->kiri);
                pre_order(node->kanan);
            }
        }
    }

    void in_order(Node *node)
    {
        if (isEmpty())
            cout << "\nMake a tree first!" << endl;
        else
        {
            if (node != nullptr)
            {
                in_order(node->kiri);
                cout << " " << node->data << ", ";
                in_order(node->kanan);
            }
        }
    }

    void post_order(Node *node)
    {
        if (isEmpty())
            cout << "\nMake a tree first!" << endl;
        else
        {
            if (node != nullptr)
            {
                post_order(node->kiri);
                post_order(node->kanan);
                cout << " " << node->data << ", ";
            }
        }
    }

    void deleteTree(Node *node)
    {
        if (isEmpty())
            cout << "\nMake a tree first!" << endl;
        else
        {
            if (node != nullptr)
            {
                if (node != root_of_tree)
                {
                    if (node->induk->kiri == node)
                        node->induk->kiri = nullptr;
                    else if (node->induk->kanan == node)
                        node->induk->kanan = nullptr;
                }

                deleteTree(node->kiri);
                deleteTree(node->kanan);

                if (node == root_of_tree)
                {
                    delete root_of_tree;
                    root_of_tree = nullptr;
                }
                else
                {
                    delete node;
                }
            }
        }
    }

    void deleteSubTree(Node *node)
    {
        if (isEmpty())
            cout << "\nMake a tree first!" << endl;
        else
        {
            deleteTree(node->kiri);
            deleteTree(node->kanan);
            cout << "\nNode subtree " << node->data << " Succesfully been removed."<< endl;
        }
    }

    void clear()
    {
        if (isEmpty())
            cout << "\nMake a tree first!!" << endl;
        else
        {
            deleteTree(root_of_tree);
            cout << "\nNode successfully been removed." << endl;
        }
    }

    int sizeTree(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nMake a tree first!!" << endl;
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
                return 1 + sizeTree(node->kiri) + sizeTree(node->kanan);
            }
        }
    }

    int heightTree(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nMake a tree first!" << endl;
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
                int heightKiri = heightTree(node->kiri);
                int heightKanan = heightTree(node->kanan);
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

    void characteristic()
    {
        int S = sizeTree(root_of_tree);
        int H = heightTree(root_of_tree);
        cout << "\nSize Tree : " << S << endl;
        cout << "Height Tree : " << H << endl;
        if (H != 0)
            cout << "Average Node of Tree : " << S / H << endl;
        else
            cout << "Average Node of Tree : 0" << endl;
    }

    Node *getRoot()
    {
        return root_of_tree;
    }

    Node *findNode(char data, Node *node)
    {
        if (node == nullptr)
            return nullptr;
        if (node->data == data)
            return node;
        Node *hasilkiri = findNode(data, node->kiri);
        if (hasilkiri != nullptr && hasilkiri->data == data)
            return hasilkiri;
        return findNode(data, node->kanan);
    }
};

void RootDisplay()
{
    cout << "\n M E N U" << endl;
    cout << "==================================" << endl;
    cout << "==================================" << endl;
    cout << "== 1.  Make Root Node           ==" << endl;
    cout << "== 2.  Add Left Child           ==" << endl;
    cout << "== 3.  Add Right Child          ==" << endl;
    cout << "== 4.  Change Node              ==" << endl;
    cout << "== 5.  Display Data Node        ==" << endl;
    cout << "== 6.  Find Node                ==" << endl;
    cout << "== 7.  Preorder Traversal       ==" << endl;
    cout << "== 8.  Inorder Traversal        ==" << endl;
    cout << "== 9.  Postorder Traversal      ==" << endl;
    cout << "== 10. Remove subtree           ==" << endl;
    cout << "== 11. Remove all tree          ==" << endl;
    cout << "== 12. Show tree characteristic ==" << endl;
    cout << "== 13. Exit                     ==" << endl;
    cout << "==================================" << endl;
    cout << "==================================" << endl;
    cout << "choose menu: ";
}

int main()
{
    Tree tree;
    int choose;
    char data, targetData;
    Node *currentNode = nullptr, *targetNode;
    do
    {
        system("cls");
        RootDisplay();
        cin >> choose;
        switch (choose)
        {
        case 1:
            if (tree.isEmpty())
            {
                cout << "Input Root Data : ";
                cin >> data;
                tree.addTree(data);
                currentNode = tree.getRoot();
                system("pause");
            }
            else
            {
                cout << "Tree are created!" << endl;
            }
            break;

        case 2:
            if (!tree.isEmpty())
            {
                cout << "Input tree to add the child   : ";
                cin >> targetData;
                cout << "Input data to left child      : ";
                cin >> data;
                targetNode = tree.findNode(targetData, currentNode);
                tree.addleftTree(data, targetNode);
                system("pause");
            }
            else
            {
                cout << "Tree ar not make!" << endl;
            }
            break;

        case 3:
            if (!tree.isEmpty())
            {
                cout << "Input tree to add the child   : ";
                cin >> targetData;
                cout << "Input data to right child     : ";
                cin >> data;
                targetNode = tree.findNode(targetData, currentNode);
                tree.addrightTree(data, targetNode);
                system("pause");
            }
            else
            {
                cout << "Tree are not make!" << endl;
            }
            break;

        case 4:
            if (!tree.isEmpty())
            {
                cout << "Input Node you want to change : ";
                cin >> targetData;
                cout << "Input new Node : ";
                cin >> data;
                targetNode = tree.findNode(targetData, currentNode);
                tree.updateTree(data, targetNode);
                system("pause");
                cout << "Successfully change" << endl;
            }
            else
            {
                cout << "Tree are not make!" << endl;
            }
            break;

        case 5:
            if (!tree.isEmpty())
            {
                cout << "Input tree to show : ";
                cin >> targetData;
                targetNode = tree.findNode(targetData, currentNode);
                tree.retrieveTree(targetNode);
                system("pause");
            }
            else
            {
                cout << "Tree are not make!" << endl;
            }
            break;

        case 6:
            if (!tree.isEmpty())
            {
                cout << "Input a tree you want to search : ";
                cin >> targetData;
                targetNode = tree.findNode(targetData, currentNode);
                tree.find(targetNode);
                system("pause");
            }
            else
            {
                cout << "Tree are not make!" << endl;
            }
            break;

        case 7:
            if (!tree.isEmpty())
            {
                cout << "Preorder traversal: ";
                tree.pre_order(tree.getRoot());
                cout << endl;
                system("pause");
            }
            else
            {
                cout << "Tree are not make!" << endl;
            }
            break;

        case 8:
            if (!tree.isEmpty())
            {
                cout << "Inorder traversal: ";
                tree.in_order(tree.getRoot());
                cout << endl;
                system("pause");
            }
            else
            {
                cout << "Tree are not make!" << endl;
            }
            break;

        case 9:
            if (!tree.isEmpty())
            {
                cout << "Postorder traversal: ";
                tree.post_order(tree.getRoot());
                cout << endl;
                system("pause");
            }
            else
            {
                cout << "Tree are not make!!" << endl;
            }
            break;

        case 10:
            if (!tree.isEmpty())
            {
                cout << "Input a tree you want to delete the sub tree : ";
                cin >> targetData;
                targetNode = tree.findNode(targetData, currentNode);
                tree.deleteSubTree(targetNode);
                system("pause");
            }
            else
            {
                cout << "Tree are not make!" << endl;
            }
            break;

        case 11:
            if (!tree.isEmpty())
            {
                tree.clear();
                system("pause");
            }
            else
            {
                cout << "Tree are not make!" << endl;
            }
            break;

        case 12:
            if (!tree.isEmpty())
            {
                tree.characteristic();
                system("pause");
            }
            else
            {
                cout << "Tree are not make!" << endl;
            }
            break;

        case 13:
            cout << "Thank You..." << endl;
            system("pause");
            break;

        default:
            cout << "Your choose not valid!" << endl;
        }
    } while (choose != 13);

    return 0;
}
```
## [Output Program 2]
### OUTPUT MENU
![Menu](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/2b57a362-b302-463d-8b72-0797db5af841)
### OUTPUT MENU 1
![1](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/36e0d48b-c307-48cb-aff4-7fb63bae1946)
### OUTPUT MENU 2
![2](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/a1db709a-92da-48d8-be19-b42b87c2d906)
### OUTPUT MENU 3
![3](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/407e11f2-4fde-490a-8071-30c2a9a9fc14)
### OUTPUT MENU 4
![4](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/aa095c8d-4445-46bf-b1e7-f678999b5e4e)
### OUTPUT MENU 5
![5](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/3bd3605e-0de8-47f6-a3d0-1e436127611c)
### OUTPUT MENU 6
![6](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/24ed38cc-5b7e-404d-9e8b-7c51955543f8)
### OUTPUT MENU 7
![7](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/32fc7c05-f00f-46ab-839b-d52d5b46e2c6)
### OUTPUT MENU 8
![8](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/bf7fac76-734e-499c-89a2-6471521fb752)
### OUTPUT MENU 9
![9](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/f728eb6c-c7bc-401c-98d6-2dc64b09e90e)
### OUTPUT MENU 10
![10](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/7587537e-cf8e-40b3-ae5d-6281f6d89397)
### OUTPUT MENU 11
![11](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/0f766d47-fb3c-4c15-b565-1f8afd1c2916)
### OUTPUT MENU 12
![12](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/785c0aa7-65f1-4e34-aa76-320e062e3ef7)
### OUTPUT MENU 13
![13](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/ff74f5cb-65f9-4ffd-90f4-4151e09e75d3)

Program diatas merupakan implementasi tree dengan beberapa fungsi yang di deklarasikan dengan menu. Setiap menu
bekerja sesuai dengan fungsi yang telah dibuat.

## Kesimpulan
Graph dan tree memiliki kemiripan dalam hal penggunaan node/simpul dan edge/sambungan, perbedaan utama mereka terletak pada siklus, konektivitas, arah, dan struktur hierarkis. Pemahaman yang baik berkaitan dengan karakteristik masing-masing struktur ini sangat penting untuk memilih struktur data yang tepat sesuai dengan kebutuhan.

## Referensi
[1] Pengertian Graph, Fungsi Graph, Jenis Graph
https://fikti.umsu.ac.id/graph-pengertian-fungsi-dan-jenisnya/

[2] Tree
[https://anakmales.com/cpp-selection-sort/](https://repository.dinus.ac.id/docs/ajar/Tree.pdf)

