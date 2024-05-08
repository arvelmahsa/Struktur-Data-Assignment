// Arvel Mahsa Athallah Firdaus
// 2311102188
// NO 1
/*#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string array_kata[5];
int maksimal = 5, top = 0;

bool isFull()
{
    return (top == maksimal);
}

bool isEmpty()
{
    return (top == 0);
}

// Untuk Mengubah huruf besar menjadi kecil
string to_lower(string kata_188)
{
    string kata = "";
    for (int i = 0; i < kata_188.length(); i++)
    {
        kata += tolower(kata_188[i]);
    }
    return kata;
}

// Untuk mengecek ke palindroman
void cek_palindrom(string kata_188)
{
    string kata = to_lower(kata_188);
    string reverse_kata = "";

    for (int i = kata_188.length() - 1; i >= 0; i--)
    {
        reverse_kata += kata[i];
    }

    cout << reverse_kata;

    if (kata == reverse_kata)
    {
        cout << " Adalah Kata Palindrom";
    }
    else
    {
        cout << " Bukan Kata Palindrom";
    }
}

void pusharray_kata(string data)
{
    if (isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        cek_palindrom(data);
        array_kata[top] = data;
        top++;
    }
}

int countStack()
{
    return top;
}

void cetakarray_kata()
{
    if (isEmpty())
    {
        cout << "Ora ana kata sing dicetak" << endl;
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            cout << array_kata[i] << endl;
        }
    }
}

int main()
{
    string kata;
    cout << endl;
    cout << "Ketikan kata = ";
    cin >> kata;
    pusharray_kata(kata);
    cout << endl;

    return 0;
}*/

// NO 2
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string array_kata[4];
int maksimal = 4, top = 0;

bool isFull()
{
    return (top == maksimal);
}

bool isEmpty()
{
    return (top == 0);
}

string cek_reverse(string kata_188)
{
    string reverse_kata = "";

    for (int i = kata_188.length() - 1; i >= 0; i--)
    {
        reverse_kata += kata_188[i];
    }
    cout << "Jika Dibalik Menjadi : ";
    return reverse_kata;
}

void pusharray_kata(string data)
{
    if (isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        string data_baru = cek_reverse(data);
        array_kata[top] = data_baru;
        top++;
    }
}

int countStack()
{
    return top;
}

void cetakarray_kata()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dicetak" << endl;
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            cout << array_kata

                        [i]
                 << endl;
        }
    }
}

int main()
{
    string kata;
    cout << endl;
    cout << "Ketikan Kata/Kalimat : ";
    getline(cin, kata);
    pusharray_kata(kata);
    cetakarray_kata();
    cout << endl;
    return 0;
}