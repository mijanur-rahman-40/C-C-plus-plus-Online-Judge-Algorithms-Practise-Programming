#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num,c,arr[100],mn,mx=-100000;
     scanf("%d%d",&num,&c);
     for(int i=0;i<num;i++){
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<(num-1);i++){
            mn=(arr[i]-arr[i+1]-c);
            if(mn>mx)
            mx=arr[i]-arr[i+1]-c;
     }
     if(mx<0){
          printf("0\n");
     }
     else{
          printf("%d\n",mx);
     }
return 0;
}
