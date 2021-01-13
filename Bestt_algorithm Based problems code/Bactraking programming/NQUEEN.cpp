/*
#include<iostream>
#define sz 100
using namespace std;
bool findSolution(int mat[sz][sz], int col, int n);
bool isSafe(int mat[sz][sz], int n, int row, int col);
int main()
{
    int n, i, j, col;
    cin>>n;
    int mat[sz][sz];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mat[i][j] = 0;
    //Step 1: Start in the leftmost column
    col = 0;
    if(findSolution(mat, col, n)) {
        //print solution
        cout<<"Solution Found: "<<endl;
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else {
        cout<<"There is no solution"<<endl;
    }
    return 0;
}
bool findSolution(int mat[sz][sz], int col, int n)
{
    int i;
    //Step 2: If all queens are placed
    //          return true
    if(col >= n)
        return true;
    //Step 3: Try all rows in the current column. Do following for every tried row:
    for(i=0;i<n;i++) {
        //3_a) If the queen can be placed safely in this row then mark this [row, column]
        //as part of the solution and recursively check if placing queen here leads to
        //a solution
        if(isSafe(mat, n, i, col)) {
            mat[i][col] = 1;
            //3_b) If placing queen in [row, column] leads to a solution then return true
            if(findSolution(mat, col + 1, n))
                return true;
            //3_c) If placing queen doesn't lead to a solution then unmark this [row, column]
            //and go to step (a) to try other rows.
            mat[i][col] = 0;
        }
    }
    return false;
}
bool isSafe(int mat[sz][sz], int n, int row, int col)
{
    int i, j;
    //checking left  columns of same row
    for(i=0;i<col;i++)
        if(mat[row][i] == 1)
            return false;
    //checking left-top diagonals
    for(i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
        if(mat[i][j] == 1)
            return false;
    //checking left-bottom diagonals
    for(i=row+1,j=col-1;i<n && j>=0;i++,j--)
        if(mat[i][j] == 1)
            return false;
    return true;
}




#include<stdio.h>
#include<math.h>

char a[10][10];
int n;

void printmatrix() {
   int i, j;
   printf("\n");

   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++)
         printf("%c\t", a[i][j]);
      printf("\n\n");
   }
}

int getmarkedcol(int row) {
   int i;
   for (i = 0; i < n; i++)
      if (a[row][i] == 'Q') {
         return (i);
         break;
      }
}

int feasible(int row, int col) {
   int i, tcol;
   for (i = 0; i < n; i++) {
      tcol = getmarkedcol(i);
      if (col == tcol || abs(row - i) == abs(col - tcol))
         return 0;
   }
   return 1;
}

void nqueen(int row) {
   int i, j;
   if (row < nk) {
      for (i = 0; i < n; i++) {
         if (feasible(row, i)) {
            a[row][i] = 'Q';
            nqueen(row + 1);
            a[row][i] = '.';
         }
      }
   } else {
      printf("\nThe solution is:- ");
      printmatrix();
   }
}

int main() {
   int i, j;

   printf("\nEnter the no. of queens:- ");
   scanf("%d", &n);

   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
         a[i][j] = '.';

   nqueen(0);
   return (0);
}

*/


#include<bits/stdc++.h>
using namespace std;
#define sz 100
bool isSafe(int mat[sz][sz],int row,int col,int num)
{
    for(int j=0; j<col; j++){
        if(mat[row][j] == 1)
            return false;
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
        if(mat[i][j] == 1)
            return false;
    for(int i=row+1,j=col-1;i<num && j>=0;i++,j--)
        if(mat[i][j] == 1)
            return false;
    return true;
}
bool getSolution(int mat[sz][sz],int col,int num)
{
    if(col >= num){
        return true;
    }
    for(int i=0; i<num; i++){
        if(isSafe(mat,i,col,num)){
            mat[i][col] = 1;
            if(getSolution(mat,col+1,num)){
                return true;
            }
            else
                mat[i][col] = 0;
        }
    }
    return false;
}
int main()
{
    int num;
    scanf("%d",&num);
    int mat[sz][sz];
    memset(mat,0,sizeof(mat));
    int col = 0;
    if(getSolution(mat,col,num)){
        cout<<"I get the solution"<<endl;
        for(int i=0; i<num; i++){
            for(int j=0; j<num; j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"There is no solution for this"<<endl;
    }
    return 0;
}
