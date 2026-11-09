#include <iostream>
using namespace std;

int main (){
	long anggaran, terpakai;
	anggaran = 1000000000;
	terpakai = 75000000;
	int api;
	api = 0;
	while (anggaran >0){
	cout << "Api tertangani: " << api << endl;
	cout << "sisa anggaran: " << anggaran<< endl;
	anggaran -= 75000000;
	api++;
}
return 0;
}