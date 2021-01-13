#include<bits/stdc++.h>
using namespace std;

bool  arr[30] = {false};
int  main()
{
    int len,k; char c;
    cin>>len>>k;
    for(int i=0; i<len; i++){
            cin>>c;
        arr[c - 'a' + 1] = true;
    }
    int coun = 0,ans = 0;
    for(int i=1; i<=26; i++){
        if(coun == k) break;
        if(arr[i]){
            coun++;
            ans += i;
            i++;
        }
    }
    if(coun != k) cout<<"-1"<<endl;
    else cout<<ans<<endl;
    return 0;
}

