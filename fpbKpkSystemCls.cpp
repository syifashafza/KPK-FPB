#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main (int argc, char* argv[]) {
    int i,a,b,r,kpk;
    int p;
    kpk=0;
    do {
        cout<<"1. Menentukan KPK"<<endl;
        cout<<"2. Menentukan FPB"<<endl;
        cout<<"3. EXIT"<<endl;
        cout<<"Masukkan Pilihan Anda:";cin>>p;
        system("cls");
        switch (p) {
            case 1: {
                cout<<"\n Mencari KPK"<<endl;
                cout<<"masukkan bilangan pertama : ";cin>>a;
                cout<<"masukkan bilangan kedua   : ";cin>>b;
                cout<<endl;

                for(i=1;i<=b;i++) {
                    kpk=kpk+a;
                    if(kpk%b==0) {
                        cout<<"\n KPK : "<<kpk<<endl;
                        break;
                    }
                }
                break;
            }
            case 2: {
                cout<<"\n Mencari FPB"<<endl;
                cout<<"masukkan bilangan pertama : ";cin>>a;
                cout<<"masukkan bilangan kedua   : ";cin>>b;
                r=a%b;

                while (r!=0) {
                    a=b;
                    b=r;
                    r=a%b;
                }
                cout<<"\n FPB :"<<b<<endl;
                break;
            }
            case 3: {
                cout<<"EXIT Now!!!"<<endl;
                break;
            }
            default: {
                cout<<"Eror!!!"<<endl;
            }
        }
        system("PAUSE");
        system("cls");
    } while (p != 3);
    return EXIT_SUCCESS;
}

