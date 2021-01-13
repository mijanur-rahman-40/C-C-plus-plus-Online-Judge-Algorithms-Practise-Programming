#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin>>str;
     int flag=0;
    int len=str.size();
    for(int i=0;i<len-1;i++){
        if(str[i]=='A' && str[i+1]=='B'){
            for(int j=i+2;j<len-1;j++){
                if(str[j]=='B' && str[j+1]=='A'){
                        flag=1;
            }
        }
        break;
      }
    }
     for(int i=0;i<len-1;i++){
        if(str[i]=='B' && str[i+1]=='A'){
            for(int j=i+2;j<len-1;j++){
                if(str[j]=='A' && str[j+1]=='B'){
                        flag=1;
            }
        }
        break;
       }
    }
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
