#include<iostream>
using namespace std;
int main()
{
    int n,m,out,temp;
    cin>>m >>n;
    if (m<=0 || n>1000)
    {
        return false;
    }
    out = 0;
    for (int i = m;i <= n;i++)
    {
        temp = i%17;
        if(temp == 0)
        {
            out = out + i;
        }
    }
    cout << out;
    return 0;
}