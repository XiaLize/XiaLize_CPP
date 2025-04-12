#include<iostream>
using namespace std;
long long A[2001];
int main()
{
    long long n,x,i,f = 0;
    cin >> n;
    for(i = 1;i <=n;i++)
    {
        cin >> A[i];
    }
    cin >> x;
    for(i = 1;i <= n;i++)
    {
        if(A[i] > x && f==0)
        {
            cout << x << " " ;
            f = 1;
        }
        cout << A[i] << " ";
    }
}