#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
using namespace std;
int main()
{
	int m,n,sum = 0;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++)
    {
        sum += a[0][i];
    }
    for(int i = 0;i < n;i++)
    {
        sum += a[m - 1][i];
    }
    for(int i = 1;i < m - 1;i++)
    {
        sum += a[i][0];
        sum += a[i][n-1];
    }
    cout << sum;
    r0;
}