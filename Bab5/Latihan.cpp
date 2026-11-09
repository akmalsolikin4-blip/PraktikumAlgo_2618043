#include <iostream>
#include <string>
using namespace std;

int main (){
int kenda, hari;
string kendaraan;
long sepeda, motor, mobil;
sepeda = 25000;
motor = 75000;
mobil = 500000;

cout <<"PROGRAM SEWA KENDARAAN DYOH" << endl;
cout <<"1. Sepeda - Rp25.000/Hari" << endl;
cout <<"2. Motor - Rp75.000/Hari" << endl;
cout <<"3. Mobil - Rp500.000/Hari" << endl;
cout <<"PROGRAM SEWA KENDARAAN DYOH" << endl;

cout << endl;
cout << endl;
cout << endl;

cout <<"pilih kendaraan (1-3): "; cin >> kenda;
cout <<"Kendaraan?: "; cin >> kendaraan;
cout <<"Lama sewanya?: "; cin >> hari;

cout << endl;
cout <<"STRUK NOTA SEWA KENDARAAN DYOH" << endl;

switch (kenda){
	case 1:
	cout <<"Tarif per hari: RP" << sepeda << endl;
	cout <<"Lama sewa: "<< hari << endl;
	cout <<"Total biaya: RP" << sepeda * hari << endl;
	if (hari > 3){
		cout <<"Anda Mendapatkan Diskon 10%: RP"<< sepeda * hari * 10 / 100 << endl;
				cout <<"Totalnya: RP" << sepeda * hari * 90 / 100 << endl;
	}else{
		cout <<"Tidak mendapatkan Diskon" << endl;
		cout <<"Totalnya: RP" << sepeda * hari << endl;
	}
	break;
	case 2:
	cout <<"Tarif per hari: RP" << motor << endl;
	cout <<"Lama sewa: "<< hari << endl;
	cout <<"Total biaya: RP" << motor * hari << endl;
	if (hari > 3){
		cout <<"Anda Mendapatkan Diskon 10%: RP"<< motor * hari * 10 / 100 << endl;
				cout <<"Totalnya: RP" << motor * hari * 90 / 100 << endl;
	}else{
		cout <<"Tidak mendapatkan Diskon" << endl;
		cout <<"Totalnya: RP" << motor * hari << endl;
	}
	break;
	case 3:
	cout <<"Tarif per hari: RP" << mobil << endl;
	cout <<"Lama sewa: "<< hari << endl;
	cout <<"Total biaya: RP" << mobil * hari << endl;
	if (hari > 3){
		cout <<"Anda Mendapatkan Diskon 10%: RP"<< mobil * hari * 10 / 100 << endl;
			cout <<"Totalnya: RP" << mobil * hari * 90 / 100 << endl;
	}else{
		cout <<"Tidak mendapatkan Diskon" << endl;
		cout <<"Totalnya: RP" << mobil * hari << endl;
	}
	break;
	default:
	cout <<"Tidak Tersedia"<< endl;
}
return 0;
}
