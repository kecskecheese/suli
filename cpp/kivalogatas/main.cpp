#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int n, db, y[101];
    string x[101];

    ifstream f;
    f.open("be.txt");
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        f >> x[i];
    }
    f.close();

    //kiválogatás
    db = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i][0] == 'a')
        {
            db++;
            y[db] = 1;
            cout << y[db] << " "  << endl;
        }
    }

    return 0;
}
