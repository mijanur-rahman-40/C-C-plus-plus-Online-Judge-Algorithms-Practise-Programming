#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){
        int X1,X2,X3,v1,v2;
        scanf("%d%d%d%d%d",&X1,&X2,&X3,&v1,&v2);
        int Kefa_Dif;
        int chef_Dif;
        chef_Dif = X3 - X1;
        Kefa_Dif = X2 - X3;
        float Chef_time  = (float)chef_Dif/(float)v1;
        float kefa_time = (float)Kefa_Dif/(float)v2;
        if(Chef_time == kefa_time) cout<<"Draw"<<endl;
        else if(Chef_time < kefa_time) cout<<"Chef"<<endl;
        else cout<<"Kefa"<<endl;
    }
    return 0;
}
