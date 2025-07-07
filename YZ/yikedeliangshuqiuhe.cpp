#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m,f = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == m)
            {
                cout << min(a[i], a[j]) << "+" << max(a[i], a[j]) << endl;
                f = 1;
            }
        }
    }
    if (f == 0) cout << "No Answer";
    return 0;
}
/* 题目描述
一可小朋友给大家出了一个简单的题目：给定n个数和一个数m，问这n个数中是否存在两个数的和等于m。若有这样的数，把所有的可能全部列出来，小数在前，大数在后。
输入
两行，第一行为数n，m，第二行为n个数，每两个数之间用一个空格隔开。
输出
若存在，输出那两个数，小的数先输，大数在后，中间以“+”出现；否则输出“No Answer”（不带引号）。
样例输入 Copy
6 7
3 1 5 2 4 6
样例输出 Copy
3+4
1+6
2+5
提示
n<=100，每个数也都<=100。 */