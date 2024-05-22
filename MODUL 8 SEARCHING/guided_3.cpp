#include <iostream>
using namespace std;

int arr[] = {1, 4, 2, 5, 6, 7, 8, 9, 6, 10,15,14};
int cari = 6;
int i;
int panjangArray = sizeof(arr) / sizeof(arr[0]);
bool ketemu = false;

int main()
{
    for (i = 0; i < panjangArray; i++)
    {
        if (arr[i] == cari)
        {
            ketemu = true;
            break;
        }
        else
        {
            i++;
        }
    }
    cout << "Panjang Array : " << panjangArray-1 << endl;
    cout << cari << " Terdapat pada indeks ke- " << i;
  return 0;
}