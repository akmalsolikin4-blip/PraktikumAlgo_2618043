#include <iostream>
using namespace std;
int main (){
	int a,b,c;
	b = 10000;
	cout <<" Sistem Booking VIP" << endl;
	cout << "-------------" << endl;
	cout <<" Harga Booking VIP: RP10000" << endl;
	cout << "-------------" << endl;
	cout << endl;
	cout <<"masukan durasi booking anda (jam)): ";
	cin >> a;
	cout <<" Selamat Anda mendapatkan promo 1 jam" << endl;
	cout << endl;
	cout << "-------------" << endl;
	cout << "total Waktu booking anda: " << ++a << " jam" << endl;
	--a;
	b *= a;

	cout << "Total tarif bayar anda: " <<"Rp."<< b;
 return 0;
}