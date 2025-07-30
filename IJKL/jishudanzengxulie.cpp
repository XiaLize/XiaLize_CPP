#include<bits/stdc++.h>
using namespace std;
typedef double db;
typedef long long ll;
int main()
{
	int n,sum = 0;
    cin >> n;
    int a[n + 1],f[n + 1];
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 1)
        {
            sum++;
            f[sum] = a[i]; 
        }
    }
	sort(f+1,f+1+sum);
    for(int i = 1;i <= sum;i++)
    {
		cout << f[i];
		if(i != sum) cout << ",";
	}
	return 0; 
}
/*题目描述
给定一个长度为N（不大于500）的正整数序列，请将其中的所有奇数取出，并按升序输出。
输入
第1行为 N；
第2行为 N 个正整数，其间用空格间隔。
输出
增序输出的奇数序列，数据之间以逗号间隔。数据保证至少有一个奇数。
样例输入 Copy
10
1 3 2 6 5 4 9 8 7 10
样例输出 Copy
1,3,5,7,9*/