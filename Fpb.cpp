#include <iostream>
using namespace std;

int cari_fpb(int a, int b) {
    if (a == 0)
        return b;
    return cari_fpb(b % a, a);
}

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    int fpb = cari_fpb(a, b);
    cout << "Bilangan pertama: " << a << endl;
    cout << "Bilangan kedua: " << b << endl;
    cout << "FPB: " << fpb << endl;
    return 0;
}

