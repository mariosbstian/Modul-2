#include <iostream>
using namespace std;

int main() {
    int a[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
    int min=a[0], max=a[0], n=10, pilih;
    float total=0;

    cout << "1. Tampilkan array\n";
    cout << "2. Nilai maksimum\n";
    cout << "3. Nilai minimum\n";
    cout << "4. Rata-rata\n";
    cout << "Pilih: ";
    cin >> pilih;

    for (int i=0; i<n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        total += a[i];
    }

    if (pilih == 1)
        for (int i=0; i<n; i++) cout << a[i] << " ";
    else if (pilih == 2)
        cout << "Maks = " << max;
    else if (pilih == 3)
        cout << "Min = " << min;
    else if (pilih == 4)
        cout << "Rata-rata = " << total/n;
    else
        cout << "Pilihan salah!";
}
