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
        cout << "Adja meg a(z) " << i << ". termek adatait:"
        cin >> fajta[i] >> raktar[i] << ar[i];
    }

    //Kiiras
    cout << "Ezeket az adatokat adta meg:" << endl;
    cout << n << endl;
    for (int i=1; i<=n; i++)
    {
        cout << fajta[i] << " " << raktar[i] << " " << ar[i];
    }

    return 0;
}
