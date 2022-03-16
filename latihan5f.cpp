#include <iostream>

using namespace std;

int main()
{
    int nilai = 10, hasil1 = 0, hasil2 = 0;
    for (int i = 1; i <= nilai; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j;
            hasil1 += j;
        }
        for (int k = 20; k > i; k--)
        {

            if (i == 10)
            {
                break;
            }
            cout << " ";
        }
        if (i == 10)
        {
            for (int i = 0; i < 9; i++)
            {
                cout << " ";
            }
        }
        cout << "=" << hasil1 << endl;
        hasil2 += hasil1;
        hasil1 = 0;
    }
    cout << "=======================\n";
    cout << "total=              " << hasil2 << endl;
}