#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5;
vector<long long>vec;
void factors(long long num,long long k)
{
    long long i,j=0;
    for(i=1;i<=sqrt(num);i++){
        if(num%i==0){
           vec.push_back(i);
            if(i!=sqrt(num))
               vec.push_back(num/i);
        }
    }
    sort(vec.begin(),vec.end());
    if(vec.size()>=k){
     printf("%lld\n",vec[k-1]);
    }
    else
      printf("-1\n");
}
int main()
{
    long long int num,k;
    scanf("%lld%lld",&num,&k);
    factors(num,k);
    return 0;
}

