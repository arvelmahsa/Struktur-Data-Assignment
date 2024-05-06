# <h1 align="center">Laporan Praktikum Modul Stack </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

# Dasar Teori
## Pengertian Stack
Kumpulan items yang teratur dimana items baru akan dimasukkan ke dan sebuah items
akan dikeluarkan dari satu ujung yang sama,yaitu dari TOP sebuah stack.Struktur data
linier dimana hanya bagian TOP-nya saja yang bisa diakses. Bersifat LIFO=LastInFirst
Out. Bisa diimplementasikan menggunakan array atau LinkedList.

## Ilustrasi Stack
Terdapatduabuahkotakyangditumpuk,kotakyangsatuakanditumpukdiataskotak
yanglainnya.Jikakemudianstack2kotaktadi,ditambahkotakketiga,keempat,kelima,
danseterusnya,makaakandiperolehsebuahstackkotakyangterdiridariNkotak

## Operasi Dasar Pada Stack
Adapun operasi-operasi dasar dari suatu stack adalah :

a) Create(Stack)

Operasi Create(Stack) digunakan untuk membuat suatu stack baru
dengan nama stack, yang nilai elemen saat stack tersebut dibuat adalah NOEL(S)
= 0, TOP(S) = NULL (tidak terdefinisikan)

b) IsEmpty(Stack)

Operasi ini merupakan operasi untuk mencek isi dari suatu stack dalam
keadaan kosong atau berisi. Operasi ini memiliki 2 (dua) kondisi boolean yaitu :

- True jika stack tersebut kosong atau dapat dikatakan NOEL(S) = 0
  
- False jika stack tersebut tidak dalam kondisi kosong atau dapat dikatakan
NOEL(S) > 0

c) Push(Stack, Elemen)

Operasi ini merupakan operasi untuk menambahkan satu elemen dengan
nilai X pada puncak suatu stack, sehingga posisi TOP(S) akan bernilai X, penerapan
operasi push pasa suatu stack S akan berakibat overflow jika NOEL(S) dari stack
tersebut telah bernilai maksimum.

d) Pop(Stack)

Operasi ini berfungsi untuk menghapus satu elemen dari stack S, sehingga
posisi NOEL(S) akan berkurang satu elemen, dan TOP(S) akan berubah. Operasi
pop dapat menyebabkan kondisi underflow jika suatu stack S yang berada dalam
kondisi minimum dikenakan operasi pop.

e) IsFULL

Operasi ini untuk memeriksa apakah Stack sudah penuh.

f) CLEAR

Operasi ini untuk mengosongkan stack.


# Guided
```C++
```
## Output Guided

# Unguided 
1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan
dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari
depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

![Screenshot (234)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/7c2011f5-9470-4277-9691-f6ce2a0e20dc)

2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan
stack dengan minimal 3 kata. Jelaskan output program dan source codenya
beserta operasi/fungsi yang dibuat?

![Screenshot (235)](https://github.com/arvelmahsa/Struktur-Data-Assignment/assets/161669026/7e69fc9d-ebc3-4ad6-b350-1af723ce9731)

## [Source Code]
```C++

```
## [Output Program ]

## Kesimpulan
Keuntungan utama dari hash table dibandingkan struktur data lainnya adalah efisiensi dan kecepatan. Waktu yang dibutuhkan untuk meng

## Referensi
[1] Pengertian Dan Ilustrasi Stack. 
file:///C:/Users/Acer/Downloads/ranita%20sari(1).pdf

[2] Operasi Dasar Pada Stack. 
[https://dosenit.com/kuliah-it/hash-table](https://repository.bsi.ac.id/repo/files/355474/download/Makalah-Struktur-data-dikti.pdf)
