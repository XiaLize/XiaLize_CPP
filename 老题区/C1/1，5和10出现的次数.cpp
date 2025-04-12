#include <iostream>
using namespace std;
int main()
{
    int k,dancishu,cishu1 = 0,cishu5 = 0,cishu10 = 0;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> dancishu;
        switch (dancishu)
        {
        case 1:
            cishu1++;
            break;
        case 5:
            cishu5++;
            break;
        case 10:
            cishu10++;
            break;
        default:
            break;
        }
    }
    cout << cishu1 << endl << cishu5 << endl << cishu10;
}