
#include<bits/stdc++.h>
using namespace std;
int mat[230][230] = {0};
int main()
{
    int tst,j=1;
    scanf("%d",&tst);
    while(tst--){
    int num;
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        for(int j=0; j<=i; j++){
            scanf("%d",&mat[i][j]);
        }
      }
      for(int i=0; i<num-1; i++){
        for(int j=0; j<num-i-1; j++){
            scanf("%d",&mat[num+i][j]);
        }
      }
      for(int i=1; i<num; i++){
        for(int j=0; j<=i; j++){
            if( i==j ){
                mat[i][j] = mat[i][j] + mat[i-1][j-1];
            }
            else{
                mat[i][j] += max(mat[i-1][j],mat[i-1][j-1]);
            }
        }
      }
      for(int i=0; i<num-1; i++){
        for(int j=0; j<num-i-1; j++){
            mat[i+num][j] += max(mat[i-1+num][j],mat[i-1+num][j+1]);
        }
      }
      printf("Case %d: %d\n",j++,mat[2*num-2][0]);
    }

}


/*

4

7

6 4

2 5 10

9 8 12 2

2 12 7

8 2

10
 /*
    for(int i=1; i<=2*n-1; i++){
            if(i<=n){
                temp = i;
            }
            if(i>n){
                temp = 2*n -i;
            }

         for(int j=1; j<=temp; j++){
                scanf("%lld",&arr[i][j]);
        }
    }
*/
/*
#include <bits/stdc++.h>
using namespace std;
int cases, caseno, n;
int a[205][105];

int main()
{

    int cases;
    scanf("%d", &cases);
    while( cases-- )
    {
        scanf("%d", &n);
        for( int i = 0; i < n; i++ )
            for( int j = 0; j <= i; j++ )
                scanf("%d", &a[i][j]);
        for( int i = 0; i < n - 1; i++ )
            for( int j = 0; j < n - i - 1; j++ )
                scanf("%d", &a[i+n][j]);
        cout<<a[-1][0]<<endl;
        for( int i = 1; i < n; i++ ){
            for( int j = 0; j <= i; j++ )
            {
                if( i == j ){
                    a[i][j] += a[i-1][j-1];
                    printf("a[%d][%d] = %d ",i,j,a[i][j]);
                }
                else{
                        a[i][j] += max( a[i-1][j], a[i-1][j-1] );
                         printf("a[%d][%d] = %d ",i,j,a[i][j]);
                }
            }
            cout<<endl;
        }
        for( int i = 0; i < n - 1; i++ ){
            for( int j = 0; j < n - i - 1; j++ ){
                a[i+n][j] += max( a[i-1+n][j], a[i-1+n][j+1] );
                 printf("a[%d][%d] = %d ",i+n,j,a[i+n][j]);
            }
            cout<<endl;
        }
        printf("Case %d: %d\n", ++caseno, a[2*n-2][0]);
    }
    return 0;
}

*/
