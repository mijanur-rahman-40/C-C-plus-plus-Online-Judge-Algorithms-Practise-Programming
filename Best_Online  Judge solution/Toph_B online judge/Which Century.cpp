
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,j=1;
    cin>>tst;
    while(tst--){
        int num,num1;cin>>num;
        string str,str1,str2,str3;
        str=to_string(num);
        printf("Case #%d: ",j++);
        if(str.size()==3){
            if(str[2]=='0' && str[1]=='0'){
                cout<<str[0]<<"th century!"<<endl;
            }
            else{
                cout<<str[0]-'0'+1<<"th century!"<<endl;
            }
        }
        else if(str.size()==4){
               str1=str[0];
               str2=str[1];
               str3=str1+str2;
               int num1=atoi(str3.c_str());
        if(str[3]=='0' && str[2]=='0' && num1==23){
                cout<<num1<<"rd century!"<<endl;
            }
            else if(str[3]=='0' && str[2]=='0' && num1==21){
                cout<<num1<<"st century!"<<endl;
            }
            else if(str[3]=='0' && str[2]=='0' && num1==22){
                     cout<<num1<<"nd century!"<<endl;
            }
            else if(str[3]=='0' && str[2]=='0'){
               cout<<num1<<"th century!"<<endl;
            }
        else{
            if(num1+1==21){
            cout<<num1+1<<"st century!"<<endl;
        }
        else if(num1+1==23){
            cout<<num1+1<<"rd century!"<<endl;
        }
       else if(num1+1==22){
            cout<<num1+1<<"nd century!"<<endl;
    }
    else{
        cout<<num1+1<<"th century!"<<endl;
    }
    }
    }
    }
    return 0;
}
