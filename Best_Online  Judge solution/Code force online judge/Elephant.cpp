#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;

    if(num<=5){
        cout<<1<<endl;
    }
    else{
    if(num%5==0){
        cout<<num/5<<endl;
    }
    else
        cout<<num/5+1<<endl;
    }
    return 0;
}
