#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;cin>>tst;
    while(tst--){
        char str[1000];
         char ch;
         map<string,int>mp;
        while(scanf("%s%c",str,&ch))
        {
            mp[str]++;
            if(ch=='\n')
            {
                break;
            }
        }
        map<string,int>::iterator it;
        int coun=0;
        for(it=mp.begin();it!=mp.end();it++){
            coun++;
        }
        cout<<coun<<endl;
    }
    return 0;
}
