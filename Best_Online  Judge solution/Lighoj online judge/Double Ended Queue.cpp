
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,j=1;cin>>tst;
    while(tst--){
     deque<int>dQ;
     int size,num2;
     cin>>size>>num2;
     int coun=0;string str;int num;
     printf("Case %d:\n",j++);
     for(int i=0;i<num2;i++){
          cin>>str;
          if(str=="pushLeft" || str=="pushRight"){
               cin>>num;
          if(dQ.size()==size){
            printf("The queue is full\n");
          }
        else if(str=="pushLeft"){
               dQ.push_front(num);
          printf("Pushed in left: %d\n",num);
         }
         else if(str=="pushRight") {
          dQ.push_back(num);
          printf("Pushed in right: %d\n",num);
         }
          }
          int sz=dQ.size();
          if(str=="popLeft" || str=="popRight"){
            if(dQ.size()==0){
               printf("The queue is empty\n");
          }
          else if( str=="popLeft"){
                    printf("Popped from left: %d\n",dQ.front());
               dQ.pop_front();
          }
          else if(str=="popRight"){
               printf("Popped from right: %d\n",dQ.back());
             dQ.pop_back();
          }
     }
    }
    dQ.clear();
    }
   return 0;
}
