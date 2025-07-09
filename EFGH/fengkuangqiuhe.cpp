#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n, m,f = 0;
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
                cout << min(a[i], a[j]) << " " << max(a[i], a[j]);
                f = 1;
            }
        }
    }
    if (f == 0) cout << "No Answer";
    return 0;
}