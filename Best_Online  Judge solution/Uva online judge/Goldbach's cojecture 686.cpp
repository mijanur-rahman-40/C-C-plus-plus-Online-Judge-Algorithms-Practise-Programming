#include<bits/stdc++.h>
using namespace std;
const  int maxn=10000000;
bool flag[maxn];
int arr[maxn];
void sieve()
{
     flag[0]=1;
    flag[1]=1;
    arr[2]=2;
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            arr[i]=i;
        }
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}

int  sum(int num){
     int count = 0;
		 for (int i=0;i<=num/2; i++) {
			if((arr[i]+arr[num-i])==num)
            {
				count++;
			}
		}
		return count;
}
int main()
{
    sieve();
    int num,tst,i=1;
        while(scanf("%d",&num) && num){
    int ans=sum(num);
    printf("%d\n",ans);
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
*/
