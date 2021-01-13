#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
   queue<int>st;
    int a;
    char ch[10];
    while(true){
       scanf("%s",ch);
       if(ch[1]=='u'){
        scanf("%d",&a);
        st.push(a);
       }
       else{
       if(!st.empty()){
        a=st.front();
        st.pop();
       }
       printf("%d",a);
       }
    }
return 0;
}

