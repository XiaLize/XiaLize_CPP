#include<bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
	int n,x,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[x]++;
	}
	for(int i=1;i<=1000;i++)
	{
		if(a[i]>0)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
	for(int i=1;i<=1000;i++)
	{
		if(a[i]>0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}