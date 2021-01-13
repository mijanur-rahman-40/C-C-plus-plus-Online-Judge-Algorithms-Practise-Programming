

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int taka,coins;
    while(scanf("%d%d",&coins,&taka) == 2){
        int coin[100];
        for(int i=0; i<coins; i++){
            cin>>coin[i];
        }
        int mat[100][100];
        for(int i=0; i<=taka; i++){
            mat[0][i] = i;
        }
        for(int i=1; i<=coins; i++){
            mat[i][0] = 0;
        }
        for(int i=1; i<=coins; i++){
            for(int j=1; j<=taka; j++){

                if(j < coin[i-1]){
                    mat[i][j] = mat[i-1][j];
                }
                else{
                    mat[i][j] =min(mat[i-1][j],1+mat[i][j-coin[i-1]]);
                }
                //cout<<"mat["<<i<<"]["<<j<<"]  = "<<mat[i][j]<<" ";
            }
        }
        cout<<"Minimum number of coins: "<<mat[coins][taka]<<endl;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
#define INF 9999
int minCoins(int values[],int n,int target) {
   int change[target+1];
   change[0] = 0;
   int i,j;
   for(j=1;j<=target;j++) {
      int min = INF;

      for(i=0;i<n;i++) {
         if(j>=values[i] && (change[j-values[i]]+1) < min)
            min = change[j-values[i]]+1;
      }
      change[j] = min;
   }
   return change[target];
}
int main() {
   int values[] = {1,2,5,9};
   int n = sizeof(values)/sizeof(values[0]);
   int target = 13;
   int min = minCoins(values,n,target);
   cout<<"\nMin no. of coins required :: "<<min;
   cout<<endl;


*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coin[100];
    int taka,coins;
    while(scanf("%d%d",&coins,&taka) == 2){
    for(int i=1; i<=coins; i++){
        scanf("%d",&coin[i]);
    }
    int arr[taka+1],temp[taka+1];
    coin[0] = 0;
    arr[0]  = 0;
    temp[0] = 0;
    int num,ans,min;
    for(int i=1; i<=taka; i++){
           min = INT_MAX;
        for(int j=1; j<=coins; j++){
            if( coin[j]<=i){
                if( arr[ i - coin[j]]+1 <min){
                    min = arr[i-coin[j]]+1;
                    ans = j;
                }
            }
        }
        arr[i]  =  min;
        temp[i] =  ans;
    }
    printf("Minimum number of coins need : %d\n",arr[taka]);
    vector<int>vec;
    while(taka>0){
        vec.push_back(coin[temp[taka]]);
        taka = taka - coin[temp[taka]];
    }
    cout<<"These are coins:\n";
        for(int i=0; i<vec.size(); i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}

//Greedy algorithm

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int taka,coins;
    while(scanf("%d%d",&coins,&taka) == 2){
            int coin[100];
        for(int i=0; i<coins; i++){
            cin>>coin[i];
        }
    vector<int>ans;
    for(int i= coins-1; i>=0; i--){
        while( taka >= coin[i]){
            taka = taka - coin[i];
            ans.push_back(coin[i]);
        }
    }
    cout<<"Minimum number of coins need : "<<ans.size()<<endl;
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
    }
}
*/
