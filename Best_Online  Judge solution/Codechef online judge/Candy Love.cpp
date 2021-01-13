#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--){
        int num ;long sum = 0; cin>>num;
        for(int i=0; i<num; i++){
            int j;
            cin>>j;
            sum += j;
        }
        if(sum%2==0){
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}
