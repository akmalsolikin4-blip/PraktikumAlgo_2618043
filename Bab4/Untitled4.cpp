#include <iostream>
using namespace std;

int main(){
	int umur;
	cout << "program bioskop"<< endl << endl;
	cout << "masukan umur Anda: "; cin >> umur;
	cout<< "umur anda " << umur << (umur >= 17 ? " anda boleh masuk" : " anda tidak boleh masuk") << endl;
	return 0; 
}