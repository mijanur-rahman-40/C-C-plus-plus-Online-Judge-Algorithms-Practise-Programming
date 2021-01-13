#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str;
    while(1){
        cin>>str;
        if(str=="#") break;

        if(next_permutation(str.begin(),str.end()))
          cout<<str<<endl;
        else
         cout<<"No Successor"<<endl;
    }

    return 0;
}
