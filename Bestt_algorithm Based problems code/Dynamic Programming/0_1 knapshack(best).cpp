/*
#include<bits/stdc++.h>
using namespace std;
typedef struct {
   int weight,price;
}object;
int main()
{
    int mat[100][100],n,capacity;
    object obj[100];
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>obj[i].weight>>obj[i].price;
    }
    cin>>capacity;
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
    cout<<"Max profit : "<<mat[n][capacity]<<endl;
}





#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int wt[100],profit[100];
int knapchack(int sz,int p)
{
    if(sz == 0 or p<1){
        return 0;
    }
    if(dp[sz][p] != -1){
        return dp[sz][p];
    }
    int res1 = 0,res2 = 0;
    if(wt[p]<=sz){
        res1 = profit[p] + knapchack(sz-wt[p],p - 1);
    }
    else
        res2 = knapchack(sz,p - 1);
    return dp[sz][p] = max(res1,res2);
}
int main()
{
    int objects,capacity;
    scanf("%d %d",&objects,&capacity);
    for(int i=1; i<=objects; i++){
        scanf("%d%d",&wt[i],&profit[i]);
    }
    memset(dp,-1,sizeof(dp));
    int ans = knapchack(capacity,objects);
    printf("%d\n",ans);
    return 0;

}

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[100][100],n,capacity;
    pair<int,int>obj[100];
    cin>>n;
     for(int i=1; i<=n; i++){
        int weight,price;
        cin>>weight>>price;
        obj[i].first  = weight;
        obj[i].second = price;
    }
    cin>>capacity;
    for(int i=0; i<=n; i++){
        mat[i][0] = 0;
    }
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
    cout<<"Max profit : "<<mat[n][capacity]<<endl;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=capacity; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans = mat[n][capacity];
    int  i = n,j = capacity;
}
    /*
     for (i = n; i > 0 && ans > 0; i--) {
        if(ans == mat[i-1][j]){
            continue;
        }
        else{
            cout<<"Weight = "<<obj[i].first<<" "<<"Price = "<<obj[i].second<<endl;
            ans = ans - obj[i].second;
            j = j - obj[i].first;
        }

    }

     while(i>0 && ans>0){
        if(ans != mat[i-1][j]){
             cout<<"Weight = "<<obj[i].first<<" "<<"Price = "<<obj[i].second<<endl;
            ans = ans - obj[i].second;
            j = j - obj[i].first;
        }
      i--;
    }
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main()
    {
    int val[] = { 3, 4, 3,6 };
    int wt[] = { 2, 3, 4,5 };
    int W = 5;
    int n = sizeof(val) / sizeof(val[0]);
    int i, w;
    int K[n + 1][W + 1];
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                    K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    int res = K[n][W];
    printf("%d\n", res);

    w = W;
    for (i = n; i > 0 && res > 0; i--) {
        if (res == K[i - 1][w])
            continue;
        else {

            // This item is included.
            printf("%d ", wt[i - 1]);

            // Since this weight is included its
            // value is deducted
            res = res - val[i - 1];
            w = w - wt[i - 1];
        }
    }  return 0;
}




4
2 3
3 4
4 5
5 6
5

7 8
3 61
1 56
2 23
3 65
6 22
4 34
4 51

*/




/*
n =4

weight price
2      3
3      4
4      5
5      6
capacity 5
*/


/*

/A Naive recursive implementation of 0-1 Knapsack problem
#include<stdio.h>

// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }

// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   // Base Case
   if (n == 0 || W == 0)
       return 0;

   // If weight of the nth item is more than Knapsack capacity W, then
   // this item cannot be included in the optimal solution
   if (wt[n-1] > W)
       return knapSack(W, wt, val, n-1);

   // Return the maximum of two cases:
   // (1) nth item included
   // (2) not included
   else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                    knapSack(W, wt, val, n-1)
                  );
}

// Driver program to test above function
int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}
*/
