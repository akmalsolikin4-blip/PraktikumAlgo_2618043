#include <iostream>
using namespace std;

int main(){
	int jumlah;
	do {
		cout << "jumlah mahasiswa: ";
		cin >> jumlah;
		
		if (jumlah <1 || jumlah >10) {
			cout<< "input tidak valid" << endl;
		}
		
		}while (jumlah <1 || jumlah >10);
		
		
		for (int a=1, nim=2618043; a<= jumlah; a++, nim++){
			cout <<"Absen " << a << ": "<< nim << endl;
			 
		}
		
	return 0;
}