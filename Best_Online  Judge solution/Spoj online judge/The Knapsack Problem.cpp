#include<bits/stdc++.h>
using namespace std;
typedef struct {
   int weight,price;
}object;
int main()
{
    int n,capacity;
     cin>>capacity; cin>>n;
    int mat[n+1][n+1];
    object obj[n+1];

    for(int i=1; i<=n; i++){
        cin>>obj[i].weight>>obj[i].price;
    }

    for(int i=0; i<=n; i++){
        mat[i][0] = 0;
    }
    for(int w=0; w<=capacity; w++){
        mat[0][w] = 0;
    }
    for(int i=1; i<=n; i++ ){
        for(int w=1; w<=capacity; w++){
            if(obj[i].weight > w){
                mat[i][w] = mat[i-1][w];
         }
         else{
                //mat[i][w]  = max(mat[i-1][w],mat[i-1][w-wj] + pi);                                                                                                                                                                                                      =
            mat[i][w] = max(mat[i-1][w],mat[i-1][w-obj[i].weight] + obj[i].price);
          }
        }
    }
    cout<<mat[n][capacity]<<endl;
}
