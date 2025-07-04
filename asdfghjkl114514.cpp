#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s,k,sum,oh,om,os,temp;
    cin >> h >> m >> s >> k;
    sum += ((h*60*60) + (m*60) + s);
    sum += k;
    oh = sum /3600;
    temp = sum - (oh * 3600);
    om = (sum - temp) / 60;
    temp -= om * 60;
    os = temp;
    cout << oh << " " << om << " " << os;
    return 0;
}