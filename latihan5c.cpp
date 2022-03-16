#include <iostream>

using namespace std;

int main()
{
    int nilai, lompatan, hasil = 0;
    cout << "Masukkan nilai: ";
    cin>>nilai;
    cout<<"Masukan lompatan: ";
    cin>>lompatan;
    for(int i = lompatan; i <= nilai; i+=lompatan){
        cout<<i;
        if(i < nilai){
            cout << "+";
        }
        hasil = hasil + i;
    }
    cout <<"="<<hasil<<endl;
}