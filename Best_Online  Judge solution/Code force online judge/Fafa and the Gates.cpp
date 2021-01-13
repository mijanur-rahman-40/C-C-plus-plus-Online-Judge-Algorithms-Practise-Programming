#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; cin>>len;
    string str;
    cin>>str; int U=0,R=0;
    vector<int>vec;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='U') U++;
        else if(str[i]=='R') R++;
        if(U<R)
            vec.push_back(1);
        else if(U>R)
        vec.push_back(2);
        }
        int ans=0;
       // cout<<vec[0];
        for(int i=1; i<vec.size(); i++){
                //cout<<vec[i-1];
            if(vec[i]!=vec[i-1]){
            ans++; //cout<<ans<<" ";
            }
        }
        cout<<ans<<endl;
    return 0;
}
