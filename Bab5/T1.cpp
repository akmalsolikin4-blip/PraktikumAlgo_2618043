#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai;

    cout << "=== PROGRAM GRADE NILAI ===" << endl;

    cout << "Masukkan Nama: ";
    cin >> nama;

    cout << "Masukkan NIM: ";
    cin >> nim;

    cout << "Masukkan Nilai: ";
    cin >> nilai;

    switch (nilai) {
        case 85 ... 100:
            cout << "Grade A";
            break;

        case 75 ... 84:
            cout << "Grade B";
            break;

        case 65 ... 74:
            cout << "Grade C";
            break;

        case 50 ... 64:
            cout << "Grade D";
            break;

        case 0 ... 49:
            cout << "Grade E";
            break;

        default:
            cout << "Nilai tidak valid";
    }

    return 0;
}
