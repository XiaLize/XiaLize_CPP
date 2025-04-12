#include <iostream>
using namespace std;
int main()
{
    int a,b,d,a1,b1,c1;
    cin >> a >> b;
    a1 = a;
    b1 = b;
    for (c1 = 1; c1 != 0;)
    {
        c1 = a1 % b1;
        a1 = b1;
        b1 = c1;
    }
    d = a/a1*b;
    cout << d;
    return 0;
}