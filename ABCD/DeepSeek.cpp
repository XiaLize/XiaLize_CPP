#include<stdio.h>
#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
    char think;
    int i=1;
    cout << "��DeepSeek����Ϣ..."<<endl;
    while(i == 1)
    {
        cin >> think;
        cout << "thinking..." <<endl;
        Sleep(1000);
        cout << "<think>" << endl << " " << "</think>" << endl << "��������æ�����Ժ����ԡ�";
    }
}