#include<bits/stdc++.h>
using namespace std;
const  long  int maxn=10000000;
bool flag[maxn];
long int arr[maxn];
void sieve()
{   flag[0]=1;
    flag[1]=1;
    arr[2]=2;
    for(long int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(long int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            arr[i]=i;
        }
        if(maxn/i>=i){
            long int add=i*2;
            for(long int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}

int  sum(int num){
    long  int count = 0;
		 for (long int i=0;i<=num/2; i++) {
                if(flag[i]==0){
			long int a=arr[i]+arr[num-i];
			if(num==a) {
				count++;
			}
		}
		 }
		return count;
}
int main()
{
    sieve();
  long   int num,tst,i=1;
    scanf("%ld",&tst);
    while(tst--){
    scanf("%ld",&num);
     long  int ans=sum(num);
    printf("Case %ld: %ld\n",i++,ans);

}
return 0;
}
/*
int  sum(int num){
     int count = 0;
		for (int i=0;i<num; i++) {
			int x = primes[i];
			int y = num - x;
			if(x > y) {
				break;
			}

			if(flag[y] == 0) {
				count++;
			}
		}
		return count;
}

}*/
