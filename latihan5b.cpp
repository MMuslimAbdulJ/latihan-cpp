#include <iostream>

using namespace std;

int main()
{
    int nilai, hasil = 0;
    cout << "Masukkan nilai: ";
    cin>>nilai;
    for(int i = 1; i <= nilai; i++){
        cout<<i;
        if(i < nilai){
            cout << "+";
        }
        hasil = hasil + i;
    }
    cout <<"="<<hasil<<endl;
}