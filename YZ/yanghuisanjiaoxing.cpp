#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int a[20][20],n;
int main()
{
    
    cin >> n;
    a[1][1]=1; 
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        	a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
    }
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=i;j++)
    	{
    		cout << a[i][j] << " ";
		}
		cout <<endl;
		
	}
}
