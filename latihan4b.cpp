#include <iostream>

using namespace std;

int main()
{
    cout << "      TOKO BERAS MURAH\n";
    cout << "================================\n";
    int jumlahBeras;
    const int hargaBeras = 4500;
    cout << "Jumlah beli beras (kg): "; cin >> jumlahBeras;
    cout << endl;
    cout << "total belanja anda?---->Rp." << hargaBeras * jumlahBeras;
    cout << endl << endl;
    if(jumlahBeras >= 23) {
        cout << "bonus 1 liter ice cream cholollate\n\n";
    } else {
        cout << "maaf anda tidak dapat bonus\n\n";
    }
    cout << "Terima Kasih atas kunjungannya\n";
    return 0;
}