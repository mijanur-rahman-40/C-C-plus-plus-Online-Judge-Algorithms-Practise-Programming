
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int flag=0;string str;
     for(int i=0;i<8;i++){
          cin>>str;
          for(int j=1;j<8;j++){
               if(str[j]==str[j-1])
               {
                    flag=1;
               }
          }
     }
     if(flag==1)
          printf("NO\n");
     else
          printf("YES\n");
     return 0;
}

