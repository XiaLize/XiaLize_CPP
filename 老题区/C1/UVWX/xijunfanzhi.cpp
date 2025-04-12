#include <iostream>
using namespace std;
int mouths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    int beginmouth,beginday,count,endmouth,endday,days = 0;
    cin >> beginmouth >> beginday >> count >> endmouth >> endday;
    if (beginmouth == endmouth)
    {
        days = endday - beginday;
    }
    else
    {
        days += mouths[beginmouth] - beginday;
        for (int i = beginmouth + 1; i < endmouth; i++)
        {
            days += mouths[i];
        }
        days += endday;
    }

    int result = count * (1 << days);
    cout << result << endl;
    return 0;
}