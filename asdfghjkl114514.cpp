#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    int m,n,k,p,price = 0;
    cin >> m >> n;
    int min_price[m + 1] = {};
    for(int i = 1;i <= n;i++)
    {
        cin >> k >> p;
        if(min_price[k] == 0) min_price[k] = p;
        else min_price[k] = min(min_price[k],p);
    }
    for(int i = 1;i <= m;i++)
    {
        price += min_price[i];
    }
    cout << price;
    r0;
}