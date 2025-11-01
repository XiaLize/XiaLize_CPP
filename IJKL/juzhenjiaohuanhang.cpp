#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
using namespace std;
int main()
{
	int a[5][5],n,m;
    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j < 5;j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> m >> n;
    for(int i = 0;i < 5;i++)
    {
        swap(a[m - 1][i],a[n - 1][i]);
    }
    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j < 5;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << el;
    }
    r0;
}