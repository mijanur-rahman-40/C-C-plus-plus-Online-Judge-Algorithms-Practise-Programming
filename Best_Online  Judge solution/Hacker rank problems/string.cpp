#include<iostream>
using namespace std;
int main()
{
    string st1,st2;
    cin>>st1>>st2;
    cout<<st1.size()<<" "<<st2.size()<<endl;
    cout<<st1+st2<<endl;
    string st3=(st1+st2);
    cout<<st3[st1.size()];
    for(int i=0;i<(st1.size()-1);i++){
        cout<<st3[i+1];
    }
    cout<<" "<<st3[0];
    for(int i=0;i<(st2.size()-2);i++){
        cout<<st3[st1.size()+i+1];
    }
    cout<<st3[st3.size()-1]<<endl;
    return 0;

}
