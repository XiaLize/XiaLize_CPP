#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    int n,m,qian = 0,temp = 0;
    cin >> n >> m;
    int a[n + 1][m + 1] = {},b[n + 1][m + 1] = {};
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            if(!a[i][j]) temp++;
            b[i][j]=temp;
        }
        temp=0;
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            b[i][j] += b[i - 1][j];
            cout << b[i][j] << " ";
        }
        cout << el;
    }
    r0;
}