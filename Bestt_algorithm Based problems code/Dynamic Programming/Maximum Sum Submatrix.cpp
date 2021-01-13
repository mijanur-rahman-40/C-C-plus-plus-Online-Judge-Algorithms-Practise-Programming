#include <iostream>
#include <climits>
#define N 3
using namespace std;
int sumMatrix[N][N];
void preComputeMatrix(int a[][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(i==0 && j==0)
                sumMatrix[i][j] = a[i][j];
            else if(i==0)
                sumMatrix[i][j]+=sumMatrix[i][j-1] + a[i][j];
            else if(j==0)
                sumMatrix[i][j]+=sumMatrix[i-1][j] + a[i][j];
            else
                sumMatrix[i][j]+=sumMatrix[i-1][j]+sumMatrix[i][j-1]-sumMatrix[i-1][j-1] + a[i][j];
        }
    }
}
int computeSum(int a[][N],int i1,int i2,int j1,int j2)
{
    if(i1==0 && j1==0)
        return sumMatrix[i2][j2];
    else if(i1==0)
        return sumMatrix[i2][j2] - sumMatrix[i2][j1-1];
    else if(j1==0)
        return sumMatrix[i2][j2] - sumMatrix[i1-1][j2];
    else
        return sumMatrix[i2][j2] - sumMatrix[i2][j1-1]- sumMatrix[i1-1][j2] + sumMatrix[i1-1][j1-1];
}
int getMaxMatrix(int a[][N])
{
    int maxSum = INT_MIN;
    for(int row1=0; row1<N; row1++)
    {
        for(int row2=row1; row2<N; row2++)
        {
            for(int col1=0; col1<N; col1++)
            {
                for(int col2=col1; col2<N; col2++)
                {
                    maxSum = max(maxSum,computeSum(a,row1,row2,col1,col2));
                }
            }
        }
    }
    return maxSum;
}
int main( void )
{
    int a[N][N] = {{-1,-2,-3},{-10,-5,-15},{6,-8,-20}};
    preComputeMatrix(a);
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
            cout<<sumMatrix[i][j]<<" ";
        cout<<endl;
    }
    cout<<getMaxMatrix(a);
    return 0;
}
