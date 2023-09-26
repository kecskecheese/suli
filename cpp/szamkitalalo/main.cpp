#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int v1, v2, p1, p2, vel;
    p1 = 0; p2 = 0;
    do
    {
        system("CLS");
        cout << "Valasszon mindket jatekos egy-egy 1 es 100 koze eso szamot\n";
        cout << "1. jatekos\n";
        cin >> v1;

        system("CLS");
        cout << "Valasszon mindket jatekos egy-egy 1 es 100 koze eso szamot\n";
        cout << "2. jatekos\n";
        cin >> v2;

        system("CLS");
        cout << "Az 1. jatekos altal valasztott szam: " << v1 << endl;
        cout << "Az 2. jatekos altal valasztott szam: " << v2 << endl;
        vel = rand() % 100 + 1;
        cout << " A szamitogep altal valasztott szam: " <<vel << endl;

        if (abs(vel-v1) != abs(vel-v2))
        {
            if (abs(vel-v1) < abs(vel-v2))
            {
                p1 = p1 + 10;
                cout << "Az 1. jatekos kozelebbi erteket mondott\n";
                cout << "Az allas: 1. jatekos: " << p1 << " pont - 2. jatekos: " << p2 << " pont\n";
            }
            if (abs(vel-v1) > abs(vel-v2))
            {
                p2 = p2 + 10;
                cout << "Az 2. jatekos kozelebbi erteket mondott\n";
                cout << "Az allas: 1. jatekos: " << p1 << " pont - 2. jatekos: " << p2 << " pont\n";
            }
        }
        else
        {
            cout << "Dontetlen - nem tortent valtozas az eredmenyben.\n";
        }
        system("PAUSE");
    } while (p1 < 50 && p2 < 50);

    if (p1 == 50)
    {
        cout << "Az 1. jatekos nyert.\n";
    }
    else
    {
        cout << "A 2. jatekos nyert.\n";
    }
    return 0;
}
