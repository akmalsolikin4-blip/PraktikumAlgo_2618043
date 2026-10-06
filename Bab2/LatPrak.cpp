#include <iostream> //prepocessor directive
#include <cstring>
using namespace std;

int main(){
    string nama, makanan, minuman;
    int hargaminum, hargamakan, jumlahmakan, jumlahminum, totalminum, totalmakan, totalharga,keseluruhan;
    
    cout<<"SILAHKAN INPUT dATA" << endl;
    cout<< "Namamu? :"; cin>> nama;
	cout <<"Makananya? :"; cin>> makanan;
	cout <<"Mau berapa?: "; cin >>jumlahmakan;
	cout <<"Harganya? (semakin sedikit semakin kecil porsinya): "; cin >> hargamakan;
	cout <<"Minumamanya?: "; cin >>minuman;
	cout <<"Mau berapa?: "; cin >>jumlahminum;
	cout <<"Harganya? (semakin sedikit semakin kecil porsinya): "; cin >> hargaminum;
	
	totalmakan= hargamakan * jumlahmakan;
	totalminum= hargaminum * jumlahminum;
	keseluruhan=totalminum + totalmakan;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout <<"Namamu: "; cout << nama;
	cout << endl;
	cout <<"Makannya: "; cout << makanan;
	cout << endl;
	cout <<"Jumlah Pesan: "; cout <<jumlahmakan;
	cout << endl;
	cout <<"Harga Makanan: "; cout <<hargamakan;
	cout << endl;
	cout <<"Minummnya: "; cout <<minuman;
	cout << endl;
	cout <<"Jumlah pesan: "; cout <<jumlahminum;
	cout << endl;
	cout <<"Harga Minuman: "; cout <<hargaminum;
	cout << endl;
	cout <<"Total Harga: " ; cout <<keseluruhan;
    
    
	return 0;
}

