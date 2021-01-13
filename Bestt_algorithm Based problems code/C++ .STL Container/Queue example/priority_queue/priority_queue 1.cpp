#include <bits/stdc++.h>
using namespace std;
struct type{
    int i;
    type (){}
    type(int _i){
    i= _i;
    }
    bool operator <(const type& p)const{
    return i<p.i;
    //return i<p.i;
    }
};

int main()
{
    priority_queue<type> st;
    int a;
    char ch[10];
    while(true)
    {
        cin>> ch;
        if(ch[1]=='u')
        {
            cin>> a;
            type t1= type(a);
            st.push(t1);
        }
        else
        {
            if(!st.empty())
            {
                type t=st.top();
                a=t.i;
                st.pop();
            }
            cout<< a<< endl;
        }
    }
    return 0;
}
