#include<stdio.h>
#include<iostream>
#include<string>

bool PalCheck(int n,int m)
{
    int s=0,p=m;
    while(m>0)
    {
        s=s*10+m%10;
        m=m/10;
    }
    if(p<10)
    {
        s=s*10;
    }
    if(s==n) return 1;
    return 0;
}
using namespace std;

int main()
{
    string time;
    getline(cin,time);
    int hr,mn,tm,x=time.size();
    if(x==5)
    {
        hr=(time[0]-'0')*10+(time[1]-'0');
        mn=(time[3]-'0')*10+(time[4]-'0');
    }
    else if(x==4)
    {
        hr=time[0]-'0';
        mn=(time[2]-'0')*10+(time[3]-'0');
    }
    int ct=0;
    for(int i=hr; i<24; ++i)
    {
        for(int j=mn+1; j<60; ++j)
        {

            if(PalCheck(i,j)==1)
            {
                if(i<10)
                {
                    cout<<"0"<<i;
                }
                else cout<<i;
                cout<<":";
                if(j<10)
                {
                    cout<<"0"<<j;
                }
                else cout<<j;
                ct++;
                break;
            }
        }
        mn=0;
        if(ct>0) break;
    }
    if(ct==0)
    {
        cout<<"00:00"<<endl;
    }
    return 0;
}
