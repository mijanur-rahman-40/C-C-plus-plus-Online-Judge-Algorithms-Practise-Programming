#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;
queue<int>Q;
int main()
{
    int n,m;
    while(cin>>n){
        switch(n){
            case 1:
                cin>>m;
                Q.push(m);
                cout<<"Queue size ="<<Q.size()<<endl;
                break;
            case 2:
                Q.pop();
                cout<<"Queue size="<<Q.size()<<endl;
                break;
            case 3:
                cout<<"Queue front="<<Q.front()<<endl;
                break;
            default:
                cout<<"Queue size="<<Q.size()<<endl;
        }
    }
    return 0;
}




