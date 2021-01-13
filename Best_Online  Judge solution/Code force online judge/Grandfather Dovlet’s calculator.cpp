#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
inline int segment_coun(int num)
{
     mp[0]= 6;
     mp[1]= 2;
     mp[2]= 5;
     mp[3]= 5;
     mp[4]= 4;
     mp[5]= 5;
     mp[6]= 6;
     mp[7]= 3;
     mp[8]= 7;
     mp[9]= 6;
     int sum=0,mod;
    while(num)
        {
            mod=num%10;
            sum+=mp[mod];
            num=num/10;
        }

     return sum;
}
int main()
{

    int a,b;
    int sum1=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
            sum1+=segment_coun(i);
       }
    cout<<sum1<<endl;
}
