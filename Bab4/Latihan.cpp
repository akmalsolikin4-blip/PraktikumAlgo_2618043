#include <iostream>
using namespace std;

int main () {
	string nama,status;
	float ipk,jpres;
    float ukt;
	ukt = 5000000;
	
	cout << "DATAbASE SCHOLARSHIP" << endl;
	cout << endl;
	cout << endl;
	cout <<"Nama Mahasiswa: "; cin >> nama;
	cout <<"IPK (0-4): "; cin >> ipk;
	cout <<"Jumlah Prestasi: "; cin >> jpres;

	status = (ipk > 3.8 && jpres >3) ? "Beasiswa Penuh (100%)" : 
	(ipk > 3.5 && jpres >2) ? "Beasiswa 75%":
	 (ipk > 3.25 && jpres >1) ? "Beasiswa  50%" : 
	 (ipk > 3.0 && jpres >0) ? "Beasiswa  25%" :	
	 "tidak dapat beasiswa";
	cout << "Nama Mahasiswa : " << nama  << endl;
    cout << "Status Beasiswa: " << status << endl;
    cout << endl;
	
	if (ipk > 3.8 && jpres >3){
		cout <<"Potongan UKT : 100% = Rp5.000.000"<< endl;
		cout << "UKT Dibayar = Rp0"<< endl;
	}else if(ipk > 3.5 && jpres >2){
	cout <<"Potongan UKT : 75% = Rp3.750.000"<< endl;
		cout << "UKT Dibayar = Rp1.250.000"<< endl;
	}else if (ipk > 3.25 && jpres >1) {
		cout <<"Potongan UKT : 50% = Rp2.500.000" << endl;
		cout << "UKT Dibayar = Rp2.500.000" << endl;
	}else if (ipk > 3.0 && jpres >0) {
		cout << "Potongan UKT : 25% = Rp1.250.000"<< endl;
		cout << "UKT Dibayar = Rp3.750.000"<< endl;
	}else {
		cout << "Input Tidak Valid";
	}
	return 0;

}