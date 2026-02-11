#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    int n,b = 1;
    cin >> n;
    int a[n+1][n+1] = {};
    for (int i = 1;i <= n;i++)
    {
        if(i % 2)
        {
            for (int j = 1;j <= i;j++)
            {
                a[i][j] = b;
                b++;
            }
        }
        else
        {
            for (int j = i;j >= 1;j--)
            {
                a[i][j] = b;
                b++;
            }
        }
    }
    for (int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            if(!a[i][j])
            {
                continue;
            }
            else
            {
                cout << a[i][j] << " ";
            }
        }
        cout << el;
    }
    r0;
}