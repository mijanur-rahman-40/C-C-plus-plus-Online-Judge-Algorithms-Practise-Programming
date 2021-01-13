#include<bits/stdc++.h>
using namespace std;
#define sz 100
void countInversion(int mat[], int N)
{
    int cnt = 0, i, j;
    for(i=0;i<N*N;i++)
    {
       cout<<mat[i]<<endl;
    }
}
int main()
{
    int  N;
    cin>>N;
   int mat[sz][sz];
   int mat1[sz];
   int k=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        {
            cin>>mat[i][j];
            mat1[k++] = mat[i][j];
        }
     countInversion(mat1, N);

}
