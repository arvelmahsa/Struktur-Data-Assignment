// #include<iostream>
// using namespace std;
// // soal nomor 1
// //deklarasi array
// string arrayNama[] = {"arvel", "dwi","jon"};
// int cari;

// void selection_sort(string arr[], int n)
// {
//     string temp;
//     int min;
//     for (int i = 0; i < n - 1; i++)
//     {
//         min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j][0] < arr[min][0])
//             {
//                 min = j;
//             }
//         }
//         // Tukar elemen
//         temp = arr[i];
//         arr[i] = arr[min];
//         arr[min]= temp;
//     }
// }

// void binary_search(string arr[], int n, char huruf_yang_dicari)
// {
//     int awal = 0, akhir = n - 1, tengah, wisKetemu = 0;
//     while (wisKetemu == 0 && awal <= akhir)
//     {
//         tengah = (awal + akhir) / 2;
//         if (arr[tengah][0] == huruf_yang_dicari)
//         //[0]index kata sesuai urutan abjad
//         {
//             wisKetemu = 1;
//             break;
//         }
//         else if (arr[tengah][0] < huruf_yang_dicari)
//         {
//             awal = tengah + 1;
//         }
//         else
//         {
//             akhir = tengah - 1;
//         }
//     }
//     if (wisKetemu == 1)
//         cout << "\nHuruf ditemukan pada index ke-" << tengah << " " << arr[tengah] << endl;
//     else
//         cout << "\nData tidak ditemukan\n";
// }

// int main()
// {
//     char huruf;
//     cout << "Input One Character : ";
//     cin >> huruf;
//     selection_sort(arrayNama,3);
//     binary_search(arrayNama,3, huruf);

// }
// soal nomor 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     string kalimat;
//     int jumlahHuruvokal;

//     cout << "Masukkan Kalimat: ";
//     getline(cin, kalimat);

//     int i;
//     // algoritma Sequential Search
//     for (i = 0; i < kalimat.length(); i++)
//     {
//         if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' ||kalimat[i] == 'e' ||kalimat[i] == 'o'||
//         kalimat[i] == 'A' ||kalimat[i] == 'I' ||kalimat[i] == 'U' ||kalimat[i] == 'E' ||kalimat[i] == 'O')
//         {
//             jumlahHuruvokal++;
//             continue;
//         }
//     }
//     cout << "Jumlah Huruf Vokalnya Ada : " << jumlahHuruvokal << endl;
//     return 0;
// }
// soal nomor 3
// Diketahui data = . Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!
#include <iostream>
using namespace std;
int arrayData[10] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
int main()
{
    int banyak_angka_empat = 0;
    // algoritma squential search
    for (int i = 0; i < 10; i++)
    {
        if (arrayData[i] == 4)
        {
            banyak_angka_empat++;
        }
    }
    cout << "Banyak Angka 4 ada : " << banyak_angka_empat << endl;
    return 0;
}
