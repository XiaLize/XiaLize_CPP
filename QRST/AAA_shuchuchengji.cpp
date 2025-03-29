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

}