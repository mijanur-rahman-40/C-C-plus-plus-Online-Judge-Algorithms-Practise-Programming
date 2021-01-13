
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
double d = 0;
double det(int n, double mat[100][100])
{
    int c, subi, i, j, subj;
    double submat[100][100];
    if (n == 2)
    {
        return( (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    }
    else
    {
        for(c = 0; c < n; c++)
        {
            subi = 0;
            for(i = 1; i < n; i++)
            {
                subj = 0;
                for(j = 0; j < n; j++)
                {
                    if (j == c)
                    {
                        continue;
                    }
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
            }
        d = d + (pow(-1 ,c) * mat[0][c] * det(n - 1 ,submat));
        }
    }
    return d;
}
int main()
{
    int n;
    cout<<"enter the order of matrix" ;
    cin>>n;
    double mat[100][100];
    int i, j;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"\ndeterminant = "<<det(n,mat);
    getch();
}


#include<conio.h>
#include<stdio.h>

int a[20][20],m;
int determinant(int f[20][20],int a);
int main()
{
  int i,j;
  printf("\n\nEnter order of matrix : ");
  scanf("%d",&m);
  printf("\nEnter the elements of matrix\n");
  for(i=1;i<=m;i++)
  {
  for(j=1;j<=m;j++)
  {
  printf("a[%d][%d] = ",i,j);
  scanf("%d",&a[i][j]);
  }
  }
  printf("\n\n---------- Matrix A is --------------\n");
  for(i=1;i<=m;i++)
     {
          printf("\n");
          for(j=1;j<=m;j++)
          {
               printf("\t%d \t",a[i][j]);
          }
     }
  printf("\n \n");
  printf("\n Determinant of Matrix A is %d .",determinant(a,m));
  getch();
}

int determinant(int f[20][20],int x)
{
  int pr,c[20],d=0,b[20][20],j,p,q,t;
  if(x==2)
  {
    d=0;
    d=(f[1][1]*f[2][2])-(f[1][2]*f[2][1]);
    return(d);
   }
  else
  {
    for(j=1;j<=x;j++)
    {
      int r=1,s=1;
      for(p=1;p<=x;p++)
        {
          for(q=1;q<=x;q++)
            {
              if(p!=1&&q!=j)
              {
                b[r][s]=f[p][q];
                s++;
                if(s>x-1)
                 {
                   r++;
                   s=1;
                  }
               }
             }
         }
     for(t=1,pr=1;t<=(1+j);t++)
     pr=(-1)*pr;
     c[j]=pr*determinant(b,x-1);
     }
     for(j=1,d=0;j<=x;j++)
     {
       d=d+(f[1][j]*c[j]);
      }
     return(d);
   }
}



/*
#include <bits/stdc++.h>
using namespace std;
#define N 4
void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n)
{
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
int determinantOfMatrix(int mat[N][N], int n)
{
    int D = 0;
    if (n == 1)
        return mat[0][0];
    int temp[N][N];
    int sign = 1;
    for (int f = 0; f < n; f++)
    {
        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f] * determinantOfMatrix(temp, n - 1);
        sign = -sign;
    }
    return D;
}

void display(int mat[N][N], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("  %d", mat[i][j]);
        printf("n");
    }
}

*/
/*
#include<bits/stdc++.h>
using namespace std;
#define MAX 13
int determ(int a[MAX][MAX],int n) {
  int det=0, p, h, k, i, j, temp[MAX][MAX];
  if(n==1) {
    return a[0][0];
  } else if(n==2) {
    det=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
    return det;
  } else {
    for(p=0;p<n;p++) {
      h = 0;
      k = 0;
      for(i=1;i<n;i++) {
        for( j=0;j<n;j++) {
          if(j==p) {
            continue;
          }
          temp[h][k] = a[i][j];
          k++;
          if(k==n-1) {
            h++;
            k = 0;
          }
        }
      }
      det=det+a[0][p]*pow(-1,p)*determ(temp,n-1);
    }
    return det;
  }
}
int main()
{
    int a[10][10];
    int num;
    scanf("%d",&num);

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            scanf("%d",&a[i][j]);
        }
    }
    cout<<determ(a,num)<<endl;
}
*/
