#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int num;
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        int j; cin>>j;
        if(j!=0){
            mp[j]++;
        }
    }
    cout<<mp.size()<<endl;
}
