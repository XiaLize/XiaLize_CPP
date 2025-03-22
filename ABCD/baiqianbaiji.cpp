#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,a = 0;
    cin >> n;
    for (x = 0;x <= n / 5;x++)
    {
        for (y = 0;y <= n / 3;y++)
        {
            z = n - x - y;
            if (z % 3 == 0 && 5 * x + 3 * y +z / 3 == n)
            {
                a += 1;
                cout << a << ":" << x << " " << y << " " << z << endl;
            }
        }
    }
}