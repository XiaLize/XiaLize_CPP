#include <iostream>
using namespace std;
int main()
{
    int dollar = 0,mum_dollar = 0,yue,yue_dollar = 0,yue2,f = 0;
    for (yue = 1;yue <= 12;yue++)
    {
        dollar += 300;
        cin >> yue_dollar;
        dollar -= yue_dollar;
        if (dollar < 0 && f == 0)
        {
            f = 1;
            yue2 = yue;
        }
        if (dollar >= 100)
        {
            mum_dollar += dollar-(dollar%100);
            dollar = dollar%100;
        }
    }
    if (f == 1)
    {
        cout << "-" << yue2;
    }
    else
    {
        cout << mum_dollar*1.2+dollar;
    }
    return 0;
}
