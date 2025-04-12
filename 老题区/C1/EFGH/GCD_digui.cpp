#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    if (m < n)
    {
        int temp = m;
        m = n;
        n = temp;
    }
    int shabi = m % n;
    while (shabi != 0)
    {
        m = n;
        n = shabi;
        shabi = m % n;
    }

    cout << "gcd=" << n << endl;

    return 0;
}
