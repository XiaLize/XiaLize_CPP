#include<iostream>
using namespace std;
int main()
{
    int m,n,temp,out;
    cin >> m >> n;
    if (m > n || n > 300 || m < 0)
    {
        return false;
    }
    for (int i = m; i <= n;i++)
    {
        temp = i%2;
        if (temp == 1)
        {
            out = out + i;
        }
    }
    cout << out;
    return 0;
}