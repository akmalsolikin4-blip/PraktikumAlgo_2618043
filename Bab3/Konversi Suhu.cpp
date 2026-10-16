#include <iostream>
using namespace std;

int main() {
    float celcius, farenhait, reamur, kelvin;
    cout << "PROGRAM KONVERSI SUHU" << endl;
    cout << "Masukan Suhu(Celcius) = ";
    cin >> celcius;

    farenhait = (9.0/5.0) * celcius + 32;
    reamur = (4.0/5.0) * celcius;
    kelvin = celcius + 273.15;

    cout << "Jadi," << endl;
    cout << celcius << " derajat celcius= " << endl;
	cout<< farenhait << " derajat fahrenheit" << endl;
	cout<< endl;
	cout<< endl;
    cout << farenhait << " derajat fahrenheit= " << endl;
	cout<< reamur << " derajat reamur" << endl;
	cout<< endl;
	cout<< endl;
    cout << celcius << " derajat celcius= " << endl;
	cout<< kelvin << " derajat kelvin" << endl;
    return 0;
}