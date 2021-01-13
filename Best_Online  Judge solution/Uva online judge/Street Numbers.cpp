#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=6,m=8,n1=1,n2=6;
     printf("%10d%10d\n",n,m);
     for(int i=0;i<9;i++){
          n=n2*6-n1;
          m=n+m+n2;
          n1=n2;
          n2=n;
          printf("%10d%10d\n",n,m);
     }
     return 0;
}
/*
         6         8
        35        49
       204       288
      1189      1681
      6930      9800
     40391     57121
    235416    332928
   1372105   1940449
   7997214  11309768
  46611179  65918161
*/
