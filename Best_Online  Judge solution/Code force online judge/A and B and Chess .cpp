#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[8][8];
    for(int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            cin>>arr[i][j];
        }
    }
    int ans1=0,ans2=0;
     for(int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            if(islower(arr[i][j])){
                if(arr[i][j]=='q'){
                  ans1+=9;
                }
               else if(arr[i][j]=='r'){
                  ans1+=5;
                }
               else if(arr[i][j]=='b'){
                  ans1+=3;
                }
               else if(arr[i][j]=='n'){
                  ans1+=3;
                }
               else if(arr[i][j]=='p'){
                  ans1+=1;
                }
            }
            else if(isupper(arr[i][j])){
                if(arr[i][j]=='Q'){
                  ans2+=9;
                }
               else if(arr[i][j]=='R'){
                  ans2+=5;
                }
               else if(arr[i][j]=='B'){
                  ans2+=3;
                }
               else if(arr[i][j]=='N'){
                  ans2+=3;
                }
               else if(arr[i][j]=='P'){
                  ans2+=1;
                }
            }
        }

    }
    if(ans1>ans2) cout<<"Black"<<endl;
    else if(ans1<ans2) cout<<"White"<<endl;
    else cout<<"Draw"<<endl;
}
//'q', 'r', 'b', 'n', 'p', 'k',
