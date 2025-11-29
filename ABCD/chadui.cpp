#include <bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int _[202];
int main()
{
    IOS;
    int n, a, b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> _[i];
    }
    cin >> a >> b;
    n++;
    for (int i = n; i >= n - a; i--)
    {
        swap(_[i], _[i - 1]);
    }
    _[a + 1] = b;
    for (int i = 1; i <= n; i++)
    {
        cout << _[i] << " ";
    }
    r0;
}