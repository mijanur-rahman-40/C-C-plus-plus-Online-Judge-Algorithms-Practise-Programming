
#include<bits/stdc++.h>
using namespace std;
vector<pair<int ,int> >ne,po;
int main()
{
    int num,a,b;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>a>>b;
        if(a<0){
           ne.push_back(make_pair(a,b));
        }
        else{
           po.push_back(make_pair(a,b));
        }
    }
    int n=ne.size();
    int p=po.size();
    sort(ne.rbegin(),ne.rend());
    sort(po.begin(),po.end());
    int ans=0,i;
   if(n==p){
        for( i=0;i<n;i++){
            ans+=ne[i].second+po[i].second;
        }
   }
   else if(n>p){
    for( i=0;i<p;i++){
        ans+=ne[i].second+po[i].second;
    }
    ans+=ne[i].second;
   }
   else{
     for( i=0;i<n;i++){
        ans+=ne[i].second+po[i].second;
        //cout<<po[i].first<<" "<<po[i].second<<endl;
    }
    ans+=po[i].second;
   }
    cout<<ans<<endl;
    return 0;
}
