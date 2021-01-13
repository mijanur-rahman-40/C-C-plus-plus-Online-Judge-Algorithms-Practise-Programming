#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
            long long len;
    string st;

    cin>>len;
    getchar();
        cin >>st;
       long long count=0;
        for(long long i=0;i<len;i++){
            if(st[i]=='1'){
                count++;
            }
        }
        cout<<(count*(count+1))/2<<endl;
    }
    return 0;
}
