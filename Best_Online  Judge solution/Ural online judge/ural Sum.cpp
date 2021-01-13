#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int i,sum=0;
    if(n>0){
        for(i=1;i<=n;i++){
            sum+=i;
        }

    }

    else {

        for(i=1;i>=n;i--){
        sum+=i;
    }
    }
   cout<<sum;
}

