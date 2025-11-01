#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
using namespace std;
int main()
{
	int n,m,k,sum = 0,sum1 = 0,temp = 1;
    cin >> n >> m >> k;
    k--;
    int a[n][m];
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < m;i++)
    {
        int j = i;
        sum1 = 0;
        while(j < m)
        {
            if (a[k][j] != 0)
            {
                sum1++;
            }
            else
            {
                break;
            }
            j++;
        }
        sum = max(sum1,sum);
    }
    cout << sum;
    r0;
}