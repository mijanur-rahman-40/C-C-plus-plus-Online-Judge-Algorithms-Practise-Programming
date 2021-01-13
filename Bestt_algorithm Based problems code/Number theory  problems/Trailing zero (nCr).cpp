//nCr ar ends a zero count nCr=n!/r!*(n-r)!;

#include<bits/stdc++.h>
using namespace std;
int num_2_or_5_coun(int N,int M)
{
     int sum=0;
     while(N>0){
          sum+=N/M;
          N=N/M;
     }
     return sum;
}
int main()
{
     int N,R,Tst,j=1;
     scanf("%d",&Tst);
     while(Tst--){
          scanf("%d%d",&N,&R);
          printf("Case %d:",j++);
          int i=num_2_or_5_coun(N,2);
          int k=num_2_or_5_coun(R,2);
          int m=num_2_or_5_coun(N-R,2);
          int j=num_2_or_5_coun(N,5);
          int l=num_2_or_5_coun(R,5);
          int n=num_2_or_5_coun(N-R,5);
          int ans2=i-k-m;
          int ans5=j-l-n;
          if(ans2>ans5){
           printf(" %d\n",ans5);
     }
     else{
          printf(" %d\n",ans2);
     }
     }
     return 0;
}


