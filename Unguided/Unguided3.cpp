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
