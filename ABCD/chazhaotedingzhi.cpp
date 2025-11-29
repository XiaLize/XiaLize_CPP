#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    int n,x,f = 0;
    cin >> n;
    int a[n + 1];
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for(int i = 1;i <= n;i++)
    {
        if(a[i] == x)
        {
            cout << i;
            f++;
            break;
        }
    }
	if(f == 0)
    {
        cout << "-1";
    }
}