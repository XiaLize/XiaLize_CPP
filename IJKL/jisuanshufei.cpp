#include<iostream>
using namespace std;
double price[10]  = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},buy_shuliang[10],zongjia = 0;
int main()
{
    for (int i = 0; i < 10;i++)
    {
        cin >> buy_shuliang[i];
        zongjia += buy_shuliang[i] * price[i];
    }
    printf("%.1f\n",zongjia);
}