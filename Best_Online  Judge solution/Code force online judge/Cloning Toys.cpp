
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int cloning,orginal;
    cin>>cloning>>orginal;
    cloning-=orginal-1;
     if(orginal<1){
        cout<<"No"<<endl;
     }
     else if(cloning<0){
        cout<<"NO"<<endl;
     }
     else if(!(orginal-1) && cloning){
        cout<<"NO"<<endl;
     }
     else if(cloning%2==1){
        cout<<"NO"<<endl;
     }
     else
        cout<<"YES"<<endl;

}
