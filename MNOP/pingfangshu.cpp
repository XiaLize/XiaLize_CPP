#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,n2;
    cin >> n;
    n2 = sqrt(n);
    if (n2*n2 == n)
    {
        if (n%2 == 0)
        {
            cout << "Even-S" << endl;
        }
        else
        {
            cout << "Odd-S" << endl;
        }
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}