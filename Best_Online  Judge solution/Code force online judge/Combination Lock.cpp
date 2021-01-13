#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;cin>>num;
    string str1,str2;
    cin>>str1>>str2;
    vector<int>vec1,vec2;
    for(int i=0;i<str1.size();i++){
        vec1.push_back(str1[i]-'0');
    }
     for(int i=0;i<str2.size();i++){
        vec2.push_back(str2[i]-'0');
    }
    int ans1=0,ans;
    for(int i=0;i<vec1.size();i++){
       ans=abs(vec1[i]-vec2[i]);
       if(ans<=5){
        ans1+=ans;
       }
       else{
        int a=min(vec1[i],vec2[i]);
        int b=max(vec1[i],vec2[i]);
        int c=a+10;
        ans1+=abs(c-b);
       }
    }
    cout<<ans1<<endl;
    return 0;
}
