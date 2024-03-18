// no 1
/*#include <iostream>
using namespace std;
int main()
{
    int data_array[10]={1,2,3,4,5,6,7,8,9,10};
    cout << "Data Array   : ";
    for (int i = 0; i < 10; i++)
    {
        cout << data_array[i] << " ";
    }cout << endl;

    cout << "Nomor Genap  : ";
    for (int i = 0; i < 10; i++)
    {
        if(data_array[i]%2==0)
        {
          cout << data_array[i] << " "; 
        }
    }cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < 10; i++)
    {
        if (data_array[i]%2!=0)
        {
            cout << data_array[i] << " ";
        }
    }cout << endl;
    return 0;
}*/
//no 2
/*#include<iostream>
using namespace std;
//Program input array 3 dimensi
int main ()
{
    int a,b,c;
    cout << "Masukan Index Dimensi 1 : ";
    cin >> a;
    cout << "Masukan Index Dimensi 2 : ";
    cin >> b;
    cout << "Masukan Index Dimensi 3 : ";
    cin >> c;
    cout << endl;
    //deklarasi array
    int arr[a][b][c];
    //input elemen
    for(int x = 0; x < a; x++)
    {
        for(int y = 0; y < b; y++)
        {
            for(int z = 0; z < c; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr [x][y][z];
            }
        }
        cout << endl;
    }
    //output array
    for(int x = 0; x < a; x++)
    {
        for(int y = 0; y < b; y++)
        {
            for (int z = 0; z < c; z++)
            {
                cout << " Data Array ["<< x << "]["<< y <<"][" << z <<"] = " << arr [x][y][z] << endl;
            }
        }
    }
    cout << endl;
    //tampilkan array
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            for (int z = 0; z < c; z++)
            {
                cout << arr [x] [y] [z] << " "<< ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}*/
// no 3
/*#include<iostream>
using namespace std;
int main ()
{   int a;
float rata_rata;
    int maks,min, i = 1;
    cout << "Masukan Jumlah Array : ";
    cin >> a;
    int banyak_angka[a];
    cout << "Masukan " << a << " angka \n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke- "<< (i) << ": ";
        cin >> banyak_angka[i];
    }
    maks = banyak_angka[0];
    for (i = 0; i < a; i++)
    {
        if (banyak_angka[i] > maks)
        {
            maks = banyak_angka[i];
        }
    }
    cout << "Nilai Maksimum adalah " << maks << endl;
    min = banyak_angka[0];
    for (i = 0; i < a; i++)
    {
        if (banyak_angka[i] < min)
        {
            min = banyak_angka[i];
        }
    }
    cout << "Nilai Minimum adalah " << min << endl;
    for (int i = 0; i < a; i++){
        rata_rata += banyak_angka[i];
    }
    cout << "Rata-Rata adalah " << rata_rata/a << endl;
 return 0;
}*/
