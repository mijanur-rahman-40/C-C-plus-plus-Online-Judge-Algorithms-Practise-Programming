#include<bits/stdc++.h>
using namespace std;
int dec_to_bin(int num)
{
     int ans=0,mod,mul=1;
     while(num>0){
          mod=num%2;
          ans=ans+mul*mod;
          mul=mul*10;
          num=num/2;
     }
     return ans;
}
int main()
{
     int tst,j=1;
     cin>>tst;
     while(tst--){
     int Ad,Bd,Cd,Dd;  int Ab,Bb,Cb,Db;
    scanf("%d.%d.%d.%d",&Ad,&Bd,&Cd,&Dd);
    scanf("%d.%d.%d.%d",&Ab,&Bb,&Cb,&Db);
     if(dec_to_bin(Ad)==Ab && dec_to_bin(Bd)==Bb && dec_to_bin(Cd)==Cb && dec_to_bin(Dd)==Db)
    printf("Case %d: Yes\n",j++);
  else
      printf("Case %d: No\n",j++);
     }
     return 0;
}
