#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n + 1][m + 1],b[n + 1][m + 1];
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= m;j++)
        {
            cin >> a[i][j];
        }
    }
        for (int i = 0;i <= n;i++)
    {
        for (int j = 0;j <= m;j++)
        {
            b[i][j] = a[i][j];
        }
    }
    for (int i = 1;i <= n;i++)
    {
        sort(b[i],b[i]+m);
        cout << b[i][m] << " " << i << " " << m << el;
    }
    for (int i = 1;i <= m;i++)
    {
        sort(b[i],b[i]+n);
        cout << b[i][n] << " " << i << " " << n << el;
    }
    r0;
}
/* 题目描述
输入两个n行m列的矩阵A，输出每行最大数和所在的位置；每一列的最小数和所在的位置
输入
第一行包含两个整数n和m，表示矩阵的行数和列数(1≤n≤100，1≤m≤100)。
接下来n行，每行m个整数，表示矩阵A的元素。
相邻两个整数之间用单个空格隔开，每个元素均在1~1000之间。

输出
输出n行，每行最大数和所在位置；
输出m行，每列的最小数和所在位置；
中间空格表示。
样例输入 Copy
5 6
11 25 96 2 45 3
2 58 63 1 24 230
153 1 586 0 25 89
25 87 36 4 87 98
5 85 4 8 78 6
样例输出 Copy
96 1 3
230 2 6
586 3 3
98 4 6
85 5 2
2 2 1
1 3 2
4 5 3
0 3 4
24 2 5
3 1 6 */