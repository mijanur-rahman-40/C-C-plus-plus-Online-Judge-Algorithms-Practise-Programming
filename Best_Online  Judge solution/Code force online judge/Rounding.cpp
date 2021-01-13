#include<bits/stdc++.h>
using namespace std;
int main()
     {
     long int num,num1,A,B;
      cin>>num;int coun=0,coun1=0;
      num1=num;
         for(int i=0;i<5;i++){
               if(num%10==0)
               {
                  A=num;
                  break;
               }
               else
               num++;coun++;
            }
          for(int i=0;i<5;i++){
               if(num1%10==0)
               {
                  B=num1;
                  break;
               }
               else
               num1--;coun1++;
          }
          //cout<<coun<<" "<<coun1<<endl;
          if(coun==coun1){
               cout<<num<<endl;
          }
            else  if(coun<coun1)
          {
               cout<<A<<endl;
          }
          else
          {
               cout<<B<<endl;
          }
         return 0;
}

