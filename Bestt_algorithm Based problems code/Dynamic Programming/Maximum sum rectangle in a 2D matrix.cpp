
// Maximum sum rectangle in a 2D matrix .
// Given a N*N matrix , and find the maximum sum rectangle and their top-left and final-bottom position .
// Time Complexity O(N^3)
/*
#include <stdio.h>
#include <algorithm>
#include <limits.h>
using namespace std;
int matrix[100+10][100+10] , temp[100+10] , top , bottom ;
int kadane(int N)
{
    int mx = INT_MIN , S=0 , localTop = 0 ;
    bool flag = false ;
    for(int i=1; i<=N; i++)
    {
        if(temp[i]>=0)
            flag = true ;
        S=S+temp[i];
        if(S<0)
        {
            S=0;
            localTop = i+1 ;
        }
        else if(S>mx)
        {
            mx = S ;
            top = localTop ;
            bottom = i ;
        }
    }
    if(flag) return mx ;
    mx = INT_MIN;
    for(int i=1;i<=N;i++)
    {
        if(mx<temp[i])
        {
            mx = temp[i] ;
            top = bottom = i ;
        }
    }
    return mx ;
}
void findMaxSum(int N)
{
    int maxSum = INT_MIN , finalTop , finalBottom , finalRight , finalLeft ;
    for(int left=1;left<=N;left++)
    {
        fill(temp,temp+101,0);
        for(int right=left;right<=N;right++)
        {
            for(int i=1;i<=N;i++) temp[i]+=matrix[i][right];
            int t = kadane(N);
            printf("%d\n",t);
            if(t>maxSum)
            {
                maxSum = t ;
                finalTop = top ;
                finalBottom = bottom ;
                finalLeft = left ;
                finalRight = right ;
            }
        }
    }
    printf("(Top , Left) (%d, %d)\n", finalTop, finalLeft);
    printf("(Bottom , Right) (%d, %d)\n", finalBottom, finalRight);
    printf("Maximum sum is : %d\n", maxSum);
}
int main()
{
    int N ; // N is the number of rows and columns .
    while(scanf("%d",&N)==1){
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                scanf("%d",&matrix[i][j]);
            }
        }
        findMaxSum(N);
    }
    return 0;
}
*/
/*
4
0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2


(Top , Left) (1, 0)
(Bottom , Right) (3, 1)
Maximum sum is : 15
*/


//This is best
/*
#include<bits/stdc++.h>
using namespace std;
int matrix[100][100];
int temp[100];
int top,bottom,columns,rows;
int kadane(int row)
{
    int max_sum = INT_MIN, local_top = 1;
    int sum = 0;
    bool flag = false;
    for(int i=1; i<= rows; i++)
    {
        if(temp[i]>=0){
            flag = true;
        }

        sum = sum + temp[i];

        if(sum<0){
            sum = 0;
            local_top = i+1;
        }
        else if(sum > max_sum)
        {
            max_sum = sum;
            top = local_top;
            bottom = i;
        }
    }
    if(flag){
        return max_sum;
    }

    max_sum =  INT_MIN;
    for(int i=1; i<= rows; i++)
     {
         if(max_sum < temp[i])
         {
             max_sum = temp[i];
             top = bottom = i;
         }
    }
    return max_sum;
}
void max_sum(int colum,int row)
{
    int mx_sum= INT_MIN, F_top, F_bottom, F_left, F_right;
    for(int left=1; left<=columns; left++)
    {
        memset(temp,0,sizeof(temp));
        for(int right= left; right<=columns; right++)
            {
                for(int i =1; i<=rows; i++){
                    temp[i] += matrix[i][right];
                }
            int temp_sum = kadane(rows);
            if(temp_sum > mx_sum){
                mx_sum   =  temp_sum;
                F_top    = top;
                F_bottom = bottom;
                F_left   = left;
                F_right  = right;
            }
        }
    }
    cout<<"maximum sum is = "<<mx_sum<<endl;
    cout<<"top    = "<<   F_top<<"  left  = "<<F_left<<endl;
    cout<<"bottom = "<<F_bottom<<"  right = "<<F_right<<endl;
    cout<<endl;
    printf("After final matrix : \n\n");
    for(int i =F_top; i<= F_bottom; i++)
     {
        for(int j =F_left; j<= F_right; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    while(scanf("%d%d",&rows,&columns) == 2 )
    {
        if(rows == 0 && columns == 0){
            break;
        }
        for(int i=1; i<=rows; i++){
            for(int j=1; j<=columns; j++){
                scanf("%d",&matrix[i][j]);
            }
        }
        max_sum(columns,rows);
    }
    return 0;
}

*/
/*
4 4
0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2

maximum sum is = 15
top    = 2  left  = 1
bottom = 4  right = 2

After final matrix :

9 2
-4 1
-1 8

4 5
1 2 -1 -4 -20
-8 -3 4 2 1
3 8 10 1 3
-4 -1 1 7 -6


maximum sum is = 29
top    = 2  left  = 2
bottom = 4  right = 4

After final matrix :

-3 4 2
8 10 1
-1 1 7


4 3
0 -2 -7
9 2 -6
5 1 -4
20 -8 0

4 1
1
-3
5
6

maximum sum is = 11
top    = 3  left  = 1
bottom = 4  right = 1

After final matrix :

5
6


4 1
1
-3
5
-6

maximum sum is = 5
top    = 3  left  = 1
bottom = 3  right = 1

After final matrix :

5

1 4
1 -3 5 -6


maximum sum is = 5
top    = 1  left  = 3
bottom = 1  right = 3

After final matrix :

5

1 4
-1 3 5 -6
*/

/*
#include<bits/stdc++.h>
using namespace std;
int matrix[150][150];
int kadane(int temp[],int rows)
{
    int max_sum = INT_MIN;
    int sum = 0;
    bool flag = false;
    for(int i=1; i< rows; i++)
    {
        if(temp[i]>=0){
            flag = true;
        }
        sum = sum + temp[i];
        if(sum<0){
            sum = 0;
        }
        else if(sum > max_sum){
            max_sum = sum;
        }
    }
    if(flag){
        return max_sum;
    }
    max_sum =  INT_MIN;
    for(int i=1; i< rows; i++){
         if(max_sum < temp[i]){
             max_sum = temp[i];
         }
    }
    return max_sum;
}
int Max_Sum (int rows,int columns)
{
    int maxSum=INT_MIN;
    for (int left = 0; left < columns; left++)
    {
        int temp[rows] = {0};
        for (int right = left; right < columns; right++)
        {
            for (int i = 0; i < rows; ++i)
                temp[i] += matrix[i][right];
            int sum = kadane(temp, rows);
            if (sum > maxSum)
                maxSum = sum;
        }
    }
    return maxSum;
}
int main()
{
    int rows,columns;
    while(scanf("%d%d",&rows,&columns) == 2 )
    {
        if(rows == 0 && columns == 0){
            break;
        }
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                scanf("%d",&matrix[i][j]);
            }
        }
       cout<<"maximum sum = "<<Max_Sum(rows,columns)<<endl;
    }
    return 0;
}

*/



//dynamically

#include<bits/stdc++.h>
using namespace std;
int main(){
    int Mat[100][100];
    int N,ans;
    int sum[100][101];
    int dp[101];

    while(scanf("%d",&N) == 1){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                scanf("%d",&Mat[i][j]);
            }
        }
        for(int i=0;i<N;i++){
            sum[i][0] = 0;
            for(int j=1;j<=N;j++){
                sum[i][j] = sum[i][j-1] + Mat[i][j-1];
            }
        }
        cout<<endl;
/*
         for(int i=0;i<N;i++){
            for(int j=1;j<=N;j++){
                    cout<<sum[i][j]<<"("<<i<<","<<j<<")"<<"  ";
            }
            cout<<endl;
         }

4
0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2


 0(0,1)  -2(0,2)  -9(0,3)  -9(0,4)
 9(1,1)   11(1,2)  5(1,3)   7(1,4)
-4(2,1)  -3(2,2)  -7(2,3)  -6(2,4)
-1(3,1)   7(3,2)   7(3,3)   5(3,4)

 0    9    5    4
-2    11   8    15
-9    5   -2    7
-9    7    1    6

-2    2    3    11
-9   -4   -3    8
-9   -2   -2    6

-7   -6   -4    0
-7   -4   -3   -2

 0    2    3    1
*/
//cout<<sum[0][0]<<endl;

        ans= INT_MIN;

 for(int i=0;i<N;i++){
    for(int j=i;j<N;j++){
            dp[0]=0;
      for(int k=0;k<N;k++){
        dp[k+1]=max(sum[k][j+1] - sum[k][i]+dp[k], sum[k][j+1] - sum[k][i]);
        cout<<setw(3)<<dp[k+1];
            ans=max(ans,dp[k+1]);
                }
                cout<<endl;
            }
        }

        printf("Maximum sum %d\n",ans);

    }
    return 0;
}



/*

4
0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2

*/
