#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int n,a[100],sum = 0;
int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n;i++)
    {
       for(int j = 1; j <= n;j++)
       {
            if(a[j] + a[i] == i)
            {
				sum++;
				break;
			}
       }
    }
    cout << sum;
    r0;
}
