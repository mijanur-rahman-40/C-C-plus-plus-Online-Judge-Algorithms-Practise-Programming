#include<bits/stdc++.h>
using namespace std;
const int maxn=100005;
bool flag[maxn];
void sieve()
{
    flag[1]=1;
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
    }
}
int main()
{
    sieve();
    int num;
    cin>>num;
    if(num>2){
        cout<<"2"<<endl;
    }
    else
        cout<<"1"<<endl;
    for(int i=2; i<=num+1; i++){
        if(flag[i]==0){
            cout<<"1"<<" ";
        }
        else
            cout<<"2"<<" ";
    }
    cout<<endl;
    return 0;
}
