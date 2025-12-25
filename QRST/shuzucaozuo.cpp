#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int _[101],k,n,m,a,b;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cout << i <<" ";
    }
    for(int shabi=1;shabi<=n;shabi++)
    {

        cout<<endl;
        for(int i=1;i<=m;i++)
        {
            for(int i=1;i<=n;i++)
            {
                _[i]=i;
            }
            cin>>k;
            if(k==1)
            {
                cin>>a>>b;
                swap(_[a],_[b]);
                for(int j=1;j<=n;j++)
                {
                    cout<<_[j] << " ";
                }

            }
            if(k==2)
            {
                cin>>a;
                _[a]=0;
                for(int j=a+1;j<=n;j++)
                {
                    swap(_[j],_[j-1]);
                }
                for(int j=1;j<n;j++)
                {
                    cout<<_[j] << " ";
                }
            }
        }
    }
    r0;
}
