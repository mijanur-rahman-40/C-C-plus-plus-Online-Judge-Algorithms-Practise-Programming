#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1;cin>>tst;
     while(tst--){
          int x1,y1,x2,y2;
          cin>>x1>>y1>>x2>>y2;
          int M;cin>>M;
          cout<<"Case "<<j++<<":"<<endl;
          for(int i=0;i<M;i++){
               int x,y;cin>>x>>y;
               if((x1<=x && x2>=x) && (y1<=y && y2>=y)){
                    cout<<"Yes"<<endl;
               }
               else
                    cout<<"No"<<endl;
          }
     }
     return 0;
}
