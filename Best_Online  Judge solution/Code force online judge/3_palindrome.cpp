
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int  num,temp;
   scanf("%d",&num);
   if(num=1){
    cout<<"a"<<endl;
   }
   else if(num==2){
    cout<<"aa"<<endl;
   }
   else if(num==3){
    cout<<"aab"<<endl;
   }
   else {
    temp=num%4;
    //cout<<temp<<endl;
    for(int i=1; i<=num/4; i++){
     cout<<"aabb";
    }

   if(temp==1){
    cout<<"a";
   }
   if(temp==2){
    cout<<"aa";
   }
   else if(temp==3){
    cout<<"aab";
   }
   }
return 0;
}
