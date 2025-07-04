#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 0) {
        cout << "0";
        return 0;
    }
    if(n < 0) {
        cout << "-";
        n = abs(n);
    }
    int output = 0;
    while (n != 0)
    {
        output = output * 10 + n % 10;
        n /= 10;
    }
    cout << output;
    return 0;
}