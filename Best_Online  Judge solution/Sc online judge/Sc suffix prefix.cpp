/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,t;
     int num,coun=0,i=0;;
     cin>>num>>s>>t;
     while(s[i]!='\0'){
     if(s[i]==t[0] && s[num-1]==t[num-i-1]){
        coun=num-i;
        break;
     }
     i++;
     }
    cout<<2*num-coun<<endl;
return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,ans;
    int num,siz=0;
    cin>>num>>s>>t;
    for(int i=0;i<num;i++){
        if(s[i]==t[0] && s[num-1]==t[num-i-1]){
            ans=s.substr(i,num);
           siz=ans.size();
           break;
        }
    }
        cout<<2*num-siz<<endl;
    return 0;
}

