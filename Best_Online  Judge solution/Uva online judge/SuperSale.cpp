
#include<bits/stdc++.h>
using namespace std;
int n,capacity;
pair<int,int>obj[1010];
int mat[1010][1010];
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){
    cin>>n;
    for(int i=1; i<=n; i++){
            int weight,price;
         cin>>price>>weight;
               int a,b;
               a = price;
               b = weight;
         obj[i].first  = b;
         obj[i].second = a;
    }
    for(int i=0; i<=n; i++){
        mat[i][0] = 0;
    }
    int ans = 0;
    int query;
    cin>>query;
    while(query--){
        cin>>capacity;
        for(int w=0; w<=capacity; w++){
        mat[0][w] = 0;
      }
      for(int i=1; i<=n; i++ ){
           for(int w=1; w<=capacity; w++){
            if(obj[i].first > w){
                mat[i][w] = mat[i-1][w];
         }
         else{
            mat[i][w] = max(mat[i-1][w],mat[i-1][w-obj[i].first] + obj[i].second);
             }
          }
        }
        ans = ans + mat[n][capacity];
    }
   cout<<ans<<endl;
    }
    return 0;
}

/*
6
26 64
22 85
4  52
18 99
13 39
9  54
*/
