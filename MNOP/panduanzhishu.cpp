#include <iostream>
using namespace std;
int main()
{
	long long n;
    cin >> n;
    if (n == 1)
    {
        cout << "No";
        return 0;
    }
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
