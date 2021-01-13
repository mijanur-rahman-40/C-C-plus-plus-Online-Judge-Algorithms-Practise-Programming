#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st1[5],st2[5];
    cin>>st1>>st2;
    int a,b;
    a=atoi(st1);
    b=atoi(st2);
    if(a%2==0 || b%2==1){
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}
