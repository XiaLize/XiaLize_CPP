#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    int n,m,temp = 0;
    cin >> n >> m;
    int a[n + 1][m + 1];
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1;i <= m;i++)
    {
        cout << "0 ";
    }
    cout << el;
    for(int i = 2;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            if(!a[i - 1][j])
            {
                temp++;
            }
        }
        for(int j = 1;j <= m;j++)
        {
            cout << temp << " ";
        }
        cout << el;
    }
    r0;
}