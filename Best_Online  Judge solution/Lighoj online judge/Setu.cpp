#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1;
     cin>>tst;
     while(tst--)
     {

          int tst1,sum=0;
          cin>>tst1; printf("Case %d:\n",j++);
          for(int i=0;i<tst1;i++){
          string str; int  num;
          cin>>str;
          if(str=="donate")
          {
          cin>>num;
          sum+=num;
          }
          else{
         printf("%d\n",sum);
          }
          }
     }
     return 0;
}
