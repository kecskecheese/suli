#include <iostream>

using namespace std;

int main()
{
    int n;
    char fajta[101]; int raktar[101], ar[101];

    //Beolvasas
    cout << "Adja meg a termekfajtak szamat!" << endl;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cout << "Adja meg a(z) " << i << ". termek adatait:";
        cin >> fajta[i] >> raktar[i] >> ar[i];
    }

    //Kiiras
    cout << "Ezeket az adatokat adta meg:" << endl;
    cout << n << endl;
    for (int i=1; i<=n; i++)
    {
        cout << fajta[i] << " " << raktar[i] << " " << ar[i] << endl;
    }

    //1. feladat
    int s=0;
    for(int i=1; i<=n; i++)
    {
        s=s+raktar[i];
    }
    cout << "A raktaron levo termekek szama: " << s << endl;

    //2. feladat
    int osszeg=0;
    for(int i=1; i<=n; i++)
    {
        osszeg=osszeg+ar[i];
    }
    cout << fixed;
    cout << "Az atlag ar: " << (float)osszeg/n << endl;

    return 0;
}
