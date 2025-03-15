#include <iostream>
using namespace std;
int main()
{
    int m,n,shibai = 0,chenggong = 0;
    cin>>m>>n;
    int zongshu=m,n1 = n;
    for(int i=1;i<=n;i++)
    {
        int shuliang;
        cin>>shuliang;
        if(zongshu<shuliang)
        {
            shibai++;
            n1--;
        }
        else if (zongshu>=shuliang)
        {
            chenggong++;
            zongshu-=shuliang;
            n1--;
        }
    }
    cout<<shibai<<" ";
    return 0;
}