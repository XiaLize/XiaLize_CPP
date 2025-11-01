#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
char a[9999999] ;
int main()
{
	IOS;
	int n,r,a1 = 1,a2,b = -1;
	cin >> n >> r;
	while(a1 != 0) 
	{
		b++;
		a2 = n % r;
		a1 = (n - a2) / r;
		a[b] = 64 + a2;
	}
	for(int i = b-1;i <= 0;i--)
	{
		cout << a[i];
	}
	return 0;
}
//10a
//11b
//12c
//13d
//14e
//15f
//16g 
//17h
//18i
//19j
//20k
//21l
//22m
//23n
//24o
/*题目描述
小美刚刚学习了十六进制，她觉得很有趣，想到是不是还有更大的进制呢？在十六进制中，用 A 表示 10、F 表示 1
5。如果扩展到用 Z 表示 35，岂不是可以表示 36 进制数了嘛！
所以，你需要帮助她写一个程序，完成十进制转 R 进制（2≤R≤36）的工作。
输入格式
输入两行，第一行包含一个正整数 N，第二行包含一个正整数 R，保证 1≤N≤10 
6
输出格式
输出一行，为 N 的 R 进制表示。

输入输出样例
输入 #1复制

123
25
输出 #1复制

4N*/
