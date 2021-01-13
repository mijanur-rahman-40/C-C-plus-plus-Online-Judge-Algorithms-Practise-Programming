
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,5,10,25,50};
    int coins = 5,taka;
    while(scanf("%d",&taka)==1){

    int mat[50][7500];

    for(int i=0; i<=taka; i++){
        mat[1][i] = 1;
    }

    for(int i=1; i<=coins; i++){
        mat[i][0] = 1;
    }

    for(int i=1; i<=coins; i++){
        for(int j=1; j<=taka; j++){
                if(j<arr[i-1]){
                    mat[i][j] = mat[i-1][j];
                }
                else
                    mat[i][j] = mat[i][j-arr[i-1]] + mat[i-1][j];
        }
    }
    cout<<mat[coins][taka]<<endl;
    }
    return 0;
}
