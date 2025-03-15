#include <iostream>
using namespace std;
int main()
{
    int zongshu = 0,dancishu;
    double pingjun,n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> dancishu;
        zongshu = zongshu + dancishu;
    }
    pingjun = zongshu / n;
    cout << zongshu << " ";
    printf("%.5lf", pingjun);
    return 0;
}