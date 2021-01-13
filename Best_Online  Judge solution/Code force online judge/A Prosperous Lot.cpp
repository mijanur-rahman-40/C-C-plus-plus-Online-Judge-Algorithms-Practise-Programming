#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num>36){
        cout<<"-1"<<endl;
        return 0;
    }
    else{
    for(int i=1;i<=num/2;i++){
                cout<<"8";

    }
        if(num%2==1){
            cout<<"4";
      }
      cout<<endl;
    }
    return 0;
}
