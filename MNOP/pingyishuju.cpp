#include <iostream>
using namespace std;
int a[10001];
int main()
{
    int aa,n;
    cin >> aa >> n;
    for (int i = 1;i <= aa;i++)
    {
        cin >> a[i];
    }
    for (int i = aa-n+1;i <= aa;i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 1;i <= aa-n;i++)
    {
    cout << a[i] << " ";
    }
    return 0;
}
