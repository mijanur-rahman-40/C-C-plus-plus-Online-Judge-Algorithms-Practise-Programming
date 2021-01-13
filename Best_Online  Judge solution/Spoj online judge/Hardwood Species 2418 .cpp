#include<bits/stdc++.h>
using namespace std;
map<string,double>mp;
int main()
{
    int tst;double cnt;
    string str;
    scanf("%d\n",&tst);
    while(tst--){
        mp.clear();
        cnt=0;
        while(1){
            getline(cin,str);
            if(str[0]=='\0')
                break;
            mp[str]++;
            cnt++;
        }
        map<string,double>:: iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            cout<<it->first<<" ";
            printf("%.4lf\n",(it->second/cnt)*100.00);
        }
        if(tst>0)
            printf("\n");
    }
    return 0;
}
