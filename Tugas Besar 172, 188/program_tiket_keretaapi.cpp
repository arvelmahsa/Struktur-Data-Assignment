// TUGAS BESAR STRUKTUR DATA
// Member Name : Arvel Mahsa, Luthfi Adi
// Program Pemesanan Kereta Cepat
#include <iostream>
using namespace std;
// Linked List Single Non Cirular
string harga;
string variabel_tempatduduk;
struct Node
{
    string nama_penumpang;
    string NIM_penumpang;
    string stasiun_awal;
    string stasiun_akhir;
    string waktu_perjalanan;
    string kelas;
    string harga;
    string tempat_duduk;
    int nomor_sit;
    Node *next;
};
Node *head;
Node *tail;
void init()
{
    head == NULL;
    tail == NULL;
}
bool isEmptyLL()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// fungsi untuk memesan tiket
void pesan_tiket(string nama_penumpang, string NIM_penumpang, string stasiun_awal, string stasiun_akhir, string waktu_perjalanan,
                 string kelas, string harga, string tempat_duduk, int nomor_sit)
{
    Node *baru = new Node;
    baru->nama_penumpang = nama_penumpang;
    baru->NIM_penumpang = NIM_penumpang;
    baru->stasiun_awal = stasiun_awal;
    baru->stasiun_akhir = stasiun_akhir;
    baru->waktu_perjalanan = waktu_perjalanan;
    baru->kelas = kelas;
    baru->harga = harga;
    baru->tempat_duduk = tempat_duduk;
    baru->nomor_sit = nomor_sit;
    baru->next = NULL;
    if (isEmptyLL() == true)
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
// hitung list
int hitung_list()
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

// hapus pesanan
void hapus_tengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;
    if (posisi < 1 || posisi > hitung_list())
    {
        cout << "Posisi Diluar Jangkauan !" << endl;
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
        bantu2 = bantu->next;
        delete hapus;
    }
}
// fungsi melihat pesanan
void lihat_pesanan()
{
    Node *bantu;
    bantu = head;
    if (isEmptyLL() == false)
    {
        while (bantu != NULL)
        {
            cout << endl;
            cout << "============ PT KERETA CEPAT WHOOOZZZZ ============" << endl;
            cout << "Nama Penumpang    : " << bantu->nama_penumpang << endl;
            cout << "NIM Penumpang     : " << bantu->NIM_penumpang << endl;
            cout << "Stasiun Awal      : " << bantu->stasiun_awal << endl;
            cout << "Stasiun Akhir     : " << bantu->stasiun_akhir << endl;
            cout << "Waktu Perjalanan  : " << bantu->waktu_perjalanan << endl;
            cout << "Sub Class         : " << bantu->kelas << endl;
            cout << "Harga             : " << bantu->harga << endl;
            cout << "Sit               : " << bantu->tempat_duduk << bantu->nomor_sit << endl;
            cout << endl;
            bantu = bantu->next;
        }
        cout << endl;
        cout << endl;
    }
    else
    {
        cout << "List masih kosong " << endl;
    }
}
// QUEUE
const int maksimalQueue_A = 9; // Maksimal antrian
const int maksimalQueue_B = 9; // Maksimal antrian
int front = 0;               // Penanda antrian
int back = 0;                // Penanda
string queueTeller_A[9];       // Fungsi pengecekan
string queueTeller_B[9];       // Fungsi pengecekan

bool isFull_A()
{ // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue_A)
    {
        return true; // =1
    }
    else
    {
        return false;
    }
}

bool isFull_B()
{ // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue_B)
    {
        return true; // =1
    }
    else
    {
        return false;
    }
}

bool isEmpty()
{ // Antriannya kosong atau tidak
    if (back == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueueAntrian_A(string variabel_tempatduduk, int posisi_antrian_A)
{ // Fungsi menambahkan antrian
    if (isFull_A())
    {
        cout << "Antrian penuh" << endl;
    }
    else
    {
        if (isEmpty())
        { // Kondisi ketika queue kosong
            queueTeller_A[posisi_antrian_A- 1] = variabel_tempatduduk;
        }
        else
        { // Antrianya ada isi
            cout << "Ada Isi" << endl;
            queueTeller_A[back] = variabel_tempatduduk;
            back++;
        }
    }
}

void enqueueAntrian_B(string variabel_tempatduduk, int posisi_antrian_B)
{ // Fungsi menambahkan antrian
    if (isFull_B())
    {
        cout << "Antrian penuh" << endl;
    }
    else
    {
        if (isEmpty())
        { // Kondisi ketika queue kosong
            queueTeller_B[posisi_antrian_B - 1] = variabel_tempatduduk;
        }
        else
        { // Antrianya ada isi
            cout << "Ada isinya " << endl;
            queueTeller_B[back] = variabel_tempatduduk;
            back++;

        }
    }
}

int countQueue(int posisi_antrian_A, int posisi_antrian_B)
{ // Fungsi menghitung banyak antrian

    return back;
}

void viewQueue_KursiA()
{ // Fungsi melihat antrian
    for (int i = 0; i < maksimalQueue_A; i++)
    {
        if (queueTeller_A[i] != "")
        {
            cout << i + 1 << ". " << "<isi>" << endl;
        }
        else
        {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

void viewQueue_KursiB()
{ // Fungsi melihat antrian
    for (int i = 0; i < maksimalQueue_B; i++)
    {
        if (queueTeller_B[i] != "")
        {
            cout << i + 1 << ". " << "<isi>" << endl;
        }
        else
        {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main()
{
    int number;
    int posisi;
    int posisi_A, posisi_B;
    int posisihapus;
    int nomor_sit;
    int nomor_kelas;
    int nomor_waktu;
    string lihat_kursi;
    string pilih_kursi;
    string nama_penumpang;
    string stasiun_awal;
    string stasiun_akhir;
    string waktu_perjalanan;
    string kelas;
    string tempat_duduk;
    string NIM_penumpang;
    init();
    while (true)
    {
        system("cls");
        cout << "=============================================\n";
        cout << "==== SELAMAT DATANG DI STASIUN TEGAL LUAR====\n";
        cout << "======== PEMESANAN TIKET KERETA CEPAT =======\n";
        cout << "============ JAKARTA - BANDUNG ==============\n";
        cout << "=============================================\n\n"
             << endl;
        cout << " 1. Pesan Tiket\n ";
        cout << "2. Lihat Pesanan\n ";
        cout << "3. Lihat Seat Yang Masih Tersedia\n ";
        cout << "4. Batalkan Pesanan\n"
             << endl;
        cout << "Pilih Nomor Untuk Melanjutkan : ";
        cin >> number;
        cout << endl;
        switch (number)
        {
        case 1:
            cout << "Nama Penumpang : ";
            cin >> nama_penumpang;
            cout << "NIM Penumpanng : ";
            cin >> NIM_penumpang;
            cout << "-----------------------------------------------\n";
            cout << "|             TUJUAN KERETA API               |\n";
            cout << "-----------------------------------------------\n";
            cout << "|            TegalLuar -> Halim               |\n";
            cout << "|             Halim ->TegalLuar               |\n";
            cout << "-----------------------------------------------\n"
                 << endl;
            cout << "Stasiun Awal  : ";
            cin >> stasiun_awal;
            cout << "Stasiun Akhir : ";
            cin >> stasiun_akhir;
            if (stasiun_awal == "TegalLuar" || stasiun_akhir == "Halim")
            {
                // UNTUK MEMILIH WAKTU TEMPUH
                cout << "---------------------------\n";
                cout << "| NO |    WAKTU TEMPUH    |\n";
                cout << "---------------------------\n";
                cout << "| 1. | 09.10   -    09.57 |\n";
                cout << "| 2. | 13.30   -    14.17 |\n";
                cout << "| 3. | 16.10   -    16.57 |\n";
                cout << "| 4. | 19.15   -    20.02 |\n";
                cout << "---------------------------\n";
                cout << endl;
                // tulis sesuai yg tertera jangan dispasi
                cout << "(Ketikan Waktu)Waktu Perjalanan : ";
                cin >> nomor_waktu;
                if (nomor_waktu == 1)
                {
                    waktu_perjalanan = "09.10 - 09.57";
                }
                else if (nomor_waktu == 2)
                {
                    waktu_perjalanan = "13.30 - 14.17";
                }
                else if (nomor_waktu == 3)
                {
                    waktu_perjalanan = "16.10 - 16.57";
                }
                else if (nomor_waktu == 4)
                {
                    waktu_perjalanan = " 19.15 - 20.02";
                }
                else
                {
                    cout << "Pilihan Tidak Ada!" << endl;
                    return 0;
                }

                // UNTUK MEMILIH KELAS
                cout << endl;
                cout << "------------------------------------\n";
                cout << "|NO |            SUB CLASS         |\n";
                cout << "------------------------------------\n";
                cout << "| 1.| FIRST CLASS     | Rp 600.000 |\n";
                cout << "| 2.| BISNIS          | Rp 450.000 |\n";
                cout << "| 3.| EKONOMI PREMIUM | Rp 200.000 |\n";
                cout << "| 4.| EKONOMI         | Rp 175.000 |\n";
                cout << "------------------------------------\n";
                // huruf kecil semua
                cout << "(Ketikan Nomor) Pilih Kelas : ";
                cin >> nomor_kelas;
                cout << endl;
                cout << endl;
                if (nomor_kelas == 1)
                {
                    kelas = "FIRST CLASS";
                    harga = "Rp 600.000";
                }
                else if (nomor_kelas == 2)
                {
                    kelas = "BISNIS";
                    harga = "Rp 450.000";
                }
                else if (nomor_kelas == 3)
                {
                    kelas = "EKONOMI PREMIUM";
                    harga = "Rp 200.000";
                }
                else if (nomor_kelas == 4)
                {
                    kelas = "EKONOMI";
                    harga = "Rp 175.000";
                }
                else
                {
                    cout << "Pilihan Tidak Ada !" << endl;
                    return 0;
                }

                // UNTUK MEMILIH KURSI
                cout << "Mau Tempat Duduk A/B = ";
                cin >> pilih_kursi;
                if (pilih_kursi == "a")
                {
                    variabel_tempatduduk = "A";
                    viewQueue_KursiA();
                    cout << endl;
                    cout << "Pilih Posisi Tempat Duduk : ";
                    cin >> posisi_A;
                    cout << endl;
                    enqueueAntrian_A(variabel_tempatduduk, posisi_A);
                    tempat_duduk = variabel_tempatduduk;
                    nomor_sit = posisi_A;
                }
                else if (pilih_kursi == "b")
                {
                    variabel_tempatduduk = "B";
                    viewQueue_KursiB();
                    cout << endl;
                    cout << "Pilih Posisi Tempat Duduk : ";
                    cin >> posisi_B;
                    cout << endl;
                    enqueueAntrian_B(variabel_tempatduduk, posisi_B);
                    tempat_duduk = variabel_tempatduduk;
                    nomor_sit = posisi_B;
                }
                cout << "Pesanan Berhasil Dibuat" << endl;
                pesan_tiket(nama_penumpang, NIM_penumpang, stasiun_awal, stasiun_akhir,
                            waktu_perjalanan, kelas, harga, tempat_duduk, nomor_sit);
            }
            system("pause");
            break;

        case 2:
            lihat_pesanan();
            system("pause");
            break;

        case 3:
            cout << " Kursi A | Kursi B = ";
            cin >> lihat_kursi;
            if (lihat_kursi == "a")
            {
                viewQueue_KursiA();
            }
            else if (lihat_kursi == "b")
            {
                viewQueue_KursiB();
            }
            system("pause");
            break;

        case 4:
            cout << "Pesanan Nomor Berapa Yang Ingin Dihapus : ";
            cin >> posisihapus;
            hapus_tengah(posisihapus);
        }
    }
}