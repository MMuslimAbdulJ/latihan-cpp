#include <iostream>
#include <string>

using namespace std;

bool cekVariabel(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
    return true;
}

int main()
{
    const int borlandC = 50000, kunciPribadi = 35000, mencariMutiara = 45000;
    int potongan, totalBayar, hargaBuku;
    double ppn;
    string buku, bonusBuku, jumBuk, jumlahBeliTampil, namaBuku, lagi;

    // code untuk input
    do
    {
        cout << "Daftar Buku:\n";
        cout << "1. Sukses Belajar Borland C++\n";
        cout << "2. Kunci Pribadi Sukses\n";
        cout << "3. Mencari Mutiara Di Dasar Hati\n";
        cout << "NAMA BUKU YANG ANDA BELI (1/2/3)    : ";
        cin >> buku;

        if (cekVariabel(buku))
        {
            int buku2 = stoi(buku);

            if (buku2 <= 3 && buku2 >= 1)
            {
                cout << "JUMLAH BUKU YANG ANDA BELI          : ";
                cin >> jumBuk;
                if (cekVariabel(jumBuk))
                {
                    int jumlahBeli = stoi(jumBuk);
                    if (buku2 == 1)
                    {
                        namaBuku = "Sukses Belajar Borland C++\n";
                        hargaBuku = borlandC;
                        totalBayar = borlandC * jumlahBeli;
                    }
                    else if (buku2 == 2)
                    {
                        namaBuku = "Kunci Pribadi Sukses\n";
                        hargaBuku = kunciPribadi;
                        totalBayar = kunciPribadi * jumlahBeli;
                    }
                    else if (buku2 == 3)
                    {
                        namaBuku = "Mencari Mutiara Di Dasar Hati\n";
                        hargaBuku = mencariMutiara;
                        totalBayar = mencariMutiara * jumlahBeli;
                    }

                    if (jumlahBeli >= 3)
                    {
                        jumlahBeliTampil = "Bonus buku saku\n";
                        potongan = totalBayar / 10;
                    }
                    else if (jumlahBeli < 3)
                    {
                        jumlahBeliTampil = "Maaf tidak dapat bonus\n";
                        potongan = 0;
                    }

                    ppn = totalBayar * 0.02;

                    system("clear");

                    // Code untuk Output
                    if (buku2 <= 3 && buku2 >= 1)
                    {
                        cout << "*~*~               TOKO BUKU SEJAHTERA               ~*~*\n";
                        cout << "                   Jl. Keadilan No. 16\n";
                        cout << "                   789789857-7898646478\n";
                        cout << "==========================================================\n\n";
                        cout << "NAMA BUKU YANG ANDA BELI     : ";
                        cout << namaBuku << endl;
                        cout << "HARGA BUKU YANG ANDA BELI    : ";
                        cout << "Rp." << hargaBuku << endl
                             << endl;
                        cout << "ANDA DAPAT POTONGAN          : ";
                        cout << "Rp." << potongan << endl
                             << endl;
                        cout << "JUMLAH BUKU YANG ANDA BELI   : ";
                        cout << jumlahBeli << " buah" << endl
                             << endl;
                        cout << "BONUS YANG ANDA PEROLEH      : ";
                        cout << jumlahBeliTampil << endl;
                        cout << "TOTAL BAYAR BUKU YANG DIBELI : ";
                        cout << "Rp." << totalBayar << endl
                             << endl;
                        cout << "ANDA HARUS BAYAR PPN SEBESAR : ";
                        cout << "Rp." << ppn << endl
                             << endl;
                        cout << "TOTAL + PPN - POTONGAN       : ";
                        cout << "Rp." << totalBayar - potongan + ppn << endl
                             << endl;
                        cout << "==========================================================\n";
                        cout << "          ##*T E R I M A   K A S I H*##\n";
                    }
                }else
            {
                system("clear");
                cout << "Input error!\n";
            }
            }
            else
            {
                system("clear");
                cout << "Input error!\n";
            }
        }
        else
        {
            system("clear");
            cout << "Input error!\n";
        }

        cout << "Coba lagi?(y/n): ";
        cin >> lagi;
        if (lagi != "y" && lagi != "n")
        {
            
            while (lagi != "y" && lagi != "n")
            {
                cout << "Input Salah!\n";
                cout << "Coba lagi?(y/n): ";
                cin >> lagi;
            }
            
        }
    } while (lagi == "y");
    return 0;
}