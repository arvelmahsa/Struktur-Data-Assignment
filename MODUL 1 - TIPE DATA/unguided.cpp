// TUGAS 1
// NO 1 
/*#include <iostream>
using namespace std;
int s;

int hitung_keliling(int s){
return 4*s;
}
int hitung_luas(int s){
return s*s;
}
int main (){
cout<<"Masukan Panjang Sisi: ";
cin>>s;

cout<<"Keliling : "<<hitung_keliling(s)<<endl;
cout<<"Luas : "<<hitung_luas(s);

return 0;
}*/
//NO 2
//CONTOH STRUCT
/*#include<stdio.h>

struct datamahasiswa
{
    const char *nama;
    const char *alamat;
    int umur;
};

int main ()
{
    struct datamahasiswa mhs;
    mhs.nama = "Dewi";
    mhs.alamat = "Cilacap";
    mhs.umur = 17;

    printf("## DATA MAHASISWA ##\n");
    printf("Nama   : %s\n",mhs.nama);
    printf("Alamat : %s\n",mhs.alamat);
    printf("Umur   : %d\n",mhs.umur);

    return 0;
}*/
//CONTOH CLASS DAN OBJECT
/* 
#include<iostream>
using namespace std;
class mahasiswa{
    public :
    string nama;
    string kelas;
    float nilai;
    void printdata(){
        cout << "Nama  : " << nama << endl;
        cout << "Kelas : " << kelas << endl;
        cout << "IPK   : " << nilai << endl;

    }
};
int main ()
{
    mahasiswa Arvel = {"Arvel Mahsa Athallah F ", "IF XI E", 3.85};
    Arvel.printdata();
    return 0;
}*/
// NO 3 
// ARRAY
/*#include<iostream>
using namespace std;
int main()
{
    //deklarasi dan inisialisasi array
    float nilai [5];
    nilai[0] = 3.83;
    nilai[1] = 3.57;
    nilai[2] = 3.11;
    nilai[3] = 3.97;
    nilai[4] = 3.75;

    //mencetak array
    cout << " <<< PRESENTASE IPK >>> \n";
    cout << "1. Helena   : " << nilai [0] << endl;
    cout << "2. Zulaikha : " << nilai [1] << endl;
    cout << "3. Bagus    : " << nilai [2] << endl;
    cout << "4. Ijat     : " << nilai [3] << endl;
    cout << "5. Farid    : " << nilai [4] << endl;
    return 0;
}*/
/*#include <iostream>
#include <map>
using namespace std;
int main()
{
    // insialisasi dan deklarasi map
    map<string, int> umursiswa;

    // isi value map
    umursiswa["Arkhan"] = 19;
    umursiswa["Kinara"] = 17;
    umursiswa["Rocky"] = 18;
    umursiswa["Fatih"] = 20;

    cout << "DAFTAR UMUR SISWA" << endl;

    // perulangan range based loop untuk menampilkan map
    for (auto &entry : umursiswa)
    {
        cout<< "-> "<<entry.first<<" umur : "<<entry.second<<endl;
    }
    return 0;
}*/

