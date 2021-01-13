
#include<bits/stdc++.h>
using namespace std;
const long long  maxn=1000000;
bool flag[maxn];
long long coun,ans,a,s=1,num;
long long prime[maxn];
void seive()
{

    flag[1]=1;
    flag[0]=1;
    prime[0]=2;
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    a=1;
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
              prime[a++]=i;
        }
        if(maxn/i>=i){
            long  add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;

            }
        }
    }
}
int main(){
    seive();
    long long t;
    scanf("%lld", &t);

    while(t--){
        cin>>num;
        ans=1;
        for(int i=0;i<a &&prime[i]*prime[i]<=num; i++){
            coun=0;
            while(num%prime[i]==0){
                coun++;
                num=num/prime[i];
            }
            ans=ans*(coun+1);
        }

        if(num!=1)
          ans=ans*2;
        cout<<"Case "<<s++<<": "<<ans-1<<endl;

    }
    return 0;
}

