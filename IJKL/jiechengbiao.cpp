#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long long shabi = 1;
        for (int j = 2; j <= i; j++) {
            shabi *= j;
        }
        printf("%-4d",i);
        cout << shabi << endl;
    }
    return 0;
}