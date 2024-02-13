#include <iostream>

using namespace std;

int main()
{
    int dobozok, db[101];
    string szin[101], hely[101];

    //1. feladat: beolvasas

    cout << "1. feladat\n";
    cout << "Adja meg az adatokat!\n";
    cin >> dobozok;
    for (int i = 1; i <= dobozok; i++)
    {
        cin >> szin[i] >> db[i] >> hely[i];
    }

    //2. feladat: kiiras

    cout << "2. feladat\n";
    for (int i = 1; i <= dobozok; i++)
    {
        cout << szin[i] << " " << db[i] << " " << hely[i] << endl;
    }

    //3. feladat: pirosak szamlalasa

    cout << "3. feladat\n";
    int pirosdb = 0;
    for (int i = 1; i <= dobozok; i++)
    {
        if (szin[i] == "piros")
        {
            pirosdb = pirosdb + db[i];
        }
    }
    cout << pirosdb << " darab piros szinu bogre van.\n";

    //4. feladat: legkevesebb bogre

    cout << "4. feladat\n";
    string legkevesebbSzoba;
    int legkisebbdb = 9999999; //gyonyoru
    for (int i = 1; i <= dobozok; i++)
    {
        if (db[i] < legkisebbdb)
        {
            legkevesebbSzoba = hely[i];
            legkisebbdb = db[i];
        }
    }
    cout << "A(z) " << legkevesebbSzoba << " nevu helysegben talalhato a legkevesebb bogret tartalmazo doboz.\n";

    //5. feladat: a 3. feladatra 367, a 4. feladatra etkezo
    return 0;
}
