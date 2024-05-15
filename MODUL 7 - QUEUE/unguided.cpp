// no 1
// Arvel Mahsa
//2311102188
// #include <iostream>
// using namespace std;
// const int maksimalQueue = 5; // Maksimal antrian
// int front = 0;               // Penanda antrian
// int back = 0;                // Penanda
// struct Node
// {
//     string data;
//     Node *next;
// }; // deklarasi node
// Node *head, *tail, *newNode, *temp, *del, *current, *count;
// // inisalisasi node linked listt
// void init()
// {
//     head = NULL;
//     tail = NULL;
// }
// bool isEmpty()
// { // mengecek apakah linked list nya kososng atau tidak
//     if (head == NULL)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void tambahAntrean(string data)
// { // Fungsi menambahkan antrian
//     newNode = new Node;
//     newNode->data = data;
//     newNode->next = NULL;
//     if (isEmpty())
//     { // Kondisi ketika queue kosong
//         head = newNode;
//         tail = newNode;
//         tail->next = NULL;
//     }
//     else
//     { // Antrianya ada isi
//         tail->next = newNode;
//         tail = newNode;
//         tail->next = NULL;
//     }
// }

// void kurangiAntrean()
// { // Fungsi mengurangi antrian
//     if (isEmpty())
//     {
//         cout << "Antrian kosong" << endl;
//     }
//     else
//     {
//         if (head->next != NULL)
//         {
//             temp = head;
//             head = head->next;
//             delete temp;
//         }
//         else
//         {
//             head = tail = NULL;
//         }
//     }
// }

// int hitungQueue()
// { // Fungsi menghitung banyak antrian
//     count = head;
//     int hitung_antrean = 0;
//     while (count != NULL)
//     {
//         count = count->next;
//         hitung_antrean++;
//     }
//     return hitung_antrean;
// }
// void bersihkanQueue()
// { // Fungsi menghapus semua antrian
//     temp = head;
//     while (temp != NULL)
//     {
//         del = temp;
//         temp = temp->next;
//         delete del;
//     }
//     head = tail = NULL;
// }

// void lihatQueue()
// { // Fungsi melihat antrian
//     cout << "Data antrian teller:" << endl;
//     temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }

// int main()
// {
//     tambahAntrean("Andi");
//     tambahAntrean("Maya");
//     lihatQueue();
//     cout << "Jumlah antrian = " << hitungQueue() << endl;
//     cout << endl;
//     kurangiAntrean();
//     lihatQueue();
//     cout << "Jumlah antrian = " << hitungQueue() << endl;
//     cout << endl;
//     bersihkanQueue();
//     lihatQueue();
//     cout << "Jumlah antrian = " << hitungQueue() << endl;
//     cout << endl;
//     return 0;
// }

//No2
// #include <iostream>
// using namespace std;
// struct Node
// {
//     string nama_mhs_188;
//     string NIM_mhs_188;
//     Node *next;
// }; // deklarasi node
// Node *head, *tail, *newNode, *temp, *del, *current, *count;

// // inisalisasi node linked listt
// void init()
// {
//     head = NULL;
//     tail = NULL;
// }

// bool isEmpty()
// { // mengecek apakah linked list nya kososng atau tidak
//     if (head == NULL)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void enqueueAntrian(string nama_mhs_188, string NIM_mhs_188)
// { // Fungsi menambahkan antrian
//     newNode = new Node;
//     newNode->nama_mhs_188 = nama_mhs_188;
//     newNode->NIM_mhs_188 = NIM_mhs_188;
//     newNode->next = NULL;

//     if (isEmpty())
//     { // Kondisi ketika queue kosong
//         head = newNode;
//         tail = newNode;
//         tail->next = NULL;
//     }
//     else
//     { // Antrianya ada isi
//         tail->next = newNode;
//         tail = newNode;
//         tail->next = NULL;
//     }
// }

// void dequeueAntrian()
// { // Fungsi mengurangi antrian
//     if (isEmpty())
//     {
//         cout << "Antrian kosong" << endl;
//     }
//     else
//     {
//         if (head->next != NULL)
//         {
//             temp = head;
//             head = head->next;
//             delete temp;
//         }
//         else
//         {
//             head = tail = NULL;
//         }
//     }
// }

// int hitungQueue()
// { // Fungsi menghitung banyak antrian
//     count = head;
//     int hitung_antrean = 0;
//     while (count != NULL)
//     {
//         count = count->next;
//         hitung_antrean++;
//     }
//     return hitung_antrean;
// }
// void bersihkanQueue()
// { // Fungsi menghapus semua antrian
//     temp = head;
//     while (temp != NULL)
//     {
//         del = temp;
//         temp = temp->next;
//         delete del;
//     }
//     head = tail = NULL;
// }

// void lihatQueue()
// { // Fungsi melihat antrian
//     cout << "<<< Data antrian mahasiswa >>>\n " << endl;
//     temp = head;
//     int nomor = 1;
//     while (temp != NULL)
//     {
//         cout << temp->nama_mhs_188 << ", " << temp->NIM_mhs_188 << " Antrian Nomor : "<< nomor << endl;
//         temp = temp->next;
//         nomor++;
//     }
//     cout << endl;
//     cout << endl;
// }

// int main()
// {
//     int number;
//     string nama_mhs_188, NIM_mhs_188;
//     while(true)
//     {system("cls");
//     cout << " MENU ANTREAN MAHASISWA\n\n";
//     cout << " 1. Tambahkan     Antrian\n ";
//     cout << "2. Hapus Antrian pertama\n";
//     cout << " 3. Hitung        Antrian\n";
//     cout << " 4. Bersihkan     Antrian\n";
//     cout << " 5. Lihat         Antrian\n\n";
//     cout << "Choose Number : ";
//     cin>> number;
//     cout << endl;
//     switch(number)
//     {
//         case 1 : 
//         cout << "Masukan Nama Mahasiswa : ";
//         cin >> nama_mhs_188;
//         cout << "Masukan NIM  Mahasiswa : ";
//         cin >> NIM_mhs_188;
//         enqueueAntrian(nama_mhs_188,NIM_mhs_188);
//         cout << "Antrean berhasil ditambahkan \n\n";
//         system("pause");
//         break;

//         case 2 :
//         dequeueAntrian();
//         cout << "Antrian Pertama Berhasil Dihapus\n\n";
//         system("pause");
//         break;

//         case 3 :
//         cout << "Jumlah Antrean Sekarang : " << hitungQueue() << endl;
//         system("pause");
//         break;

//         case 4 : 
//         bersihkanQueue();
//         cout << "Antrean Telah Dibersihkan\n\n ";
//         system("pause");
//         break;

//         case 5 :
//         lihatQueue();
//         system("pause");
//         break;

//         default :
//         cout << "Choose correct number!";
//         system ("pause");
//         break;
//     }
//  }
//     return 0;
// }
