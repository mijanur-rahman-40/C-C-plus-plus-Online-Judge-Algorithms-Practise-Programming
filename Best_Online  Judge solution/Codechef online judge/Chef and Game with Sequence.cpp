#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--){
        int num,sum=0;
        cin>>num;
        for(int i=0;i<num;i++){
            int n;cin>>n;
            sum+=n;
        }
        if(sum%2==0){
            cout<<"1"<<endl;
        }
        else
            cout<<"2"<<endl;
    }
    return 0;
}
