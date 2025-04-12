#include<iostream>
using namespace std;
int main()
{
    int apple[10],taotao,gao,shuliang = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> apple[i];
    }
    cin >> taotao;
    gao = taotao + 30;
    for(int i = 0; i < 10; i++)
    {
        if(apple[i] <= gao)
        {
            shuliang++;
        }
    }
    cout << shuliang << endl;
    return 0;
}