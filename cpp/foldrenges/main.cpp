#include <iostream>

using namespace std;

int Mpbe(int o, int p, int mp)
{
    return o*3600 + p*60 + mp;
}

int main()
{
    int n;
    int nap[1001], ora[1001], perc[1001],masodperc[1001];

    //Beolvasas
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> nap[i] >> ora[i] >> perc[i] >> masodperc[i];
    }
    return 0;
}
