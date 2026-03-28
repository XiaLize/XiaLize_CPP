#include<bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define el endl
#define r0 return 0
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int len[300];
int main()
{
    string str;
    getline(cin,str);
    int j=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!=' '){
            len[j]++;
        }
        else if(len[j]!=0){
            j++;
        }
    }
    for(int i=0;i<=j;i++){
        if(i==j-1){
            cout<<len[i];
        }
        else{
            cout<<len[i]<<",";
        }
    }
    r0;
}