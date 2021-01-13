//nesar code a problem ase.

#include<bits/stdc++.h>
using namespace std;
long long arr[9999999]={0};
long long N=9999999;
void sieve()
{
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;
    for( int i=4; i<N; i=i+2){
        arr[i]=1;
    }
    for( int i=3; i<=sqrt(N); i=i+2){
        if(arr[i]==0){
            for( int j=i*i; j<=N; j+=i)
            arr[j]=1;
        }
    }
}
long long  reverse(long long  n)
{
      int tmp,rev=0,reverse_number;
      while(n>0){
            rev=10*rev+(n%10);
            n=n/10;
      }
      reverse_number=rev;
      return reverse_number;
}
int main()
{
    sieve();
   long long int n,rev,revers,num,mod;
    while(scanf("%lld",&n)==1){
          num=n;
    if(arr[n]==0){
          long long  revers=reverse(n);
         if(arr[revers]==0 && revers!=num){
          printf("%lld is emirp.\n",num);
     }
     else
          printf("%lld is prime.\n",num);
    }
    else
         printf("%lld is not prime.\n",num);
    }
    return 0;
}
/*

#include<bits/stdc++.h>
using namespace std;
int is_prime(long int num)
{
        if(num==1)
    return 0;
          if(num==2)
    return 1;
        if(num%2==0)
    return 0;
    for(int i=3;i<=sqrt(num);i+=2)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    long int num,mum,sum,flag,flag1,mod;
    while(scanf("%ld",&num)==1){
        sum=0,flag=0,flag1=0;
        if(is_prime(num)==1)
          flag=1;
        if(flag==1){
             mum=num;
          while(mum!=0){
                    mod=mum%10;
                sum=((sum*10)+mod);
                mum/=10;
            }
            if(is_prime(sum)==1)
            flag1=1;
        }
        if(flag1==1 && num!=sum)
            printf("%ld is emirp.\n",num);
        else if(flag==1)
            printf("%ld is prime.\n",num);
        else
            printf("%ld is not prime.\n",num);
    }
    return 0;
}
*/
