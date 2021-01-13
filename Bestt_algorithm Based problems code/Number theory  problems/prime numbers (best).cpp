
#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
bool flag[maxn];
vector<int >prime;
void sieve()
{
    flag[1]=1;
    prime.push_back(2);
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3; i<=maxn; i+=2){
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

int main()
{
   sieve();
   cout<<"Number  of primes "<<prime.size()<<endl;
   for(int i=0; i<300; i++){
    cout<<" "<<i<<" "<<prime[i]<<endl;
   }
   return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
const long int ma=10000000;
bool  marked[ma];
void sieve(long int n){
   marked[0]=1;
    marked[1]=1;
    marked[2]=0;
    for(long int i=4; i<ma; i=i+2)
        marked[i]=1;
    for(long int i=3; i*i<=ma; i=i+2)
    {
        if(marked[i]==0)
        {
            if(ma/i>=i) {
            for(long int j=i*i; j<=ma; j+=2*i)
            marked[j]=1;
        }
    }
    }

    }
int main()
{
    long int n;
    while(scanf("%ld",&n)==1){
    sieve(n);
    if(marked[n]==0){
                printf("%ld is a prime number\n",n);
    }
    else
        printf("%ld is not a prime\n",n);

    }
    return 0;
}

*/
#include<bits/stdc++.h>
using namespace std;
int a[9999999]={0};

int main()
{
    int i,j,n,N=9999999;
    int sq=sqrt(N);
    a[0]=1;
    a[1]=1;
    a[2]=0;
    for(i=4; i<N; i=i+2)
        a[i]=1; // 2 theke shuru korini,karon 2 ebong 3 prime number,sheta amra aagei jani
    for(i=3; i<=sq; i=i+2)
    {
        if(a[i]==0)
        {
            for(j=i*i; j<=N; j+=i)
            a[j]=1;
        }
    }
    scanf("%d",&n);
    if(a[n]==0)
     printf("It is Prime\n");
    else
     printf("It is not Prime\n");
    return 0;
}




























