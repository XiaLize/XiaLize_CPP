#include <iostream>
using namespace std;
int main()
{
    int n,f = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        f = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }       
        if (f == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}