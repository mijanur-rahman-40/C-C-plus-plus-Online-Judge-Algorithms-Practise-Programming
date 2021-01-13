
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,j=1;
    cin>>tst;
    while(tst--){
            char arr[6][6];
        for(int i=1; i<=5; i++){
            for(int j=1; j<=5; j++){
                cin>>arr[i][j];
            }
        }
    int a=0,b=0,c=0,flag1=0,flag2=0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
           if(arr[i][j] == '|'){
                a=j;
            }
            else if(arr[i][j] == '>'){
                b=j;
                flag1=1;
            }
            else if(arr[i][j] == '<'){
                c=j;
                flag2=1;
            }
        }
    }
    //cout<<"a b c"<<a<<b<<c<<endl;
    if(a<b && flag1==1){
        cout<<"Case "<<j++<<": No Ball"<<endl;
    }
    if(a>c && flag2==1){
        cout<<"Case "<<j++<<": No Ball"<<endl;
      }
    if(a<c && flag2==1){
       cout<<"Case "<<j++<<": Thik Ball"<<endl;
    }
    if(a>b && flag1==1){
       cout<<"Case "<<j++<<": Thik Ball"<<endl;
      }
    }
    return 0;
}


/*
..|..
..|..
..|..
..|<.
..|..
*/









