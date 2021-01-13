 #include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int s=1,t=1;
    for(int i=0;i<a.size();i++){
        s=(s*(a[i]-'A'+1))%47;
    }
       for(int i=0;i<b.size();i++){

        t=(t*(b[i]-'A'+1))%47;
       }

        if(s==t)
            cout<<"GO\n";
        else
            cout<<"STAY\n";

        return 0;
}

