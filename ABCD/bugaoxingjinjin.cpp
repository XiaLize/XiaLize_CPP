#include<iostream>
using namespace std;
int main()
{
    int max1 = 8,temp = 0;
    for (int i = 1; i <= 7; i++)
    {
        int xuexiao,buxiban,time;
        cin >> xuexiao >> buxiban;
        time = xuexiao + buxiban;
        if (time > max1)
        {
            max1 = time;
            temp = i;
        }
    }
    if (max1 = 0)
    {
        cout << "0";
    }
    else
    {
        cout << temp;
    }
    return 0;
}