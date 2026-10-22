#include <iostream>
using namespace std;

int main () {
	int usia;
	cout <<" berapa usia anda: ";
	cin >> usia;
	if (usia < 17) {
		cout << "anda belum memenuhi syarat mengendarai kendaraan ini";
	}
	return 0;
}