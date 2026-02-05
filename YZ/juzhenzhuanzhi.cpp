#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int j = 1;j <= m;j++)
    {
        for(int i = 1;i <= n;i++)
        {
            cout << a[i][j] << " ";
        }
        cout << el;
    }
    r0;
}
