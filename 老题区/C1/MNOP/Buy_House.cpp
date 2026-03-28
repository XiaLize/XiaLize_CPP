#include <iostream>

using namespace std;

int main() {
    int N, K, year;
    double cunkuan = 0, fangjia = 200;
    cin >> N >> K;
    for (year = 1; year <= 20; year++)
    {
        cunkuan += N;
        if  (year != 1)
        {
            fangjia *= (1 + K / 100.0);
        }
        cout << "��" << year << "�깤��:" << cunkuan << " ����:";
        printf("%.2lf\n", fangjia);
        if (cunkuan >= fangjia) {
            cout << year << endl;
            return 0;
        }
    }
    cout << "Impossible" << endl;
    return 0;
}