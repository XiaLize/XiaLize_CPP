#include<iostream>
using namespace std;
int main()
{
    int x,y,y2,y3,z,day;
    cin >> x >> y >> z;
    y2 = y;
    y3 = y;
    for (day = 1; day <= 50; day++)
    {
        if (day == 1)
        {
            cout << "NO." << day << " " << x << " " << y <<"\n";
        }
        else
        {
            y3 += z;
            y2 += y3;
            cout << "NO." << day << " " << x * day << " " << y2 << "\n";
        }
        if (x*day < y2)
        {
            cout << day;
            return 0;
        }
    }
    cout << "NO";
}
