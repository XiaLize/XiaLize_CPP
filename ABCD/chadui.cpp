#include<iostream>
using namespace std;
int m[201];
int main()
{
    int n,a,shabi;
    cin >> n;
    
    for (int i = 1; i <= n;i++)
    {
        cin >> m[i];
    }
    cin >> a >>shabi;
    for (int i = 1;i <= a; i++)
    {
        cout << m[i] << " ";
    }
    cout << shabi << " ";
    for (int i = a+1;i <= n; i++)
    {
        cout << m[i] << " ";
    }
    return 0;
}
