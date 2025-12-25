#include<bits/stdc++.h>
using namespace std;
int a[100],s=0,i;
int main()
{
	int m,x,y,k,n,l,r,j,o;
	cin>>n>>m;
	for(i=1;i<=n;i++)cin>>a[i];
	for(i=1;i<=m;i++){
		cin>>k;
		if(k==1){
		  cin>>x>>y;
		  a[x]+=y;
		}
		if(k==2){
			cin>>x>>y;
			swap(a[x],a[y]);		
		}
		if(k==3){
			cin>>l>>r>>x;
			for(j=l;j<=r;j++){
				swap(a[j+x],a[j]);
			}			
		}
	}
	for(o=1;o<=n;o++){
		cout<<a[o]<<" ";
	}
	return 0;
}