#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,m,k;
   scanf("%lld%lld%lld",&n,&m,&k);
   if(k<n)
   {
       printf("%d 1\n",k+1);
       return 0;
   }
   k = k - n;
   long long int row = k / ( m - 1);
   row  = n - row ;
   long long int colum;
   if( row % 2 == 1)
   {
       colum = m - k % ( m - 1);
   }
   else{
      colum = k % ( m - 1) + 2;
   }
   printf("%lld %lld\n",row,colum);
}
