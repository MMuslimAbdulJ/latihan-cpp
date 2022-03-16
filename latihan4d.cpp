#include <iostream>

using namespace std;

int main()
{
    int kode, jumBeli;
    string nama, kodeKasir;
    cout << "Masukan Kode [1,2,3]   : "; cin >> kode;
    cout << "Jumlah Beli            : "; cin >> jumBeli;
    cout << "Kode Kasir             : "; cin >> kodeKasir;
    cout << "Nama Kasir             : "; cin >> nama;
    
    system("clear");
    const int pakHem = 7500, pakNas = 10000, spesial = 15000;
    int hargaTampil;
    if(kode == 1) {
        hargaTampil = pakHem;
    } else if(kode == 2) {
        hargaTampil = pakNas;
    } else if(kode == 3) {
        hargaTampil = spesial;
    } else {
        hargaTampil = 00;
    }

    string namaPaket;
    if(kode == 1) {
        namaPaket = "PAKET HEMAT\n";
    } else if(kode == 2) {
        namaPaket = "PAKET NASI\n";
    } else if(kode == 3) {
        namaPaket = "PAKET SPESIAL\n";
    } else {
        namaPaket = "PAKET TIDAK TERSEDIA\n";
    }

    cout << "     SEJAHTERA CAFE\n";
    cout << "    Jl. Juang No.16\n";
    cout << "  Telp.7657846-7865379\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    cout << namaPaket << endl;
    cout << jumBeli << "     x    " << hargaTampil << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    int jumlahTotal = hargaTampil *jumBeli;
    int ppn = jumlahTotal / 10;
    int bayar;
    cout << "Total          : Rp." << jumlahTotal << endl;
    cout << "PPN 10%        : Rp." << ppn << endl;
    cout << "Jumlah Bayar   : Rp." << ppn + jumlahTotal << endl;
    cout << "Bayar          : Rp."; cin >> bayar;
    cout << "Kembali        : Rp." << bayar - (ppn + jumlahTotal) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "     SELAMAT MENIKMATI\n";
    cout << "       TERIMA KASIH\n\n";
    cout << "     "  << nama << "   " << kodeKasir << endl;


    
    return 0;
}