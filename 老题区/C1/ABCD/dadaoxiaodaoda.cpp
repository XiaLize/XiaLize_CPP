#include<iostream>
using namespace std;
int main()
{
    int sb,sb1;
    cin >> sb;
    sb1 = sb - 1;
    for (int i = 1; i < sb; i++)
    {
        cout << i << " ";
    }
    cout << sb << " ";
    for (int i = sb1;i > 0;i--)
    {
        cout << i << " ";
    }
    cout << "0";
}