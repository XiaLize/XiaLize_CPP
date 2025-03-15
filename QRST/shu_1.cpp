#include <iostream> 
using namespace std; 
int main()
 {
    long long n;
    cin >> n;
    int shuliang = 0;
    for (long long i = 1; i <= n; i++) {
        long long temp = i;
        while (temp) {
            if (temp % 10 == 1) {
                shuliang++;
            }
            temp /= 10;
        }
    }

    cout << shuliang << endl;
    return 0;
}