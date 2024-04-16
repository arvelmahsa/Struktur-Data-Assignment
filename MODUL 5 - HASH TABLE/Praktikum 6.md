# <h1 align="center">Laporan Praktikum Modul Hash Table </h1>
<p align="center">Arvel Mahsa Athallah Firdaus-2311102188-IF-11-E</p>

# Dasar Teori
## Pengertian Fungsi Hash
Secara umum fungsi hash (H) adalah fungsi untuk mengkonversikan himpunan kunci rekaman (key) menjadi himpunan alaman pengingat (posisi subskrib dalam larik / L)
dan bisa dituliskan dengan menggunakan notasi sebagai berikut : 

H : K → L

Dua aspek penting yang perlu dipertimbangkan dalam pemilihan fungsi hash adalah sebagai berikut. 
1. Fungsi H harus mudah dan cepat dicari atau dihitung.
2. Fungsi H sebisa mungkin mendistribusikan posisi yang dimaksud secara uniform
sepanjang himpunan L, sehingga banyaknya tabrakan yang mungkin terjadi bisa
diminimalkan. 

Secara alamiah, tidak ada garansi yang memungkinkan bahwa aspek
kedua bisa dipenuhi tanpa terlebih dahulu mengetahui kunci-kunci yang ada.

## Fungsi Utama Hash Table
Fungsi utama dari Hash Table (Tabel Hash) adalah untuk menyediakan struktur data yang memungkinkan pencarian, penyisipan, dan penghapusan data dengan efisien. Berikut adalah beberapa fungsi utama dari Hash Table:

1. Pencarian (Search)
Hash Table memungkinkan pencarian data berdasarkan kunci (key) dengan cepat. Saat kita ingin mencari nilai berdasarkan kunci, fungsi hash akan mengonversi kunci menjadi indeks, dan nilai yang sesuai dapat diakses langsung dari indeks tersebut, menghasilkan waktu akses yang konstan (O(1)).

2. Penyisipan (Insertion)
Hash Table memungkinkan penambahan data baru dengan kunci dan nilainya. Saat kita ingin menyisipkan data baru, fungsi hash akan mengonversi kunci menjadi indeks, dan nilai tersebut akan disimpan pada indeks yang sesuai. Proses ini dapat dilakukan dengan waktu yang konstan (O(1)) pada kebanyakan kasus, membuatnya sangat efisien.

3. Penghapusan (Deletion)
Hash Table memungkinkan penghapusan data berdasarkan kunci. Saat kita ingin menghapus data, hash table akan menggunakan fungsi hash untuk menemukan indeks data yang sesuai dengan kunci dan menghapusnya dari tabel. Seperti pencarian dan penyisipan, operasi penghapusan juga berjalan dengan waktu yang konstan (O(1)) dalam kebanyakan kasus.

4. Asosiasi Kunci-Nilai (Key-Value Association)
Hash Table menyimpan data dalam bentuk pasangan kunci-nilai (key-value). Ini memungkinkan kita untuk mengaitkan kunci dengan nilai tertentu sehingga kita dapat dengan mudah mengakses nilai tersebut ketika diberikan kunci.

5. Kecepatan Akses
Salah satu keunggulan utama dari Hash Table adalah kecepatan aksesnya. Dengan menggunakan fungsi hash, proses mencari dan mengakses data menjadi sangat cepat karena kita dapat langsung menuju lokasi data tanpa perlu mencari secara berurutan.


## Guided 
### 1. Program Input Array Tiga Dimensi

```C++

```


## Output Guided 1


### 2. Program Mencari Nilai Maksimal Pada Array
```C++

```


## Output Guided 2


## Unguided 
   [Soal]
   
## 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
[Gambar Soal]


[Contoh Program]
```C++
```
[Output Program 1]


## 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
   
[Contoh Program]
```C++

```
[Output Program]


[Contoh Program]
```C++

```
[Output Program]


## Kesimpulan
Keuntungan utama dari hash table dibandingkan struktur data lainnya adalah efisiensi dan kecepatan. Waktu yang dibutuhkan untuk mengakses sebuah elemen cukup cepat sehingga bisa lebih diandalkan. Jadi, Anda tidak perlu memakan waktu atau usaha besar untuk menyimpan dan mencari data yang diperlukan.

## Referensi
[1] Pengertian Fungsi Hash. 
https://yuliana.lecturer.pens.ac.id/Struktur%20Data%20C/Teori%20SD%20-%20pdf/Data%20Structure%20-%20Bab%2010.pdf
[2] Fungsi Utama Hash Table. 
https://dosenit.com/kuliah-it/hash-table
[3] Keuntungan Hash Table
https://algorit.ma/blog/hash-table-adalah-2022/
