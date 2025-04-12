#include<iostream>
using namespace std;
int main()
{
	int a,b,m,ge,shi,bai,qian,shabi;
    double pingjunshu,geshu = 0,zongshu;
    cin >> a >> b >> m;
    for(int i=a;i<=b;i++)
    {
        shabi = i%m;
    	ge=i%10;
    	shi=i/10%10;
    	bai=i/100%10;
    	qian=i/1000;
    	if(ge==m||shi==m||bai==m||qian==m||i==m||shabi==0)
    	{
    		cout << i << " ";
            zongshu = zongshu + i;
            geshu++;
        }
    }
    cout << endl << geshu;
    cout << endl << zongshu;
    cout << endl;
    pingjunshu = zongshu / geshu;
    printf("%.5lf",pingjunshu);
}