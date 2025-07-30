#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
using namespace std;
int main()
{
    int n,m,m1;
    cin >> n >> m;
    int a[n + 1];
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    for(int i = 1;i <= m;i++)
    {
        cin >> m1;
        int f[m1 + 1];
        for(int j = 1;j <= m1;j++)
        {
            f[j] = a[j];
        }
        sort(f + 1,f + m1 + 1);
        cout << f[m1] << el;
    }
    return 0;
}
/*题目描述
给出一条长度为n的数组，接下来有m次提问，每次提问给出一个数x（x<=n）,找出前x个数中的最大数。
输入
第一行两个数n,m(10<=n,m<=20000)，分别表示数组长度和提问个数。
接下来n行，每行一个数，保证每个数均为小于10000的正整数。
最后是m个提问，共m行，每行一个数x。
输出
共m行，每行一个正整数。
样例输入 Copy
5 2
1
3
5
4
2
1
4
样例输出 Copy
1
5*/