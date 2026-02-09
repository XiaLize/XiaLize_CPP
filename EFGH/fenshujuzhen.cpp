#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
double n,sum;
int main()
{
    while(1)
    {
        sum = 0;
        cin >> n;
        if (n == 0) break;
        for(int i = 2;i <= n;i++)
        {
           sum += (n-i+1) * 2.0 * 1.0/i;
        }
        printf("%.2lf\n",sum+n);
    }
    r0;
}
