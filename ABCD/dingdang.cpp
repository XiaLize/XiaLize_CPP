#include <iostream>
using namespace std;

int main()
{
    int n,m,a2,a3;
    cin >> n >> m;
    while (n <= m){
        a2 = n % 2;
        a3 = n % 3;
        if (a2 == 0 && a3 == 0){
            cout << n <<": ding ding,dang dang" << endl;
        }
        else if (a3 == 0){
            cout << n <<": dang dang" << endl;
        }
        else if (a2 == 0){
            cout << n <<": ding ding" <<endl;
        }
        n++;
    }
    return 0;
}