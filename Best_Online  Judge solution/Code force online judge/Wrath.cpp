
#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000005];
int main(void) {
    cin>>n;
    for(int i =1;i<=n;++i){

          cin >>a[i];
           a[i]=min(a[i]+1,i);
           cout<<a[i]<<endl;
    }
    cout<<endl;
    int ans=0,cur_alive =n;
    for (int i=n;i>=1;--i) {
        if(cur_alive>=i){
          ++ans;
        }
        cur_alive=min(cur_alive,i-a[i]);
        cout<<cur_alive<<endl;
    }
    cout << ans << endl;
}
