#include <iostream>
#include <fstream>

using namespace std;

void TombKiir(int n, int t[101], string fajlnev)
{
    ofstream g;
    g.open(fajlnev);
    for (int i = 1; i <= n; i++)
    {
        g << t[i] << " ";
    }
    g.close();
}

int main()
{
    int i, n, m, db, x[101], y[101], z[101];
    ifstream f;
    f.open("be.txt");
    f >> n;
    for(i = 1; i <= n; i++)
    {
        f >> x[i];
    }

    f >> m;
    for (i = 1; i <= m; i++)
    {
        f >> y[i];
    }

    f.close();

    db = 0;
    for(i = 1; i <= n; i++)
    {
        j = 1;
        while(j <= m && x[i] != y[j])
        {
            j++;
        }
        if (j <= m)
        {
            db++;
            z[db] = x[i];
        }
    }
    return 0;
}
