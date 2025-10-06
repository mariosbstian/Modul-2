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
