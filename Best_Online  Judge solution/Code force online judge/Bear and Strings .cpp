#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str;
     int ans=0,x=0;
     while(cin>>str)
     {
          int len=str.size();
          for(int i=0;i<str.size();i++){
          if(str.size()>3 && str[i]=='b' && str[i+1]=='e' && str[i+2]=='a' && str[i+3]=='r')
           ans+=(i+1)*(len-i-3)-x*(len-i-3);
                    x=i+1;
     }
     printf("%d\n",ans);
     }
     return 0;
}
