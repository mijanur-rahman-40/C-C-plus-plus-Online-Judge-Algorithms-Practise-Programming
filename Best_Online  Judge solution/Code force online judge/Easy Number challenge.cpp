#include<bits/stdc++.h>
using namespace std;
#define N 1073741824
vector<int>vec(1000000, 0);
int calc_d(int num) {
    int res=0,sq=sqrt(num);
    for(int i=1;i<=sq;i++){
        if(num%i==0)
            res+= 2;
    }
    if (sq*sq==num){
        if (num%sq==0)
            res--;
            }
    return res;
}
int main() {
    int ans=0;
    int a,b,c;
    cin>>a>>b>>c;
    for (int i=1;i<=a;i++){
        for (int j=1;j<=b;j++){
            for (int k=1;k<=c;k++){
                ans =(ans+calc_d(i*j*k)%N)%N;
                   }
        }
    }
    cout <<ans<<endl;
    return 0;
}

