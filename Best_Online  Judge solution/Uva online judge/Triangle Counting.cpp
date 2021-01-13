
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long arr[1000010];
int main(){
     int n;
    for(long int i=4;i<=1000000;++i){
        arr[i]=arr[i-1]+((i-1)*(i-2)/2-((i-1)/2))/2;
    }
        while(scanf("%d",&n)==1){
        if(n<3){
            break;
        }
        cout<<arr[n]<<endl;
    }
    return 0;
}
