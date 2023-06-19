#include <iostream>
#include <conio.h>
using namespace std;

int main() {
int a, b, c, d;
int p;
int faktor1 = 0, faktor2 = 0, kpk = 0, fpb = 0;

do {
    system("cls");

    cout << "Masukkan pilihan Anda ?\n";
    cout << "1. Menentukan KPK\n";
    cout << "2. Menentukan FPB\n";
    cout << "3. Exit\n";
    cin >> p;

    switch (p) {
        case 1:
            cout << "Menghitung KPK\n";
            cout << "Masukkan bilangan pertama: ";
            cin >> a;
            cout << "Masukkan bilangan kedua: ";
            cin >> b;

            if (a > b) {
                if (a % b == 0) {
                    kpk = a;
                } else {
                    for (c = 1; c <= a; c++) {
                        if ((a * c) % b == 0) {
                            kpk = a * c;
                            break;
                        }
                    }
                }
            } else if (b > a) {
                if (b % a == 0) {
                    kpk = b;
                } else {
                    for (d = 1; d <= b; d++) {
                        if ((b * d) % a == 0) {
                            kpk = b * d;
                            break;
                        }
                    }
                }
            } else {
                kpk = a;
            }

            cout << "Bilangan pertama: " << a << endl;
            cout << "Bilangan kedua: " << b << endl;
            cout << "KPK: " << kpk << endl;
            break;

        case 2:
            cout << "Menghitung FPB\n";
            cout << "Masukkan bilangan pertama: ";
            cin >> a;
            cout << "Masukkan bilangan kedua: ";
            cin >> b;

            if (a > b) {
                for (c = b; c >= 1; c--) {
                    if (a % c == 0 && b % c == 0) {
                        fpb = c;
                        break;
                    }
                }
            } else {
                for (c = a; c >= 1; c--) {
                    if (a % c == 0 && b % c == 0) {
                        fpb = c;
                        break;
                    }
                }
            }

            cout << "Bilangan pertama: " << a << endl;
            cout << "Bilangan kedua: " << b << endl;
            cout << "FPB: " << fpb << endl;
            break;

        case 3:
            cout << "Exit now!!!\n";
            break;

        default:
            cout << "Error!!!" << endl;
            break;
    }

    if (p != 3) {
        cout << "Press any key to continue...";
        getch();
    }

} while (p != 3);

return 0;
}

