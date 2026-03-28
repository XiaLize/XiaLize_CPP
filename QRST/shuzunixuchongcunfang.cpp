#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define return 0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
	IOS;
	int n;
	cin >> n;
	int a[n+1];
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for (int i = n;i >= 1;i--)
	{
		cout << a[i] << " ";
	}
	return 0;
}