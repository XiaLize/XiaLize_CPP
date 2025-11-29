#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
	IOS;
    double qian[11] = {0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},zongjia = 0;
    int mai[11] = {0};
    for(int i = 1;i <= 10;i++)
    {
        cin >> mai[i];
    }
    for(int i = 1;i <= 10;i++)
    {
        zongjia += qian[i]*mai[i];
    }
    cout << zongjia;
    r0;
}
/*计算概论 28.9元/本

数据结构与算法 32.7元/本

数字逻辑 45.6元/本

C++程序设计教程 78元/本

人工智能 35 元/本

计算机体系结构 86.2元/本

编译原理 27.8元/本

操作系统 43元/本

计算机网络 56元/本

JAVA程序设计 65元/本*/