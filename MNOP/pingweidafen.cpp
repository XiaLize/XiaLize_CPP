#include<iostream>
using namespace std;
int n,fenshu[101],sum = 0,max1 = 0,min1 = 100;
double fenshu1;
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> fenshu[i]; 
        max1 = max(max1,fenshu[i]);
        min1 = min(min1,fenshu[i]);
        sum += fenshu[i];
    }

    sum -= (min1 + max1);
    fenshu1 = sum / ((n-2) * 1.0);
    printf("%.2f\n",fenshu1);
}
