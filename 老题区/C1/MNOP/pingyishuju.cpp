#include <iostream>
using namespace std;
int a[99999];
int main()
{
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    cout << a[n] << " ";
    for (int i = 1;i < n;i++)
    {
        cout <<a[i] << " ";
    }
}