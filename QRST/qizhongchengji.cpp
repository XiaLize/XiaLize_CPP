#include <iostream>
using namespace std;
int main()
{
    int m,n;
    double ping_jun,tong_guo_lu,tong_guo_ren_shu,zong;
    cin >> m;
    for(int i=1;i<=m;i++)
    {
        cin >> n;
        int fen_shu;
        zong = 0;
        tong_guo_ren_shu = 0;
        for(int j=1;j<=n;j++)
        {
            cin >> fen_shu;
            zong+=fen_shu;
            if(fen_shu>=60)
            {
                tong_guo_ren_shu++;
            }
        }
        tong_guo_lu=tong_guo_ren_shu/n;
        ping_jun=zong/n;
        printf("%.2lf ",ping_jun);
        printf("%.2lf\n",tong_guo_lu);
    }
}