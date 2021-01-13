#include <bits/stdc++.h>
using namespace std;

int main()
{
     int tst,k=1;cin>>tst;
   while(tst--){
          int ans[200]={0}; int a[100]={0},b[100]={0};
    int tmp,i,j;string s1,s2="";cin>>s1;s2=s1;
    for(i =s1.size()-1,j=0;i>=0;i--,j++){
        a[j] = s1[i]-'0';
    }
    for(i=s2.size()-1,j=0;i>=0;i--,j++){
        b[j] = s2[i]-'0';
    }
    for(i=0;i<s2.size();i++){
        for(j=0;j<s1.size();j++){
            ans[i+j] += b[i]*a[j];
        }
    }
    for(i=0;i<s1.size()+s2.size();i++){
        tmp = ans[i]/10;
        ans[i] = ans[i]%10;
        ans[i+1] = ans[i+1] + tmp;
    }
    for(i=s1.size()+s2.size(); i>= 0;i--){
        if(ans[i] > 0)
            break;
    }
    printf("Case %d: ",k++);
    for(;i>= 0;i--){
        printf("%d",ans[i]);
    }
    cout<<endl;
    s1.clear();s2.clear();
   }
    return 0;
}
