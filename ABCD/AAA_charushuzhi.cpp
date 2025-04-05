#include<iostream>
using namespace std;
int A[1001];
int main()
{
    int n,x,i,temp;
    cin >> n;
    for(i = 1;i <=n;i++)
    {
        cin >> A[i];
    }
    cin >> x;
    for (i = 1;i <= n;i++)
    {
        if(A[i] > x)
        {
            temp = i;
            break;
        }
    }
    for (i = 1;i < temp;i++)
    {
        cout << A[i] << " ";
    }
    cout << x << " ";
    for (i = temp;i <= n;i++)
    {
        cout << A[i] << " ";
    }
}