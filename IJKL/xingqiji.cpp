#include <iostream>
using namespace std;
int main()
{
    long long day = 1,a,b;
    cin >> a >> b;
    for (int i = 1;i <= b;i++)
    {
        day *= a;
        day %= 7;
    }
    switch(day)
    {
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        default:
            cout << "Error!";
            break;
    }
    return 0;
}