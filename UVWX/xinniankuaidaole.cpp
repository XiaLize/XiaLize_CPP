#include <iostream>
using namespace std;
int main()
{
    int d,a;
    cin >> d;
    if (d == 1)
    {
        cout << "New Year";
        return 0;
    }
    a = 30 - d + 1;
    cout << "New Year";
    for (int i = 1;i <= a;i++)
    {
        cout << " Eve";
    }
    return 0;
}