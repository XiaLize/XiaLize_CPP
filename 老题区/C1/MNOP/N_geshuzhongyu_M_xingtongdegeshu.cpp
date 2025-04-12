#include <iostream>
using namespace std;
int main()
{
    int N,m,dancishu,shabi;
    cin >> N >> m;
    for (int i = 1; i <= N; i++)
    {
        cin >> dancishu;
        if (dancishu == m)
        {
            shabi++;
        }
    }
    cout << shabi;
}