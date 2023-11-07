#include <iostream>

using namespace std;

int Mpbe(int n, int o, int p, int mp)
{
    return n*86400 + o*3600 + p*60 + mp;
}

void Mpbol(int mpek)
{
    int nap = mpek / 86400;

    mpek = mpek % 86400;
    int ora = mpek / 3600;

    mpek = mpek % 3600;
    int perc = mpek / 60;

    int mp = mpek % 60;

    cout << nap << " " << ora << ":" << perc << ":" << mp << endl;
}-

int main()
{
    int n;
    int nap[1001], ora[1001], perc[1001], masodperc[1001];

    //Beolvasás
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> nap[i] >> ora[i] >> perc[i] >> masodperc[i];
    }

    //Időkülönbségek számolása
    int kul[1001];
    for (int i=1; i<n; i++)
    {
        kul[i] = Mpbe(nap[i+1], ora[i+1], perc[i+1], masodperc[i+1])
                    - Mpbe(nap[i], ora[i], perc[i], masodperc[i]);
    }

    //Maximumkiválasztás
    int m = kul[1];
    for (int i = 2; i<n; i++)
    {
        if (kul[i] > m)
        {
            m = kul [i];
        }
    }
    Mpbol(m);

    //minkivalasztas
    int o = kul[1];
    for (int i = 2; i<n; i++)
    {
        if (kul[i] < o)
        {
            o = kul [i];
        }
    }
    Mpbol(o);


    return 0;
}

