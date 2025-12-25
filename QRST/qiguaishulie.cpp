#include<bits/stdc++.h>
using namespace std;
int a[10],t[10],i,n,m,o;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++) {
		cin>>a[i];
		while(a[i]){
			o=a[i]%10;
			t[o]=1;
			a[i]=a[i]/10;
			//t[a[i]]=1;
		}
		
	}
	for(i=0;i<=9;i++) {
		if(t[i]==0) m=m+i;
	}
	cout<<m;
}