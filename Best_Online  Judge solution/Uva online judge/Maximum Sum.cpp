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
    while(scanf("%d",&rows) == 1 )
    {
        columns = rows;
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                scanf("%d",&matrix[i][j]);
            }
        }
       cout<<Max_Sum(rows,columns)<<endl;
    }
    return 0;
}
