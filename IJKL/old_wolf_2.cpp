#include<iostream>
using namespace std;
int main()
{
    int sb,sb1;
    cin >> sb >> sb1;
    for (int i = sb; i <= sb1; i++)
    {
        cout << "老狼老狼几点了？" << i << "点钟。"  << endl;
    }
    cout << "狼来了，快跑！";
    return 0;
}