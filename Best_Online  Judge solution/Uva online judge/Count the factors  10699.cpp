#include<bits/stdc++.h>
using namespace std;
const int maxn=20000001;
bool flag[maxn];
vector<int >prime;
vector<int>factor;
vector<int>ans;
void sieve()
{
    flag[0]=1;
    flag[1]=1;
    prime.push_back(2);
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            prime.push_back(i);
        }
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
void factorizaion(int n)
{

    for(int i=0;i<prime.size();i++)
    {
        if(n%prime[i]==0){
            ans.push_back(prime[i]);
        }
    }
}
int main()
{
    int n;
    sieve();
    while(scanf("%d",&n) && n){
    factorizaion(n);
    printf("%d : %d\n",n,ans.size());
    ans.clear();
    }
    return 0;
}

/*

#include <stdio.h>
#include <math.h>
int main() {
	int n, i;
	while(scanf("%d", &n) == 1 && n) {
		printf("%d : ", n);
		int ans = 0;
		for(i = 2; i <= sqrt(n); i++) {
			if(n%i == 0)
				ans++;
			while(n%i == 0) {
				n /= i;
			}
		}
		if(n != 1)
                ans++;
		printf("%d\n", ans);
	}
    return 0;
}
*/
