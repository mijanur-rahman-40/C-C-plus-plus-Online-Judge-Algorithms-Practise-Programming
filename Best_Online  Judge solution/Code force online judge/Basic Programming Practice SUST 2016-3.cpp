/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num,flag=0;
     int arr[1000];
     scanf("%d",&num);
     for(int i=0;i<num;i++)
     {
          scanf("%d",&arr[i]);
          if(arr[i]==1){
               flag=1;
          }
     }
     if(flag==1){
          printf("-1");
     }
     else
          printf("1");
}



#include<bits/stdc++.h>
using namespace std;
int vis[2010]={0};
int main()
{
    int num,arr[2010];
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        scanf("%d",&arr[i]);
    }
    int coun;
    for(int i=1;i<=num;i++){
            coun=1;
        for(int j=1;j<=num;j++){
            if(arr[i]<arr[j]){
               coun++;
        }
    }
      cout<<coun<<" ";
    }
    return 0;
}
/*
11
5 6 4 2 9 7 6 6 6 6 7
Output
9 4 10 11 1 2 4 5 6 7 2
Answer
9 4 10 11 1 2 4 4 4 4 2
*/


/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;cin>>str;
    int len=str.size();
    cout<<(len+1)*26-len<<endl;
}
*/



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

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
     map<char,int>::iterator it;
    string str; int num; cin>>num;
    cin>>str;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    int a=0,b=0;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->first=='0'){
            a=it->second;
        }
        else
            b=it->second;
    }

    cout<<abs(a-b)<<endl;
    return 0;
}

