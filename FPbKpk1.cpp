#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls"); // Clear screen
    int a, b, c, d, p, faktor1, faktor2, kpk, fpb;

    cout << "Masukan pilihan anda ?" << endl;
    cout << "1. Menentukan KPK" << endl;
    cout << "2. Menentukan FPB" << endl;
    cout << "3. Exit" << endl;
    cin >> p;

    switch (p) {
        case 1:
            cout << "Menghitung KPK" << endl;
            cout << "Masukan Bilangan Pertama : " << endl;
            cin >> a;
            cout << "Masukan Bilangan Kedua : " << endl;
            cin >> b;
            if (a > b) {
                if (a % b) {
                    for (c = 0; c <= a; c++) {
                        if (a % c); // Lanjutkan
                        else
                            faktor1 = c;
                    }
                    for (d = 0; d <= b; d++) {
                        b % d;
                        if (b % d); // Lanjutkan
                        else
                            faktor2 = d;
                    }
                } else {
                    kpk = a;
                }
            } else {
                if (b % a) {
                    for (d = 0; d <= a; d++) {
                        if (b % d); // Lanjutkan
                        else
                            faktor1 = d;
                    }
                    for (c = 0; c <= b; c++) {
                        if (a % c); // Lanjutkan
                        else
                            faktor2 = c;
                    }
                } else {
                    kpk = b;
                }
            }
            fpb = faktor1 * faktor2;
            cout << "Bilangan pertama : " << a << endl;
            cout << "Bilangan kedua : " << b << endl;

}}
