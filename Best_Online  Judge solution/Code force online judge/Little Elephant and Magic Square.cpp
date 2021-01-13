#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4],num = 3;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    arr[3][3] = (arr[1][2]+arr[1][3]+arr[2][1]+arr[2][3]-arr[3][1]-arr[3][2])/2;
   int sum = arr[3][1]+arr[3][2]+arr[3][3];
   arr[1][1] = sum - (arr[1][2]+arr[1][3]);
   arr[2][2] = sum - (arr[2][1]+arr[2][3]);
   for(int i=1; i<=3; i++){
    for(int j=1; j<=3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
return 0;
}
