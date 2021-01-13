#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
    if(a==1){
        int num;
    cin>>num;
    if(st.empty()){
        st.push(num);
    }
    else{
        st.push(max(num,st.top()));
    }
    }
    if(a==2){
        st.pop();
    }
    if(a==3){
        cout<<st.top()<<endl;
    }
    }
    return 0;
}
