#include <iostream>
using namespace std;
int main()
{
    double n,cout = 0;
    cin >> n;
    cout = 1/1;
    for (int i = 2; i <= n; i++)
    {
        if(i%2 == 0)
        {
            cout -= 1.0/i;
        }
        else
        {
            cout += 1.0/i;
        }
    }
    printf("%.4lf",cout);
    return 0;
}
