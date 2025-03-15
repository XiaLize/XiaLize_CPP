#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int zongshu = 0;
    for (int i = 1; i <= n; ++i)
    {
        long long dan_ci = 1;
        for (int j = 1; j <= i; ++j)
        {
            dan_ci *= j;
        }
        zongshu += dan_ci;
    }
    cout << zongshu << endl;
    return 0;
}