#include <iostream>

using namespace std;

int main()
{
    cout << "1. feladat" << endl;
    for (int i = 1; i <= 100; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "2. feladat" << endl;
    for (int i = 100;i>= 100; i--)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "3. feladat" << endl;
    for (int i = 1; i <= 100; i++)
    {
        cout << i << "*";
    }
    cout << endl;

    cout << "4. feladat" << endl;
    for (int j = 1; j <= 8; j++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
