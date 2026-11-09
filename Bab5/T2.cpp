#include <iostream>
using namespace std;

int main() {
    int pilih;
    float sisi, panjang, lebar, alas, tinggi;
    string nama, nim;
    
    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << endl;

    cout << "MENGHITUNG LUAS BANGUN DATAR" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;

    cout << "Pilih: ";
    cin >> pilih;

    switch (pilih) {
        case 1:
            cout << "Masukkan sisi: ";
            cin >> sisi;

            cout << "Luas = " << sisi * sisi;
            break;

        case 2:
            cout << "Masukkan panjang: ";
            cin >> panjang;

            cout << "Masukkan lebar: ";
            cin >> lebar;

            cout << "Luas = " << panjang * lebar;
            break;

        case 3:
            cout << "Masukkan alas: ";
            cin >> alas;

            cout << "Masukkan tinggi: ";
            cin >> tinggi;

            cout << "Luas = " << 0.5 * alas * tinggi;
            break;

        default:
            cout << "Pilihan salah!";
    }

    return 0;
}