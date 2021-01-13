#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
bool perfect_number(int num){
   int sum=0,mod;
   while(num){
    mod=num%10;
    sum+=mod;
    num=num/10;
   }
   if(sum==10){
    return true;
   }
   else
    return false;
}
int main()
{
    int num,ans=0;
    cin>>num;
    for(int i=19;i<INF;i++){
        if(perfect_number(i)){
           ans++;
        }
        if(ans==num){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
