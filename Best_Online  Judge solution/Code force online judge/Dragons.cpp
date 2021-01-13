#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n; cin>>s>>n;
    int sum=0,temp=s,flag=0;
    pair<int,int>pai[n];
    for(int i=0;i<n;i++){
            int a,b; cin>>a>>b;
          pai[i].first=a;
          pai[i].second=b;
    }
     sort(pai,pai+n);
     for(int i=0;i<n;i++){
        if(temp>pai[i].first){
            temp+=pai[i].second;
            //cout<<temp<<endl;
            flag=1;
        }
        else{
        flag=0;
        break;

        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
/*
2 5
5 1
2 1
3 1
1 1
4 1

123 2
78 10
130 0
*/
