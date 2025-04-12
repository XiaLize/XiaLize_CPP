#include <iostream>
using namespace std;
int main() {
    int temp1, temp2;
    cin >> temp1 >> temp2;

    if (temp1 > temp2) {
        swap(temp1, temp2);
    }
    for (int i = temp1; i <= temp2; i += 2) {
        double huashi = 9.0 * i / 5 + 32;
        cout << i << " ";
        printf("%.1lf\n",huashi);
    }

    return 0;
}