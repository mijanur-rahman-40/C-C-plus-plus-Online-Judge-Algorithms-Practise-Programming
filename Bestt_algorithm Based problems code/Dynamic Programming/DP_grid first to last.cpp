
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,j=1;
    scanf("%d",&tst);
    while(tst--){
       int m,n; cin>>m>>n;
       int mat[m][n];
       mat[0][0]=1;
    for(int i=1; i<=n-1 ;i++)
       {
        mat[0][i]=1;
       }
    for(int i=1; i<=m-1 ;i++)
       {
        mat[i][0]=1;
       }

       for(int i=1; i<=m-1; i++)
       {
           for(int j=1; j<=n-1; j++){
            mat[i][j]=mat[i-1][j]+mat[i][j-1];
           }
       }
       printf("Case %d: %d\n",j++,mat[m-1][n-1]);
    }
    return 0;
}
