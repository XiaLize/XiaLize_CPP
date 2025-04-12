#include <iostream>
using namespace std;
int main() {
    double x,n;
    cin >> x >> n;
    for (int i = 1; i <= n; i++)
    {
        x = x + ((x * 0.1) / 100);
    }
    printf ("%.4lf",x);
    return 0;
}