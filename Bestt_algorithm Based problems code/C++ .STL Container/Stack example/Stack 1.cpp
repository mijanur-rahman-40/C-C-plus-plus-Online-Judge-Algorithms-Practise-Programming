#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
stack<int>s;
int main()
{
    int n,m;
    cout<<"push to 1 pop to 2\n";
    //cin>>n;
    while( cin>>n){

        if(n==1)
        {
            cin>>m;
            s.push(m);
        }
        else if(n==2){
            if(s.empty()){
                cout<<"under flow"<<endl;
            }
            else
            {
                cout<<s.top()<<endl;
                s.pop();
            }
        }
        else
            cout<<s.size()<<endl;
    }



    return 0;
}
