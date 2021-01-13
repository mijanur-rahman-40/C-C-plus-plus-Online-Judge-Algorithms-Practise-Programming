#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    while(cin>>str){
        int sum = 0, i,flag=0;
        for(i = 0; str[i]; i++) {
            if(str[i] >= 'a' && str[i] <= 'z')
                sum += str[i]-'a'+1;
            else
                sum += str[i]-'A'+27;
        }
        for(i=2;i<=sqrt(sum);i++){
        if(sum%i== 0){
           cout<<"It is not a prime word."<<endl;
            flag=1;
            break;
        }
        }
       if(flag==0){
            cout<<"It is a prime word."<<endl;
    }
    }
    return 0;
}


