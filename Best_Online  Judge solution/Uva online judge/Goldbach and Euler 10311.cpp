//nesar code ta com efficent
/*
#include<bits/stdc++.h>
using namespace std;
const long int maxn=100000005;
bool flag[maxn];
int arr[maxn];
void sieve()
{
    flag[0]=1;
    flag[1]=1;
    arr[2]=2;
    for(long int i=4;i<maxn; i+=2){
        flag[i]=1;
    }
    for(long int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            arr[i]=i;
        }
        if(maxn/i>=i){
             int add=i*2;
            for(long int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
void sum(long int num){
     long int a,b;
     int flag1=0;
		 for(long int i=0;i<=(num)/2;i++) {
                if(flag[i]==0){
			if(arr[i]+arr[num-i]==num) {
                    a=arr[i];
                    b=arr[num-i];
				flag1 =1;
				break;
			}
		}
		 }
          if(flag1==1){
          printf("%ld is the sum of %ld and %ld.\n",num,a,b);
		 }
       else{
          printf("%ld is not the sum of two primes!\n",num);
           flag1=0;
		 }

}
int main()
{

    sieve();
   long int num;
     while(scanf("%ld",&num) && num){
     sum(num);
}
return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
const long int maxn=100000005;
bool flag[maxn];
void sieve()
{
    flag[0]=1;
    flag[1]=1;
    flag[2]=0;
    for(long int i=4;i<maxn; i+=2){
        flag[i]=1;
    }
    for(long int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
        if(maxn/i>=i){
             int add=i*2;
            for(long int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
}
int main()
{
sieve();
    int num ,i,dif;
    while(scanf("%d",&num)==1)
    {
        int flag1 =0 ;
        if(num%2==1){
            dif= num-2 ;
            if(dif>2 && flag[dif]==false){
                printf("%d is the sum of %d and %d.\n",num,2,dif) ;
            }
            else
                printf("%d is not the sum of two primes!\n",num) ;
        }
        else{
               int a=num/2+1;
            for(i=a;i<num;i++){
                if(flag[i]==false && flag[num-i]==false && (num-i)%2==1){
                    printf("%d is the sum of %d and %d.\n",num,num-i,i) ;
                    flag1 =1 ;
                    break ;
                }
            }
            if(flag1==0){
                printf("%d is not the sum of two primes!\n",num) ;
            }
        }
    }
    return 0;
}

