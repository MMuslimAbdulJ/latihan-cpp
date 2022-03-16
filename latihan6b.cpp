#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int jmlData, dataKe = 0;
    char lagiInput;
atas:
    cout << "Masukkan jumlah data yang akan diproses?: ";
    cin >> jmlData;
    string kodeRumah[jmlData];
    int i;
    int arrayInput[jmlData];
    // deklarasi sekumpulan array
    const long int uangMuka[3] = {800000, 1000000, 12000000};
    const long int hargaRumah[3] = {20000000, 25000000, 300000000};
    string tipeRumah[3] = {"RSS", "RS", "MEWAH"};
    string pilihTipe[5];
    int pilihUangMuka[5], bunga[5], sisaAngsuran[5], jumlah[5], harga[5];
    // sesi input data
    for (i = 0; i < jmlData; i++)
    {

        cout << "Data ke-" << dataKe + 1 << endl;
        cout << "Masukkan kode Rumah Pilihan[A/B/C]: ";
        cin >> kodeRumah[i];
        cout << endl;
        dataKe++;

        if (kodeRumah[i] == "A" || kodeRumah[i] == "a")
        {
            pilihTipe[i] = "RSS";
            pilihUangMuka[i] = uangMuka[0];
            harga[i] = hargaRumah[0];
        }
        else if (kodeRumah[i] == "B" || kodeRumah[i] == "b")
        {
            pilihTipe[i] = "RS";
            pilihUangMuka[i] = uangMuka[1];
            harga[i] = hargaRumah[1];
        }
        else if (kodeRumah[i] == "C" || kodeRumah[i] == "c")
        {
            pilihTipe[i] = "MEWAH";
            pilihUangMuka[i] = uangMuka[2];
            harga[i] = hargaRumah[2];
        }
        bunga[i] = 0.05 * harga[i];
        sisaAngsuran[i] = harga[i] - uangMuka[i];
        jumlah[i] = sisaAngsuran[i] + bunga[i] + uangMuka[i];
    }
    // akhir sesi input data

    cout << "                                  $DAFTAR HARGA                    \n";
    cout << "===================================================================\n";
    cout << "No.  Kode    Tipe    Uang    Bunga    Sisa     Harga       Total   \n";
    cout << "     Rumah   Rumah   Muka           Angsuran            Pembayaran \n";
    for (i = 1; i <= jmlData; i++)
    {
        cout << setiosflags(ios::left) << setw(5) << i;
        cout << setiosflags(ios::left) << setw(6) << kodeRumah[i];
        cout << setiosflags(ios::left) << setw(6) << pilihTipe[i];
        cout << setiosflags(ios::left) << setw(8) << uangMuka[i];
        cout << setiosflags(ios::left) << setw(10) << bunga[i];
        cout << setiosflags(ios::left) << setw(10) << sisaAngsuran[i];
        cout << setiosflags(ios::left) << setw(10) << harga[i];
        cout << setiosflags(ios::left) << setw(25) << jumlah[i];
        cout << endl;
    }
    cout << "\n===================================================================" << endl;
    return 0;
}

// #include <iostream>

// using namespace std;

// int main()
// {
//     string p= "===================================================================";
//     cout << p.length() << endl;
// }