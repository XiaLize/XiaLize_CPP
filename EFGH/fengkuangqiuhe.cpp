#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m,f = 0,temp,abc[2],max1 =1e9;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (a[i] + a[j] == n)
            {
                if(abs(a[i]-a[j])<max1)
                {
                	max1= abs(a[i]-a[j]);
                    abc[0] = a[i];
                    abc[1] = a[j];
                    f = 1;
                }
            }
        }
    }
    if (f == 0) 
    {
        cout << "No Answer";
        return 0;
    }
    else  cout << min(abc[0],abc[1])<< " " << max(abc[0],abc[1]);
}