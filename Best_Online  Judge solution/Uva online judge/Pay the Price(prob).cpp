#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],coins,taka;
    scanf("%d%d",&coins,&taka);
    for(int i=1; i<=coins; i++){
    cin>>arr[i];
    }
    int mat[100][100];
    for(int i=0; i<=taka; i++){
        mat[1][i] = 1;
    }
    for(int i=1; i<=coins; i++){
        mat[i][0] = 1;
    }
    for(int i=1; i<=coins; i++){
        for(int j=1; j<=taka; j++){
                if(j<arr[i]){
                    mat[i][j] = mat[i-1][j];
                }
                else
                    mat[i][j] = mat[i][j-arr[i]] + mat[i-1][j];
        }
    }
    cout<<"Minimum number of ways: "<<mat[coins][taka];
    return 0;
}
