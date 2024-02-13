#include <iostream>

using namespace std;

int main()
{
    int n, i, j, sv, x[101];

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    for (i = 1; i <= n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(x[i] > x[j])
            {
                sv = x[i];
                x[i] = x[j];
                x[j] = sv;
            }
        }
    }
    cout << x << endl;

    //02.13
    for (i = 1; i <= n; i++)
    {

        cout << x[i] << " \n";
    }

    return 0;
}
