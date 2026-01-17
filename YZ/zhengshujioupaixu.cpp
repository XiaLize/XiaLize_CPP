#include<bits/stdc++.h>
using namespace std;
int a[11],b[11];
int temp1(int o,int p) 
{
	return o>p;
}
int main()
{
	int i=0,j=9,m;
	for(m=0; m<10; m++)
		cin>>a[m];
	for(m=0; m<10; m++) 
	{
		if(a[m]%2==1) 
		{
			b[i]=a[m];
			i++;
		} 
		else 
		{
			b[j]=a[m];
			j--;
		}
	}
	sort(b,b+i,temp1);
	sort(b+i,b+10);
	for(i=0; i<10; i++)
		cout<<b[i]<<" ";
	return 0;
}