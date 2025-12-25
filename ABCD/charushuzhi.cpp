#include <bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int A[1002];
int main()
{
    IOS;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    cin >> x;
    A[n+1] = x;
    sort(A+1,A+2+n);
    for (int i = 1; i <= n+1; i++)
    {
        cout << A[i] << " ";
    }
}