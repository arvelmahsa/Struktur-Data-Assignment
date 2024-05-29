//Arvel Mahsa
//2311102188
//soal nomor 1
/*#include <iostream>
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
}*/
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
