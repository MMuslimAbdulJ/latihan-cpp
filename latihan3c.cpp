#include <iostream>

using namespace std;

int main() {

    cout << "Masukan Nilai x = "; int x; cin >> x;
    cout << "Masukan Nilai y = "; int y; cin >> y;
    cout << endl;
    cout << "Semua akan menghasilkan nilai TRUE atau FALSE\n";
    cout << "Keterangan: Nilai 1 = TRUE dan Nilai 0 = FALSE\n";

    cout << "==============================================\n\n";
    cout << "Operator Relasi\n";
    cout << "Hasil dari " << x << "==" << y << "=" << (x == y ?"1":"0") << endl;
    cout << "Hasil dari " << x << "!=" << y << "=" << (x != y ?"1":"0") << endl << endl;

    cout << "Operator Logika\n";
    cout << "Hasil dari " << "1" << "&&" << "0" << "-->" << (1 && 0 ?"1":"0") << endl;
    cout << "Hasil dari " << "1" << "||" << "0" << "-->" << (1 || 0 ?"1":"0") << endl << endl;

    cout << "==============================================\n\n";
    cout << "Operator Relasi\n";
    cout << "Hasil dari " << x << ">" << y << "=" << (x > y ?"1":"0") << endl;
    cout << "Hasil dari " << x << "<" << y << "=" << (x < y ?"1":"0") << endl << endl;
    cout << "Operator Logika\n";
    cout << "Hasil dari " << "0" << "&&" << "0" << "-->" << (0 && 0 ?"1":"0") << endl;
    cout << "Hasil dari " << "0" << "||" << "0" << "-->" << (0 || 0 ?"1":"0") << endl << endl;

        cout << "==============================================\n\n";
    cout << "Operator Relasi\n";
    cout << "Hasil dari " << x << ">=" << y << "=" << (x >= y ?"1":"0") << endl;
    cout << "Hasil dari " << x << "<=" << y << "=" << (x <= y ?"1":"0") << endl << endl;
    cout << "Operator Logika\n";
    cout << "Hasil dari " << "1" << "&&" << "1" << "-->" << (1 && 1 ?"1":"0") << endl;
    cout << "Hasil dari " << "1" << "||" << "1" << "-->" << (1 || 1 ?"1":"0") << endl << endl;
    return 0;
}