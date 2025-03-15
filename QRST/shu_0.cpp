#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int shuliang = 0;
    for (int i = n; i >= 5; i /= 5)
    {
        shuliang += i / 5;
    }
    cout << shuliang;
    return 0;
}