#include <iostream>
using namespace std;

int main() {
    string nama, pilihan;
    int menu, jumlah, harga;
    float total, diskon, bayar;

    cout << "=== PROGRAM PEMESANAN MENU KANTIN ===" << endl;

    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "\n1. Nasi Goreng - 15000" << endl;
    cout << "2. Mie Ayam - 12000" << endl;
    cout << "3. Bakso - 13000" << endl;
    cout << "4. Es Teh - 5000" << endl;

    cout << "Pilih Menu: ";
    cin >> menu;

    switch (menu) {
        case 1:
            pilihan = "Nasi Goreng";
            harga = 15000;
            break;

        case 2:
            pilihan = "Mie Ayam";
            harga = 12000;
            break;

        case 3:
            pilihan = "Bakso";
            harga = 13000;
            break;

        case 4:
            pilihan = "Es Teh";
            harga = 5000;
            break;

        default:
            cout << "Menu tidak tersedia!";
            return 0;
    }

    cout << "Jumlah Pesanan: ";
    cin >> jumlah;

    total = harga * jumlah;
    diskon = 0;

    if (total > 40000) {
        diskon = total * 8 / 100;
    }

    bayar = total - diskon;

    cout << "STRUK PEMBAYARAN" << endl;
    cout << "Nama Pemesan: " << nama << endl;
    cout << "Nama Menu: " << pilihan << endl;
    cout << "Harga Satuan: Rp" << harga << endl;
    cout << "Jumlah Pesanan: " << jumlah << endl;
    cout << "Total Pembayaran: Rp" << total << endl;
    cout << "Diskon: Rp" << diskon << endl;
    cout << "Total Setelah Diskon: Rp" << bayar << endl;

    return 0;
}
