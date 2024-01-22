#include <iostream>

using namespace std;

string f(int jegy)
{
    if (jegy == 5) { return "jeles"; }
    else if (jegy == 4) { return "jo"; }
    else if (jegy == 3) { return "kozepes"; }
    else if (jegy == 2) { return "elegseges"; }
    else if (jegy == 1) { return "elegtelen"; }
}

int main()
{
    int n;
    int x[101];
    string y[101];

    cout << "Adja meg a tanulok szamat!" << endl;
    cin >> n;
    cout << "Adja meg a jegyeket!" << endl;
    for (int i=1; i<=n; i++)
    {
        cin >> x[i];
    }

    for (int i=1; i<=n; i++)
    {
        y[i] = f(x[i]);
        cout << y[i] << " ";
    }
    return 0;
}
