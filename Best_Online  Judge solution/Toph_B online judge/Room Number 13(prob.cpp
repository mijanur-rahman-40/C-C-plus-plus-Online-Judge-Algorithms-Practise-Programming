//problem ase

#include<bits/stdc++.h>
using namespace std;
int main()
{
     stack<long int>st;
     int tst;cin>>tst;
     while(tst--){
          int num;cin>>num;
          for(int i=0;i<num;i++){
                    int n;cin>>n;
               st.push(n);
          }
          int coun=0;
          while(!st.empty()){
               int t=st.top();
               st.pop();
               int t1=st.top();
               if(t>t1){
               st.pop();
               }
               if(t>t1){
                    coun++;
                    //st.pop();
               st.push(t);
               }
          }
          cout<<num-coun<<endl;
     }
     return 0;
}
