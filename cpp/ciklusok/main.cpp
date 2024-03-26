#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
        cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if (j == i || j == 1)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
//vicces
/*    for(;;)
    {
        for(;;)
        {
        cout << "*";
        }
        cout << endl;
    }*/
    return 0;
}
