#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1;
     cin>>tst;
     while(tst--){
     int n,p,Q,sum=0,coun=0;
     cin>>n>>p>>Q;
     for(int i=0;i<n;i++){
          int j;
          cin>>j;
          sum+=j;
          if(coun<p && sum<=Q)
          {
               coun++;
          }
     }
          printf("Case %d: %d\n",j++,coun);
     }

     return 0;
}
