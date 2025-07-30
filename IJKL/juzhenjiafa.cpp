#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
using namespace std;
int main()
{
	int n,m;
    cin >> n >> m;
    int a[n][m],b[n][m];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << el;
    }
    return 0;
}