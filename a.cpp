#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    int AZ = 0,az1 = 0,_ = 0,a123 = 0;
    char temp;
    string a,ss;
    getline(cin,a);
    a=a+',';
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=',') ss=ss+a[i];
        else
        {
            if (ss.size() >= 6 && ss.size() <= 12)
            {
                for(int j = 0;j < ss.size();j++)
                {
                    temp = ss[j];
                    if (temp >= 'A' && temp <= 'Z') AZ = 1;
                    if (temp >= 'a' && temp <= 'z') az1 = 1;
                    if (temp >= '0' && temp <= '9') a123 = 1;
                    if (temp == '!' || temp == '@'|| temp == '#'|| temp == '$') _ = 1;
                    else _ = 0;
                }
            }
            if (AZ + az1 + a123 >= 2 && _) cout << ss << endl;
            AZ = 0; az1 = 0; _ = 0; a123 = 0;
            ss.clear();
        }
    }
    r0;
}