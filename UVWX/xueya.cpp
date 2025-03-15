#include <iostream>
using namespace std;
int main() {
    int n,zuichangshijian = 0,dangqianshijian = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int shousuo, shuzhang;
        cin >> shousuo >> shuzhang;
        if (shousuo >= 90 && shousuo <= 140 && shuzhang >= 60 && shuzhang <= 90) {
            dangqianshijian++;
        } else {
            if (dangqianshijian > zuichangshijian) {
                zuichangshijian = dangqianshijian;
            }
            dangqianshijian = 0;
        }
    }

    if (dangqianshijian > zuichangshijian) {
        zuichangshijian = dangqianshijian;
    }
    cout << zuichangshijian << endl;
    return 0;
}
