#include <iostream>
#include <math.h>

using namespace std;

struct TVektor
{
    int x, y;
};

TVektor vektorOsszead(TVektor a, TVektor b)
{
    TVektor c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

void vektorKiir(TVektor a)
{
    cout << "(" << a.x << "; " << a.y << ")" << endl;
}

double vektorHossza(TVektor a)
{
    return sqrt(pow(a.x, 2) + pow(a.y, 2));
}

int main()
{
    TVektor a, b;


    cout << "Add meg az a vektort" << endl;
    cin >> a.x >> a.y;
    cout << "Add meg a b vektort" << endl;
    cin >> b.x >> b.y;

    cout << "Az a vektor: ";
    vektorKiir(a);
    cout << "A b vektor: ";
    vektorKiir(b);

    cout << "Az a es b vektorok osszege: ";
    vektorKiir(vektorOsszead(a, b));

    cout << "Az a vektor hossza: " << vektorHossza(a) << endl;
    cout << "A b vektor hossza: " << vektorHossza(b) << endl;

    return 0;
}
