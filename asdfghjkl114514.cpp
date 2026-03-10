#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    int t;
    cin >> t;
    string a;
    for(int i = 0;i <= t;i++)
    {
        getline(cin,a);
        int size1 = 0,ABC = 0,a123 = 0;
        if(a.size() >= 8)
        {
            size1++;
        }
        int j = 0;
        while(j <= a.size())
        {
            char _ = a[j];
            if (_ >= 'A' && _<= 'Z')
            {
                ABC++;
                break;
            }
            j++ ;
        }
        j = 0;
        while(j <= a.size())
        {
            char _ = a[j];
            if (_ >= '0' && _<= '9')
            {
                a123++;
                break;
            }
            j++;
        }
        if(size1 == 1 && ABC == 1 && a123 == 1 && i>=1) cout << "Y\n";
        else if(i>=1) cout << "N\n";
    }
    r0;
}
