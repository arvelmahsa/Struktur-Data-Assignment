// // soal nomor 1
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <iomanip>

// using namespace std;
// void pemilihan_sort(vector<char>& arr) {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++) {
//         int min = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min]) {
//                 min = j;
//             }
//         }
//         swap(arr[i], arr[min]);
//     }
// }


// void pencarian_binary(const vector<char>& arr, char target) {
//     int begin = 0, ending = arr.size() - 1, tengah;
//     bool found = false;

//     while (!found && begin <= ending) {
//         tengah = (begin + ending) / 2;
//         if (arr[tengah] == target) {
//             found = true;
//             break;
//         } else if (arr[tengah] < target) {
//             begin = tengah + 1;
//         } else {
//             ending = tengah - 1;
//         }
//     }

//     if (found)
//         cout << "\nHuruf '"<< target <<"' ditemukan pada index ke-" << tengah << endl;
//     else
//         cout << "\nHuruf '" << target << "' tidak ditemukan\n";
// }

// int main() {
//     string sentence;
//     char letter;
  
//     cout << "\tBINARY SEARCH PROGRAM" << endl;
//     cout << "\nInput Sentence : ";
//     getline(cin, sentence);

//     cout << "\nMasukkan huruf yang ingin dicari: ";
//     cin >> letter;

//     vector<char> charArray(sentence.begin(), sentence.end());

//     cout << "\nKalimat Awal : ";
//     for (char c : charArray) {
//         cout << setw(3) << c;
//     }
//     cout << endl;

//     pemilihan_sort(charArray);

//     cout << "\nKalimat Setelah Di Urutkan : ";
//     for (char c : charArray) {
//         cout << setw(3) << c;
//     }
//     cout << endl;
//     pencarian_binary(charArray, letter);

//     return 0;
// }

// soal nomor 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     string kalimat;
//     int jumlahHuruvokal;
//     cout << endl;
//     cout << "PROGRAM UNTUK MENCARI HURUF VOKAL\n";
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
// #include <iostream>
// using namespace std;
// int arrayData[10] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
// int main()
// {
//     int banyak_angka_empat = 0;
//     // algoritma squential search
//     for (int i = 0; i < 10; i++)
//     {
//         if (arrayData[i] == 4)
//         {
//             banyak_angka_empat++;
//         }
//     }
//     cout << "Banyak Angka 4 ada : " << banyak_angka_empat << endl;
//     return 0;
// }
