#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t[10001] = {0};
	cin >> n;
	int a[n+1];
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		t[a[i]]++;
	}
	for(int i = 0; i <= 10000; i++) {
		if(t[i] > 0)
		{
			cout << i << " " << t[i] << endl;
		}
	}
	return 0;
}
/*
统计数字次数
题目描述
输入n个数，统计它们出现的次数，最多不超过10000个数
输入
第一行，输入个数
第二行，输入有哪几个具体数，最大不大于10000
输出
数字从小到大，每个数字出现的次数，先数字，中间空格，后次数，换行
样例输入 Copy
7
8 9 12 8 12 1 8
样例输出 Copy
1 1
8 3
9 1
12 2*/
