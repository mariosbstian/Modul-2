# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (2)</h1>
<p align="center">Mario Sebastian Barus</p>

## Dasar Teori
Dalam kajian struktur data, array satu, dua, dan tiga dimensi berfungsi sebagai tempat data sejenis yang tersimpan berurutan di memori, memungkinkan akses elemen secara cepat dengan kompleksitas waktu konstan. Hal ini menjadi dasar efisiensi dalam pengelolaan data yang menuntut kecepatan dan aturan. Konsep pointer dan reference dalam C++ menggambarkan pengelolaan memori secara langsung melalui alamat variabel tanpa menyalin nilai, sehingga mempercepat proses dan menghemat ruang penyimpanan. Mekanisme call by reference pada fungsi tukar nilai juga menunjukkan efisiensi pemanggilan fungsi karena memungkinkan perubahan data asli tanpa perlu pengembalian nilai. Operasi matriks 3x3 mencerminkan penerapan prinsip aljabar linear dalam pemrosesan numerik, yang umum digunakan untuk menyelesaikan berbagai persoalan komputasi matematis. Sementara itu, penggunaan struktur kontrol seperti looping dan switch-case pada program menu berbasis array menunjukkan penerapan logika pemrograman dan interaksi dengan pengguna secara terstruktur. Secara keseluruhan, dasar teori yang melandasi program ini berkaitan dengan efisiensi memori, pengaturan data, serta pengendalian alur program yang menjadi inti dari desain sistem komputasi berbasis bahasa C++.
## Guided 

### 1. [Array]

```C++
#include <iostream>
using namespace std;

int main()
{
    int arrID[5] = {10, 20, 30, 40, 50};
    cout << "Array 1 Demensi : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "arr1D[" << i << "] = " << arrID[i] << endl;
    }
    cout << endl;

    int arr2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << "Array 2 Demensi : " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++) {
            cout << "arr2D[" << i << "][" << j << "] = " << arr2D[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    // ---Array Multi Demensi (3D)
    int arr3D[2][2][3] = {
        {{1, 2, 3}, {4, 5, 6}},
        {{7, 8, 9}, {10, 11, 12}}
    };
    cout << "Array 3 Demensi : " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 3; k++){
                cout << "arr3D[" << i << "][" << j << "][" << k << "] = " << arr3D[i][j][k] << endl;
            }
        }
    }

    return 0;
}

```
Kode di atas digunakan untuk menampilkan isi array satu dimensi, dua dimensi, dan tiga dimensi, serta menunjukkan cara mengakses dan menampilkan elemen-elemen array multidimensi dalam bahasa C++.

### 2. [Pointer]

```C++
#include <iostream>
using namespace std;

void tukar(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 20, b = 30;
    int *ptr;

    ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value stored in ptr (address of a): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    tukar(&a, &b);
    cout << "After swapping, value of a = " << a << " and b = " << b << endl;

    return 0;
}

```
Kode di atas digunakan untuk menunjukkan cara kerja pointer dan proses pertukaran nilai dua variabel menggunakan fungsi dengan parameter pointer dalam bahasa C++.

### 3. [Reference]

```C++
#include <iostream>
using namespace std;

void tukar(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 20, b = 30;
    int &ref = a;

    cout << "Nilai a : " << a << endl;
    cout << "Alamat a (&a) : " << &a << endl;
    cout << "Nilai ref (alias a) : " << ref << endl;
    cout << "Alamat ref (&ref) : " << &ref << endl;

    // Mengubah nilai a lewat reference
    ref = 50;

    cout << "Setelah ref = 50" << endl;
    cout << "Nilai a : " << a << endl;
    cout << "Nilai ref : " << ref << endl;

    tukar(a, b);
    cout << "After swapping, value of a = " << a << " and b = " << b << endl;

    return 0;
}

```
Kode di atas digunakan untuk menunjukkan konsep variabel referensi (reference variable) dan penerapan fungsi pertukaran nilai (swap function) menggunakan call by reference dalam bahasa C++.


## Unguided 

### 1. [Unguided 1]

```C++
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout << "Masukkan elemen matriks A (3x3):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];

    cout << "Masukkan elemen matriks B (3x3):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> B[i][j];

    cout << "\nHasil Penjumlahan (A + B):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Pengurangan (A - B):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Perkalian (A x B):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

```
#### Output:
<img width="1920" height="1080" alt="Screenshot (71)" src="https://github.com/user-attachments/assets/09fbb1ad-d639-4496-97b2-dcd6595dba9d" />
<img width="1920" height="1080" alt="Screenshot (72)" src="https://github.com/user-attachments/assets/c0adf938-4a23-4d57-9cbe-7880002dfb6a" />

Kode di atas digunakan untuk mengolah dua matriks berordo 3x3 melalui operasi aritmetika dasar seperti penjumlahan, pengurangan, dan perkalian matriks dalam bahasa C++.

#### Full code Screenshot:
<img width="555" height="796" alt="image" src="https://github.com/user-attachments/assets/00aa2743-88c0-43fd-9225-feb14a50d9e5" />

### 2. [Unguided 2]

```C++
#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int x, y, z;
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;
    cout << "Masukkan nilai z: ";
    cin >> z;

    cout << "\nSebelum ditukar:\n";
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    tukarPointer(&x, &y, &z);

    cout << "\nSetelah ditukar (menggunakan pointer):\n";
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}

```
#### Output:
<img width="552" height="185" alt="image" src="https://github.com/user-attachments/assets/3f10d71f-4f12-4d4b-a8b6-f6739e6687d4" />

Kode di atas digunakan untuk menukar nilai tiga variabel menggunakan konsep pointer dalam bahasa C++, di mana proses pertukaran dilakukan dengan memanipulasi alamat memori variabel secara langsung.
#### Full code Screenshot:
<img width="647" height="501" alt="image" src="https://github.com/user-attachments/assets/e6418666-23fe-48a0-b203-d89ec6660bb4" />

### 3. [Unguided 3]

```C++
#include <iostream>

using namespace std;

void tampilkanMenu() {
    cout << "----- MENU OPERASI ARRAY ------\n";
    cout << "1. Tampilkan array\n";
    cout << "2. Nilai maksimum\n";
    cout << "3. Nilai minimum\n";
    cout << "4. Rata-rata\n";
    cout << "5. Keluar\n";
    cout << "Pilih operasi (1-5): ";
}

int main() {
    int a[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
    int n = 10;
    int pilih;
    
    int min = a[0];
    int max = a[0];
    float total = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        total += a[i];
    }

    do {
        tampilkanMenu();
        if (!(cin >> pilih)) {
            cout << "Input tidak valid. Harap masukkan angka.\n";
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            continue; 
        }

        switch (pilih) {
            case 1:
                cout << "Array: ";
                for (int i = 0; i < n; i++) {
                    cout << a[i] << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Nilai Maksimum = " << max << endl;
                break;
            case 3:
                cout << "Nilai Minimum = " << min << endl;
                break;
            case 4: {
                float rata = total / n;
                int bagian_bulat = (int)rata;
                int dua_digit = (int)((rata - bagian_bulat) * 100 + 0.5);
                cout << "Rata-rata = " << bagian_bulat << ".";

                if (dua_digit < 10) cout << "0"; 
                cout << dua_digit << endl;
                break;
            }
            case 5:
                cout << "Terima kasih, program berakhir.\n";
                break;
            default:
                cout << "Pilihan salah! Silakan pilih angka 1 sampai 5.\n";
                break;
        }

    } while (pilih != 5);

    return 0;
}

```
#### Output:
<img width="930" height="667" alt="image" src="https://github.com/user-attachments/assets/087aa480-2395-4d6c-852d-c8533fc0faff" />

Kode di atas digunakan untuk menjalankan program menu berbasis array yang memungkinkan pengguna melakukan berbagai operasi seperti menampilkan data, mencari nilai maksimum, minimum, dan menghitung rata-rata elemen array.
#### Full code Screenshot:
<img width="496" height="864" alt="image" src="https://github.com/user-attachments/assets/baf7dfa3-fc7f-4481-bb30-8a5ddbe9a941" />


## Kesimpulan
Secara keseluruhan, rangkaian kode C++ yang dibuat mencerminkan penerapan nyata dari konsep dasar struktur data, manajemen memori, dan algoritma terstruktur. Penggunaan array satu hingga tiga dimensi menunjukkan bagaimana data dapat diatur secara efisien untuk mempercepat proses pengolahan. Implementasi pointer dan reference menekankan pentingnya pengelolaan memori secara langsung agar program berjalan lebih optimal. Penerapan call by reference, operasi pada matriks 3x3, serta program menu berbasis array juga menggambarkan perpaduan antara teori aljabar linear dan logika pemrograman dalam praktik komputasi. Dengan demikian, program ini menunjukkan keselarasan antara teori dan penerapan dalam pengembangan program C++ yang efisien, sistematis, dan mudah dipahami.

## Referensi
[1] El-Zawawy, M. A. (2011). Probabilistic pointer analysis for multithreaded programs.
[2] Åkerblom, B., Castegren, E., & Wrigstad, T. (2019). Reference capabilities for safe parallel array programming.
[3] Miné, A. (2007). Field-sensitive value analysis of embedded C programs with union types and pointer arithmetics.
