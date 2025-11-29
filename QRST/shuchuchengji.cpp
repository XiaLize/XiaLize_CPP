#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int a[1001];
int main()
{
    double n,sum=0,pg;
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        sum+=a[i];
    }
    pg = sum/n;
    printf("%.3lf\n",pg);
    for(int i = 1;i <= n;i++)
    {
        if (a[i] >= pg)
        {
            cout << a[i] << el;
        }
    }
    r0;
}