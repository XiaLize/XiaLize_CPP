#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,begin;
    cin >> n;
    int xi[n];
    for(int i = 0; i < n; i++)
    {
        cin >> xi[i];
    }
    if (n == 3)
    {
        cout << "1" << " " << "2" << " " << "3";
        return 0;
    }
    int temp = xi[0] + xi[1] + xi[2];
    for (int i = 0;i < n - 2;i++)
    {
        if((xi[i] + xi[i+1] + xi[i+2]) > temp)
        {
            temp = xi[i] + xi[i+1] + xi[i+2];
            begin = i;
        }
    }
    cout << begin + 1 << " " << begin + 2 << " " << begin + 3;
    return 0;
}
/*题目描述
小华在期末考试发挥良好，在n天内，妈妈允许她每天吃xi颗奶糖（xi可能为负数）。小华想要知道她连续三天吃糖果最多的是哪三天。
输入
第一行一个整数n表示天数；

第二行n个整数数表示每天吃xi颗奶糖

输出
输出一行3个整数，中间用空格隔开
样例输入 Copy
7
10 -5 -7 -13 14 -4 13
样例输出 Copy
5 6 7*/