#include<bits/stdc++.h>
using namespace std;
map<string,int>mp1,mp2;
map<string,int>::iterator it;
int n;
string str[1010];
int num[1010];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin>>str[i]>>num[i];
        mp1[str[i]]=mp1[str[i]]+num[i];
    }
    int mx=0;
    for(int i=1;i<=n;i++){
        mx=max(mx,mp1[str[i]]);
    }
    for(it=mp1.begin();it!=mp1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    for(int i=1;i<=n;i++){
     mp2[str[i]]+=num[i];
    if(mp1[str[i]]==mx && mp2[str[i]]>=mx){
     cout<<str[i]<<endl;
     return 0;
     }
    }
}
    /*
    int j=1;
    while(mp1[str[j]]<mx || (mp2[str[j]]+=num[j])<mx){
        j++;
    }
    cout<<str[j]<<endl;

     3
andrew 3
andrew 2
mike 5
andrew 4
3
mike 3
andrew 5
mike 2
}
 */
