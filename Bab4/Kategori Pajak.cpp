#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    long penghasilan, pajak;
    int tarif, tanggungan;

    cout << "Namanya: ";
    getline(cin, nama);
    cout << "NIMnya: ";
    cin >> nim;

    cout << "Pendapatan: ";
    cin >> penghasilan;

    if (penghasilan < 0){
        cout << "Input tidak valid!" << endl;
    }else{
        cout << "apakah ad Tanggungan (1=Ya, 0=Tidak): ";
        cin >> tanggungan;

        if (penghasilan < 5000000) {
            tarif = 0;
        }else if(penghasilan < 10000000) {
            tarif = 5;
        }else if(penghasilan < 20000000) {
            tarif = 10;
        }else{
            tarif = 15;
        }
        pajak = penghasilan * tarif / 100;

        if (tanggungan == 1) {
            pajak = pajak - 100000;
        }if(pajak < 0) {
            pajak = 0;
        }
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Tarif pajak: " << tarif << "%" << endl;
        cout << "Pajak akhir: Rp" << pajak << endl;
    }

    return 0;
}