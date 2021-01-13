#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int max_index,min_index;
    for(int i=1; i<=num; i++){
        int temp;cin>>temp;
        if(temp==1){
            min_index=i;
        }
        if(temp==num){
            max_index=i;
        }
    }
    if(min_index==num || min_index==1 || max_index==1 || max_index==num){
        cout<<num-1<<endl;
    }
    else
    {
        int mx1=max(num-min_index,num-max_index);
        int mx2=max(min_index-1,max_index-1);
        cout<<max(mx1,mx2)<<endl;
    }
    return 0;
}
