#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,colume;
    cin>>row>>colume;
    int mn=min(row,colume);
    if(mn%2==0){
        cout<<"Malvika"<<endl;
    }
    else
        cout<<"Akshat"<<endl;
    return 0;
}
