#include <iostream>
using namespace std;
int main()
{
    double R,R1,M,Y;
    cin >> R >> M >> Y;
    R1 = 1+(R*0.01);
    for (int i = 1; i <= Y; i++)
    {
        M *= R1;
    }
    cout << (int)M;
    return 0;
}