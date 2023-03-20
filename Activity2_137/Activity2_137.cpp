#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
    return p * l;
}

float lingkaran(float r) {
    return 3.14 * r * r;
}

float segitiga(float a, float t) {
    return a * t * 0.5;
}


int main() {
    float nilai[10]; //GAK NGERTI VARIABLE APA
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    bool menu;
    menu = true;
    while (menu == true)
    {
       cout << "\n\n===============================\n";
       cout << "M E N U\n";
       cout << "===============================\n";
       cout << "1. Persegi Panjang\n";
       cout << "2. Lingkaran\n";
       cout << "3. Segitiga\n";
       cout << "4. array\n";
       cout << "5. keluar\n";
       cout << "pilihan (1/2/3/4/5)\n";
       cin >> pilihan;

       switch(pilihan) 
       {
            case 1:
                cout << "Masukan Panjang = ";
                cin >> panjang;
                cout << "Masukan Lebar = ";
                cin >> lebar;
                cout << "\n Luas Persegi Panjang = " << persegipanjang(panjang, lebar);
                break;
            case 2:
                cout << "Masukan jejari = ";
                cin >> jejari;
                cout << "\n Luas Persegi Panjang = " << lingkaran(jejari);
                break;
            case 3:
                cout << "Masukan alas = ";
                cin >> alas;
                cout << "Masukan tinggi = ";
                cin >> tinggi;
                cout << "\n Luas Persegi Panjang = " << segitiga(alas, tinggi);
                break;
            case 4:
                cout << "menigisi array\n";
                for (int i = 0; i < 10; i++) {
                    cout << "nilai ke-" << (i + 1) << ": ";
                    cin >> nilai[i];
                }
                cout << "membaca isi array\n";
                for (int i = 0; i < 10; i++) {
                    cout << "\nnilai ke-" << (i + 1) << ": " << nilai[i];
                }
                break;
            case 5:
                menu = false;
                break;
            default:
                cout << "PILIHAN SALAH !!!";
                break;
       }
    }
}