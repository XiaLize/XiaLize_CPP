#include<stdio.h>
#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
    char think;
    int i=1;
    cout << "给DeepSeek发消息..."<<endl;
    while(i == 1)
    {
        cin >> think;
        cout << "thinking..." <<endl;
        Sleep(1000);
        cout << "<think>" << endl << " " << "</think>" << endl << "服务器繁忙，请稍后再试。";
    }
}