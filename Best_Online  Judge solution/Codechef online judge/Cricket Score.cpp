#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    int  ru = 0, wic = 0;
    int coun = 0;
    for(int i=1; i<=num; i++){
        int run,wicket;
        scanf("%d%d",&run,&wicket);
        if( ru<=run && wic<=wicket && wicket<=10){
            ru = run;
            wic = wicket;
            coun++;
        }
    }
    if(coun==num) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
