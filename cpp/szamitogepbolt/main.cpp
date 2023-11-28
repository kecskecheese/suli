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

    //3. feladat
    int maxind=ar[1];
    for(int i=2; i<=n; i++)
    {
        if (ar[maxind]<ar[i])
        {
            maxind=i;
        }
    }

    cout << "A legdragabb termek adatai: " << fajta[maxind] <<" "<<raktar[maxind]<<" "<< ar[maxind] << endl;

    //4. feladat
    bool van;
    int i=1;
    while(i<=n && !(raktar[i]>10))
    {
        i=i+1;
    }
    van=(i<=n);
    if (van)
    {
        cout  << "Van olyan termek, amibol tobb, mint 10 van raktaron" << endl;
    }
    else {
        cout  << "Nincs olyan termek, amibol tobb, mint 10 van raktaron" << endl;
    }

    //5. feladat
    cout << "Melyik tipusra kivancsi? (m,p,n)" << endl;
    char tipus;
    cin >> tipus;

    if (tipus="n"||"p"||"m")
    {
        int db=0;
        for (int i=1;)
    }
    else{
        cout << "te barom" << endl;
        return 0;
    }

    return 0;
}
