#include <iostream>

using namespace std;

struct TIdok
{
    int ora, perc
};

int percbe (TIdok ido)
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

int main()
{
    int ora[100], perc[100], autok, vam;
    cin >> autok >> vam;
    if (autok < 1 || autok > 100)
    {
        cout << "Tul sok vagy tul keves auto\n";
        return 1;
    }else if (vam < 1 || vam > 120)
    {
        cout << "Tul sok vagy tul keves vamvizsgalati ido\n";
        return 1;
    }
    for (int i = 1; i <= autok; i++)
    {
        cin >> ora[i] >> perc[i];
    }

    for (int i = 1; i <= autok; i++)
    {
        cout << ora[i] << perc[i] + vam << endl; // ez még rossz
    }

    return 0;
}
