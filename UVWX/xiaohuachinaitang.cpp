#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,temp,day = 0;
    cin >> n;
    int xi[n];
    for(int i = 0; i < n; i++) {
        cin >> xi[i];
    }
    temp = xi[0] + xi[1] + xi[2];
    for (int i = 1;i < n - 2;i++)
    {
        if (xi[i] + xi[i + 1] + xi[i + 2] > temp)
        {
            temp = xi[i] + xi[i + 1] + xi[i + 2];
            day = i + 1;
        }
    }
    cout << day << " " << day + 1 << " " << day + 2;
}