/*#include<iostream>
using namespace std;
//Program input array 3 dimensi
int main ()
{
    //deklarasi array
    int arr[2][3][3];
    //input elemen
    for(int x = 0; x < 2; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            for(int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr [x][y][z];
            }
        }
        cout << endl;
    }
    //output array
    for(int x = 0; x < 2; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << " Data Array ["<< x << "]["<< y <<"][" << z <<"] = " << arr [x][y][z] << endl;
            }
        }
    }
    cout << endl;
    //tampilkan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr [x] [y] [z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}*/
#include<iostream>
using namespace std;
int main ()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukan Panjang Array : ";
    cin >> a;
    int array[a];
    cout << "Masukan " << a << " angka \n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke- "<< (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai Maksimum adalah " << maks << " berada di Array ke "<< lokasi << endl;
}