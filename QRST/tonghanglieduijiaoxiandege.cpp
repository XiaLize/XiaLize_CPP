#include <bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int n, h, k;
int main()
{
    cin >> n >> h >> k;
    for (int i = 1; i <= n; i++)
    {
        cout << "(" << h << "," << i << ") ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "(" << i << "," << k << ") ";
    }
    cout << endl;
    int d = h - k;
    int m = -1, l1 = -1;
    for (int i = 1; i <= n; i++)
    {
        int l = i - d;
        if (l >= 1 && l <= n)
        {
            m = i;
            l1 = l;
            break;
        }
    }
    if (m != -1)
    {
        for (int i = m; i <= n; i++)
        {
            int l = i - d;
            if (l >= 1 && l <= n)
            {
                cout << "(" << i << "," << l << ") ";
            }
        }
    }
    cout << endl;
    int o = -1, l2 = -1;
    int s = h + k;
    for (int i = n; i >= 1; i--)
    {
        int l = s - i;
        if (l >= 1 && l <= n)
        {
            o = i;
            l2 = l;
            break;
        }
    }
    if (o != -1)
    {
        for (int i = o; i >= 1; i--)
        {
            int l = s - i;
            if (l >= 1 && l <= n)
            {
                cout << "(" << i << "," << l << ") ";
            }
        }
    }
    cout << endl;
    r0;
}
