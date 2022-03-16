#include <iostream>

using namespace std;

int main()
{
    int nilaiMid[2], nilaiFin[2];
    string nama[2];
    int hasil1, hasil2;
    int i = 0;
    do
    {
        cout << "Data Ke-" << i + 1 << endl;
        cout << "Nama Siswa       : ";
        cin >> nama[i];
        cout << "Nilai Mid Test   : ";
        cin >> nilaiMid[i];
        cout << "Nilai Final      : ";
        cin >> nilaiFin[i];
        cout << endl;
        i++;
    } while (i < 2);

    hasil1 = (nilaiMid[0] * 0.4) + (nilaiFin[0] * 0.6);
    hasil2 = (nilaiMid[1] * 0.4) + (nilaiFin[1] * 0.6);

    cout << "\n====================================================\n";
    cout << "No.  Nama Siswa      Nilai      Nilai       Hasil     \n";
    cout << "                    Mid test    Final       Ujian     \n";
    cout << "=====================================================\n";
    cout << "1. " << nama[0];
    cout << "               " << nilaiMid[0] << "         " << nilaiFin[0] << "          " << hasil1 << endl;
    cout << "2. " << nama[1];
    cout << "             " << nilaiMid[1] << "         " << nilaiFin[1] << "          " << hasil2 << endl;
}