#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;

    for(int i = 0 ;i < 5 ;i++){
        if(st.size() > 2){
            cout<<"overflow"<<endl;
        }
        else st.push(i);

    }

    while( !st.empty() ){
        int x = st.top();
        st.pop();

        cout<<x<<endl;
    }

    return 0;
}
