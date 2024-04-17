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
