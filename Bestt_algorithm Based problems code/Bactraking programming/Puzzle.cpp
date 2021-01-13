/*
#include<iostream>
using namespace std;
#define sz 100
int countInversion(int mat[], int N);
int getXRow(int mat[sz][sz], int N);
int main()
{
    int N, i, j, pos, inv_cnt;
    cin>>N;
    int mat[sz][sz];
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j] == 0)
                pos = N-i;
        }
    inv_cnt = countInversion((int*)mat, N);
   cout<<inv_cnt<<endl;
    if(N & 1)
    {
        //N ODD
        if(!(inv_cnt & 1))
            cout<<"Solvable"<<endl;
        else
            cout<<"Not Solvable"<<endl;
    }
    else
    {
        //N EVEN
        pos = getXRow(mat, N);
        if(((inv_cnt & 1) && !(pos & 1)) || (!(inv_cnt & 1) && (pos & 1)))
            cout<<"Solvable"<<endl;
        else
            cout<<"Not Solvable"<<endl;
    }
    return 0;
}
int countInversion(int mat[], int N)
{
    int cnt = 0, i, j;
    for(i=0;i<N*N-1;i++)
    {
        for(j=i+1;j<N*N;j++)
        {
            if(mat[i] > mat[j])
                cnt++;
        }
    }
    return cnt;
}
int getXRow(int mat[sz][sz], int N)
{
    int i, j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(mat[i][j] == 0)
                return N-i;
        }
    }
}

*/

#include<bits/stdc++.h>
using namespace std;
int coun_inversion(int mat[],int n)
{
    int coun = 0;
    for(int i=0; i<n*n-1; i++){
        for(int j=i+1; j<n*n; j++){
            if(mat[i] && mat[j] && mat[i]>mat[j]){
                coun++;
            }
       }
    }
  return coun;
}
int main()
{
    int num;
    cin>>num;
    int arr[num+1][num+1];
    int mat[num*num+1];
    int k=0,pos;
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 0){
               pos = num -i ;
            }
            mat[k++] = arr[i][j];
        }
    }
    int inv_cnt = coun_inversion(mat,num);
    cout<<inv_cnt<<endl;
    if(num %2==1)
    {
        //num ODD
              if((inv_cnt%2 ==0 ))
            cout<<"Solvable"<<endl;
        else
            cout<<"Not Solvable"<<endl;
    }
    else
    {
        //num EVEN
        if(((inv_cnt%2==1) && (pos%2==0)) || ((inv_cnt%2 ==0 ) && (pos%2==1)))
            cout<<"Solvable"<<endl;
        else
            cout<<"Not Solvable"<<endl;
    }
    return 0;
}





/*


                    13 2 10 3
                    1 12 8 4
                    5 0 9 6
                    15 14 11 7


#include <iostream>
#define N 4
using namespace std;

// A utility function to count inversions in given
// array 'arr[]'. Note that this function can be
// optimized to work in O(n Log n) time. The idea
// here is to keep code small and simple.
int getInvCount(int arr[])
{
    int inv_count = 0;
    for (int i = 0; i < N * N - 1; i++)
    {
        for (int j = i + 1; j < N * N; j++)
        {
            // count pairs(i, j) such that i appears
            // before j, but i > j.
            if (arr[j] && arr[i] && arr[i] > arr[j])
                inv_count++;
        }
    }
    return inv_count;
}

// find Position of blank from bottom
int findXPosition(int puzzle[N][N])
{
    // start from bottom-right corner of matrix
    for (int i = N - 1; i >= 0; i--)
        for (int j = N - 1; j >= 0; j--)
            if (puzzle[i][j] == 0)
                return N - i;
}

// This function returns true if given
// instance of N*N - 1 puzzle is solvable
bool isSolvable(int puzzle[N][N])
{
    // Count inversions in given puzzle
    int invCount = getInvCount((int*)puzzle);
    cout<<invCount<<endl;

    // If grid is odd, return true if inversion
    // count is even.
    if (N & 1)
        return !(invCount & 1);

    else     // grid is even
    {
        int pos = findXPosition(puzzle);
        if (pos & 1)
            return !(invCount & 1);
        else
            return invCount & 1;
    }
}

// Driver program to test above functions
int main()
{

   int puzzle[N][N] = {
                    {13, 2, 10, 3},
                    {1, 12, 8, 4},
                    {5, 0, 9, 6},
                    {15, 14, 11, 7},
                };

    /*
    int puzzle[N][N] =
    {
        {12, 1, 10, 2},
        {7, 11, 4, 14},
        {5, 0, 9, 15}, // Value 0 is used for empty space
        {8, 13, 6, 3},
    };
    13 2 10 3
1 12 8 4
5 9 6 15
14 11 7 0

    int puzzle[N][N] = {{1, 8, 2},
                    {0, 4, 3},
                    {7, 6, 5}};

    int puzzle[N][N] = {
                    {13, 2, 10, 3},
                    {1, 12, 8, 4},
                    {5, 0, 9, 6},
                    {15, 14, 11, 7},
                };

    int puzzle[N][N] = {
                    {6, 13, 7, 10},
                    {8, 9, 11, 0},
                    {15, 2, 12, 5},
                    {14, 3, 1, 4},
                };


    int puzzle[N][N] = {
                    {3, 9, 1, 15},
                    {14, 11, 4, 6},
                    {13, 0, 10, 12},
                    {2, 7, 8, 5},
                };
*

    isSolvable(puzzle)? cout << "Solvable":
                        cout << "Not Solvable";
    return 0;
}

*/
