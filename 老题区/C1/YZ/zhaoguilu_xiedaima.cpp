#include <iostream>
using namespace std;
int main()
{
    int n,m,temp = 1,temp1 = 2;
    cin >> n >> m;
    for (int i = 1; i <= n-1; i++)
    {
        cout << temp * m << " ";
        temp = temp + temp1;
        temp1++;
    }
    cout << temp * m;
    return 0;
}