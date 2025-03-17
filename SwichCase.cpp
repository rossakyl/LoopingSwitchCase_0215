#include <iostream>
using namespace std;

float luasPersegiPanjang(float a, float b) {
    return a*b;
}

float luasLingkran(float a) {
    return 3.14*a*a;
}

int main(){
    int pilihan;
    float panjang, lebar;
    float jejari;

    do{
        cout << "Menu" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. luas Lingkaran" << endl;
        cout << "3. keluar" << endl;

        cout << "pilihan (1/2/3) = ";
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
            cout << "Hitung luas persegi panjang" << endl;
            cout << "Masukkan panjang = ";
            cin >> panjang;
            cout << "masukan lebar = ";
            cin >> lebar;
            cout << "Luas persegi panjang = " << luasPersegiPanjang(panjang, lebar) << endl;
            break;
            case 3:
            break;
            default:
            cout << "pilihan salah, pilihan harus di antara 1-3. ";
            break;
        }
    }while(pilihan != 3);

}