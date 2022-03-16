#include <iostream>

using namespace std;

int main()
{
    int nilai1 = 10;
    //loop 1
    cout<<"loop1\n";
    for (int j = nilai1, hasil = 0; j >= 2; j -= 2)
    {
        for (int k = j, restart = nilai1; k >= 2; k -= 2, restart -= 2)
        {
            cout << restart;
            if (k != 2)
            {
                cout << "+";
            }
            hasil += restart;
        }
        cout << "=" << hasil << endl;
        hasil = 0;
    }

    //loop 2
    cout<<"\nloop2\n";
    for (int j = 1, hasil = 1; j <= nilai1; j += 2)
    {
        for (int k = 1, restart = 1; k < j+2; k += 2, restart += 2)
        {
            cout << restart;
            if (k < j)
            {
                cout << "*";
            }
            hasil *= restart;
        }
        cout << "=" << hasil<< endl;
        hasil = 1;
    }
}