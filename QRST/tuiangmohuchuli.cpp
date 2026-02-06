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
    double a[n+1][m+1],temp;
    double b[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a[i][j];
            b[i][j]=a[i][j];
        }
    }
    for(int i=2;i<n;i++)
    {
        for(int j=2;j<m;j++)
        {
                temp = (a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j + 1] + a[i][j - 1]) / 5.0;
                b[i][j] = round(temp);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout << b[i][j] << " ";
        }
        cout << el; 
    }
    r0;
}
