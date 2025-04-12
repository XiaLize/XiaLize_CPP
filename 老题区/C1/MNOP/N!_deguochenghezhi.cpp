#include <iostream>
using namespace std;
int main()
{
    long long n, shabi = 1;
    cin >> n;
    cout << n << "!=1";
    if (n == 0)
    {
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        cout << "*"<<i ;
        shabi *= i;
    }
    cout << "=" << shabi;
    return 0;
}
