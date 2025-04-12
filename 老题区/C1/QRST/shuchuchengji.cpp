#include <iostream>
using namespace std;
int a[1001], pingjun, n, sum = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    pingjun  = sum / n;
    printf("%.3lf\n",pingjun * 1.0);
    for (int i = 1;i <= n;i++)
    {
        if (a[i] > pingjun)
        {
            cout << a[i] <<endl;
        }
    }
    return 0;
}