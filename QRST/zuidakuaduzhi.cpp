#include <iostream>
using namespace std;
int main()
{
    int n,dancishu,dancishu2,xiao,da;
    cin >> n;
    cin >> dancishu >> dancishu2;
    da = max(dancishu,dancishu2);
    xiao = min(dancishu,dancishu2);
    for (int i = 1; i <= n/2-1; i++)
    {
        cin >> dancishu >> dancishu2;
        da = max(da,dancishu);
        da = max(da,dancishu2);
        xiao = min(xiao,dancishu);
        xiao = min(xiao,dancishu2);
    }
    cout << da-xiao;
    return 0;
}
