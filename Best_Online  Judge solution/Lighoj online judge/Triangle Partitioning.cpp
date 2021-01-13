
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;cin>>tst;
    int j=1;
    while(tst--){
       float ab,ac,bc,s,area_abc,ara_ade,ad;
        int rat;
        cin>>ab>>ac>>bc>>rat;
        s=(ab+bc+ac)/(float)2;

        area_abc=sqrt(s*(s-ab)*(s-bc)*(s-bc));

        ara_ade=(area_abc*(float)rat)/((float)1+(float)(rat));
        ad=sqrt(ara_ade/area_abc)*ab;

        cout<<"Case "<<j++<<": ";
        cout<<setprecision(9)<<ad<<endl;
    }
}

//or
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;cin>>tst;
    int j=1;
    while(tst--){
        float ab,ac,bc,ad,rat;
        cin>>ab>>ac>>bc>>rat;
        ad=sqrt(rat/(1+rat));
         cout<<"Case "<<j++<<": ";
        cout<<setprecision(9)<<ad*ab<<endl;
    }
    return 0;
}
*/
