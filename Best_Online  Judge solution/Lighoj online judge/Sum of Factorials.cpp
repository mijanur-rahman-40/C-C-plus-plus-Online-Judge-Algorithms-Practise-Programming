
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,c=1;
      long fact[30];
     cin>>tst;
          fact[0]=1;
          for(int i=1;i<=20;i++){
               fact[i]=fact[i-1]*i;
          }
          while(tst--){
          int j=20; stack<int>st;
             long int num;
             scanf("%ld",&num);
            while(j>=0){
              if(fact[j]<=num){
               num-=fact[j];
               st.push(j);
              }
              j--;
            }
              if(num==0){
               printf("Case %d: ",c++);
               while(st.size()!=1){
                    printf("%d!+",st.top());
                    st.pop();
               }
               printf("%d!\n",st.top());
               st.pop();
              }
              else
               printf("Case %d: impossible\n",c++);
         }
return 0;
}





















