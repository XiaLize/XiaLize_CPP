#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
using namespace std;
int main()
{
	int n,m,x,y;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> x >> y;
    x--;
    y--;
    for (int i = 0;i < m;i++)
    {
        cout << a[x][i] << " ";
    }
    cout << el;
    for (int i = 0;i < n;i++)
    {
        cout << a[i][y] << " ";
    }
    r0;
}