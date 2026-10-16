#include <iostream>
using namespace std;

int main() {
    float jari, tinggi, volume;
    const float pi = 3.14;

    cout << "Yuk Menghitung Volume Tabung "<< endl;
    cout << "Masukkan jari-jari tabung: ";
    cin >> jari;
    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;

    volume = pi * jari * jari * tinggi;
    cout << "Volume Tabung adalah: " << volume << endl;
    return 0;
}