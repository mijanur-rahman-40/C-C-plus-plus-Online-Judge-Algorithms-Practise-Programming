#include<iostream>
using namespace std;
int main()
{
    string st;
    int i;
    cin>>st;
    int len=st.length();
    for(i=0;i<len;i++){
            st[i]=tolower(st[i]);
    }
    for(i=0;i<len;i++){
        if(st[i]=='y' || st[i]=='u' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='a'){
        cout<<"";
        }
        else
            cout<<"."<<st[i];

}
cout<<endl;
return 0;

}
