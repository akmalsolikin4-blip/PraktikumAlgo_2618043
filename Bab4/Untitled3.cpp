#include <iostream>
using namespace std;

int main(){
	int bil;
	cout << "masukan sebuah bilangan bulat ";
	cout << "yang akan diperiksa: ";
	cin >> bil;
	if (bil > 0){
		cout << bil << " adalah bilangan Positif";
	}else if (bil < 0){
		cout << bil << " adalah bilangan negatif";
	}
	else {
		cout << " anda masukan bilangan 0";
	}
	return 0;
}