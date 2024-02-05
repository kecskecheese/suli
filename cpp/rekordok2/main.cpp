#include <iostream>
#include <string>

using namespace std;

struct TAdatok
{
    double a,b,x;
    string egyenlet;
};

int main()
{
    int n;
    TAdatok adatok[101];

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> adatok[i].a >> adatok[i].b;
        adatok[i].egyenlet = to_string(adatok[i].a) + "x + " + to_string(adatok[i].b) + " = 0";
        adatok[i].x = -adatok[i].b/adatok[i].a;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "Egyenlet: " << adatok[i].egyenlet << "\n";
        cout << "Eredmeny: " << adatok[i].x << "\n";
    }
    return 0;
}
