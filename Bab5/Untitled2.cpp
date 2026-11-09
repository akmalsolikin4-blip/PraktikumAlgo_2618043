#include <iostream>
using namespace std;

int main() {
	char c;
	int x, y;
	cout <<"Masukkan angka pertama: ";
	cin>>x;
	cout <<"Masukkan angka kedua:";
	cin>>y;
	cout <<"Pilih operator (+,-) yang diinginkan: ";
	cin >> c;
	
	switch (c){
		case '+':
			cout << x << " + " << y << " = " << x + y <<endl;
			break;
		case '-':
			cout << x << " - " << y << " = " << x - y <<endl;
			break;
		default:
			cout <<"Permintaan anda NGuwawor" << endl;
	}
	return 0;
}