#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
using namespace std;
int main()
{
	int n,m,x;
	cin >> n;
	cin >> m;
	int a[n + 1];
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i <= m;i++)
	{
		cin >> x;
		cout << a[x] << " ";
	}
	r0;
}