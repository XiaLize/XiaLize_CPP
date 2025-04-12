#include<iostream>
using namespace std;

int main()
{
    int n,i1;
    i1 = 0;
    cin >> n;
    if (n > 10000)
    {
        return false;
    }
    for (int i;i <= n;i++)
    {
        i1 = i1 + i;
    }
    cout << i1;
}