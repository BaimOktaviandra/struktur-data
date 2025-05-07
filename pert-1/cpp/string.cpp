#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;
    int b = 10;
    int hasil = tambah(a, b);
    cout << "Hasil penjumlahan: " << hasil << endl;
    return 0;
}