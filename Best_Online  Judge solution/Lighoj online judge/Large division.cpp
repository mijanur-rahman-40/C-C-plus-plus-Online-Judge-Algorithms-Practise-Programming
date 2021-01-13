
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
     long long num,temp,ans,j=1;
     long tst;
     scanf("%ld",&tst);
     while(tst--){
              cin>>str;
                if(str[0]=='-'){
                  temp=str[1]-'0';
               }
               else{
               temp=str[0]-'0';
               }
               ans=temp;
             scanf("%lld",&num);
          for(int i=0;i<str.size()-1;i++){
              if(str[i]>='0'&& str[i]<='9'){
                  ans=ans%num;
                ans=ans*10+str[i+1]-'0';
               }
          }
     ans=ans%num;
     if(ans==0){
          printf("Case %lld: divisible\n",j++);
     }
        else{
        printf("Case %lld: not divisible\n",j++);
     }
     }
     return 0;
}
