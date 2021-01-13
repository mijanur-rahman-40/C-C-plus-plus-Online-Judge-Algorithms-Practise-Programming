
#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
vector<string>vec;
int main()
{
    int tst,blank=1;
    while(scanf("%d",&tst)==1){
            for(int i=0; i<tst; i++){
                    string str;
                     cin>>str;
                   vec.push_back(str);
            }
            for(int i=0; i<tst; i++){
                string str2;
                cin>>str2;
                int price,boy,sum,per;
                scanf("%d%d",&price,&boy);
                if(boy!=0){
                    per=price/boy;
                    sum=per*boy;
                for(int j=0; j<boy; j++){
                   string str;
                   cin>>str;
                   mp[str]=mp[str]+per;
                   //cout<<str<<" ="<<mp[str]<<endl;
                }
            mp[str2]=mp[str2]-sum;
                }
                //cout<<str2<<" ="<<mp[str2]<<endl;
            }
            if(blank!=1)
                cout<<endl;
            for(int i=0; i<tst; i++){
                cout<<vec[i]<<" "<<mp[vec[i]]<<endl;
            }
            mp.clear();
            vec.clear();
            blank++;
    }
    return 0;
}
/*
5
dave laura owen vick amr
dave 200 3 laura owen vick
owen 500 1 dave
amr 150 2 vick owen
laura 0 2 amr vick
vick 0 0


dave 302
laura -84
owen -359
vick 66
amr -75

*/
