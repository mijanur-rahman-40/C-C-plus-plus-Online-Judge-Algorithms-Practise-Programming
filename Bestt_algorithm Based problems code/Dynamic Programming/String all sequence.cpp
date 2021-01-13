#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str1;
   cin>>str1;
    int len = str1.size();
    for(int i=1; i<(1<<len); i++){
        string str = " ";
        for(int j=0; j<len; j++){
            if( (i>>j) & 1){
                str += str1[j];
            }
        }
        cout<<str<<endl;
    }
}
