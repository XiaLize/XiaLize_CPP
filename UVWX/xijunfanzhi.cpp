#include<bits/stdc++.h>
using namespace std;
int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    int m_begin, d_begin, count, m_end, d_end;
    cin >> m_begin >> d_begin >> count >> m_end >> d_end;
    int start_day = 0;
    for (int i = 1; i < m_begin; i++) {
        start_day += m[i];
    }
    start_day += d_begin;
    int end_day = 0;
    for (int i = 1; i < m_end; i++) {
        end_day += m[i];
    }
    end_day += d_end;
    int days = end_day - start_day;
    for (int i = 0; i < days; i++) {
        count *= 2;
    }
    cout << count;
    return 0;
}
/*题目描述
一种细菌的繁殖速度是每天成倍增长。例如: 第一天有 10 个,第二天就变成 20 个,第三天变成 40 个,第四天变成 80 个,......。现在给出第一天的日期和细菌数目,要你写程序求出到某一天的时候,细菌的数目。
输入
有 5 个整数,整数之间用一个空格隔开。第一个数表示第一天的月份,第二个数表示第一天的日期,第三个数表示第一天细菌的数目,第四个数表示要求的那一天的月份,第五个数表示要求的那一天的日期。已知第一天和要求的一天在同一年并且该年不是闰年,要求的一天一定在第一天之后。数据保证要求的一天的细菌数目在整数范围内。
输出
输出一行,该行包含一个整数,为要求的一天的细菌数。
样例输入 Copy
2 28 10 3 2
样例输出 Copy
40*/