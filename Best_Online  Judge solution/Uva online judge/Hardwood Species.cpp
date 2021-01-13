#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        scanf("\n");
        map<string,int>mp;
        char str[100000];
        int i,j,cnt=0,flag=0,sum=0;
        double cover;
        while(gets(str)){
                if(strlen(str)==0)
                    break;
                mp[str]++;
            }
            for(map<string,int>:: const_iterator it=mp.begin();it!=mp.end();++it){
                sum+=it->second;
            }
            for(map<string,int>::const_iterator it=mp.begin();it!=mp.end();++it){
                cout <<it->first<<' ';
                cover=((double)it->second/(double)sum)*100.0;
               printf("%.4lf\n",cover);
            }
            if(t>0)
                cout <<endl;
    }
    return 0;
}

