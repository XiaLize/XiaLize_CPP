#include <iostream>
using namespace std;
int main()
{
    int n,jin = 0,yin = 0,tong = 0,jin1 = 0,yin1 = 0,tong1 = 0,all = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> jin >> yin >> tong;
        jin1 += jin;
        yin1 += yin;
        tong1 += tong;
    }
    all = jin1 + yin1 + tong1;
    cout << jin1 << " " << yin1 << " " << tong1 << " " << all;
    return 0;
}
