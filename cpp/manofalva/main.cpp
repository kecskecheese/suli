#include <iostream>

using namespace std;

struct TIdok
{
    int ora, perc;
};

int Percbe (TIdok ido)
{
    return ido.ora * 60 + ido.perc;
}

TIdok OraPercbe(int percek)
{
    TIdok ido;
    ido.ora = percek / 60;
    ido.perc = percek % 60; //maradék
    return ido;
}

void IdoKiir(TIdok ido)
{
    cout << ido.ora << " " << ido.perc << endl;
}

int main()
{
    int i, n, p;
    TIdok erkezes[101], belepes[101];
    cout << "Add meg az adatokat\n";
    cin >> n >> p;
    if (n < 1 || n > 100)
    {
        cout << "Tul sok vagy tul keves auto\n";
        return 1;
    }else if (p < 1 || p > 120)
    {
        cout << "Tul sok vagy tul keves vamvizsgalati ido\n";
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> erkezes[i].ora >> erkezes[i].perc;
    }

    belepes[1] = OraPercbe(Percbe(erkezes[1]) + p);
    IdoKiir(belepes[1]);
    for(int i = 2; i<=n; i++)
    {
        if(Percbe(erkezes[i]) >= Percbe(belepes[i - 1]))
        {
            belepes[i] = OraPercbe(Percbe(erkezes[i]) + p);
        }
        else
        {
            belepes[i] = OraPercbe(Percbe(belepes[i - 1]) + p);
        }
        IdoKiir(belepes[i]);
    }

    return 0;
}
