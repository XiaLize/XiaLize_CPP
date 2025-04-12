#include <iostream>
using namespace std;
int main()
{
    int znl = 0;
    double n,pj;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int dcnl;
        cin >> dcnl;
        znl = znl + dcnl;
    }
    pj = znl / n;
    printf("%0.2lf",pj);
    return 0;
}
