/*
#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000
#define LIM 10000
int flagArr[MAX>>6];
#define ifComp(x) (flagArr[x>>6]&(1<<((x>>1)&31)))
#define isComp(x) (flagArr[x>>6]|=(1<<((x>>1)&31)))
void BitSeive()
{
       register int i,j,k;
       for(i=3;i<LIM;i+=2)
       {
              if(!ifComp(i))
              {
                     for(j=i*i,k=i<<1;j<MAX;j+=k)
                            isComp(j);
              }
       }
       printf("2 ");
       for(i=3,j=2;i<MAX && j<5754;i+=2)
       {
              if(!ifComp(i))
              {
                     printf("%d ",i);
                     j++;
              }
       }
}
int main() {
       BitSeive();
       return 0;
}
*/



#include<bits/stdc++.h>
using namespace std;
int N =10000000;//prime[100];
int status[10000000/32];
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
void sieve()
{
    int sqrtN =int(sqrt(N));
    for(int i=3; i<=sqrtN; i+=2){
  if(Check(status[i/32],i%32) == 0)
   {
   for(int j=i*i; j<=N; j+=2*i){
   status[j/32]=Set(status[j/32],j % 32) ;
        }
      }
    }
    puts("2");
    for(int i=3; i<=N; i+=2){
         if( Check(status[i/32],i%32)==0)
          printf("%d\n",i);
    }
}
int main()
{
    sieve();
}
