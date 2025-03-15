#include <iostream>
using namespace std;
int main()
{
    int n,n1,n0 = 1;
    cin >> n;
    n1 = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n0; j++) {
            cout << "-";
        }
        for (int j = 1; j <= n1; j++) {
            cout << "*";
        }
        n0++;
        n1--;
        cout << endl;
    }
    return 0;
}