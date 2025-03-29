#include <iostream>
using namespace std;
int main ()
{
    int n, m, x;
    cin >> n >> m;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        cout << a[x] << endl;
    }
}