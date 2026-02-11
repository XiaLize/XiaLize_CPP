#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    int n,t = 0;
    cin >> n;
    int a[n + 1] = {};
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    while(1)
    {
        int f = 1,tempmin = 2147483647,tempmax = -1,j,k,f1 = 0;
        for (int i = 1;i <= n;i++)
        {
            if(tempmin > a[i])
            {
                tempmin = a[i];
                j = i;
            }
        }
        for (int i = 1;i <= n;i++)
        {
            if(tempmax < a[i])
            {
                tempmax = a[i];
                k = i;
            }
        }
        a[k] -= a[j];
        for (int i = 1;i <= n;i++)
        {
            if(a[i] != 0)
            {
                if(a[i]) f1++;
                else f = 0;
            }
        }
        if (f || f1)
        {
            break;
        }
        t++;
    }
    cout << t;
    r0;
}