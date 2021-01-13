#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,coun=0;
    cin>>num;
    for(int i=0;i<num;i++){
        int n,m;
        cin>>n>>m;
        if(n+2<=m){
            coun++;
        }
    }
    cout<<coun<<endl;
}
