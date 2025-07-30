#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
using namespace std;
int main()
{
	int n,sum = 0,j,j2 = 0;
    cin >> n;
    int a[n],f[1000] = {0};
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
        f[a[i]] = 1;
    }
    sort(a,a+n);
    int Fmax = a[n - 1];
    if (f[0] != 0)
    {
        sum = 0;
        for(int i = 0;i < n;i++)
        {
            if (a[i] == 0) sum++;
        }
        cout << "0:" << sum << el;
    }
    else cout << "0:0" <<el;
    for (int i = 1;i <= Fmax;i++)
    {
        j = 0;
        j2++;
        if (f[i] != 0)
        {
            sum = 0;
            for(j = 0;j < n;j++)
            {
                if (a[j] == j2) sum++;
            }
            cout << i << ":" << sum << el;
        }
        else cout << i << ":0" << el;
    }
    return 0;
}
/* 题目描述
给定一个非负整数数组，统计里面每一个数的出现次数。我们只统计到数组里最大的数。
假设 Fmax（Fmax<10000）是数组里最大的数，那么我们只统计{0,1,2.....Fmax}里每个数出现的次数。
输入
第一行n是数组的大小。1 ≤ n ≤ 10000。
紧接着一行是数组的n个元素。
输出
按顺序输出每个数的出现次数，一行一个数。如果没有出现过，则输出0。
对于例子中的数组，最大的数是3，因此我们只统计{0,1,2,3}的出现频数。
样例输入 Copy
5
1 1 2 3 1
样例输出 Copy
0:0
1:3
2:1 
3:1 */