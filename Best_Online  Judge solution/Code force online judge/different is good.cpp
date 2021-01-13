#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<char,int>mp;
    string str;
    int n;cin>>n;
    cin>>str;
    if(n>26){
        printf("-1\n");
    }
    else{
    int len=str.size();
    for(int i=0;i<len;i++){
        mp[str[i]]++;
    }
    printf("%d\n",n-mp.size());
    }
    return 0;
}
