#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout<<"Masukkan Nilai: ";
    cin>>nilai;
    for(int i = 1; i <= nilai; i++){
        for(int j = nilai; j >= i; j--){
            cout<<i;
        }
        cout<<endl;
    }
    for(int i = nilai; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout << i;
        }
        cout << endl;
    }
}