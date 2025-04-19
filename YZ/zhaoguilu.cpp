#include <iostream>
using namespace std;
int main()
{
    int a,k,n,temp;
    cin >> a >> k >> n;
    temp = a;
    cout << a << " ";  
    for (int i = 1;i < n;i++)
    {
        a = a + (temp + (k * i));
        cout << a << " ";
    }
}