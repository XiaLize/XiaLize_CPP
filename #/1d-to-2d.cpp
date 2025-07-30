#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
using namespace std;
int main()
{
	int x[12];
    int a = 0;
    for(int i = 0;i < 12;i++)
    {
        cin >> x[i];
    }
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            printf("%4d",x[a]);
            a++;
        }
        cout << el;
    }
}