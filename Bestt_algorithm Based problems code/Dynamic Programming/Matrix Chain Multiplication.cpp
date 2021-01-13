/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[100][100],p[100],j,k;
    int num;
    cin>>num;
    for(int i=0; i<=num; i++){
        cin>>p[i];
    }
    for(int i=1; i<=num; i++){
            mat[i][i]=0;

    }
    for(int d=1; d<num; d++){
        for(int i=1; i<=num-d; i++){
            j= i+d;
            k=i;
        mat[i][j] = mat[i][k]+mat[k+1][j]+p[i-1]*p[k]*p[j];
        for(k=i+1; k<j; k++){
        mat[i][j]=min(mat[i][j],mat[i][k]+mat[k+1][j]+p[i-1]*p[k]*p[j]);
            }
     // printf("mat[%d][%d]   ",d,i);
        }
        //cout<<endl;
    }
    cout<<"Minimum Operation: "<<mat[1][num]<<endl;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    int arr[100];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    int temp[100][100];
    memset(temp,0,sizeof(temp));
    for(int len=2; len < num; len++){
            for(int i=0; i < num - len; i++){
                int j = i + len;
                temp[i][j] = INT_MAX;
                for(int k=i+1; k < j; k++){
    temp[i][j] = min(temp[i][j], temp[i][k] + temp[k][j] + arr[i]*arr[k]*arr[j]);
                }
            }
        }
        cout<<temp[0][num-1]<<endl;
}

*/

#include<bits/stdc++.h>
using namespace std;
void inorder(int s[][5],int l,int h){
 	if(s[l][h]!=0){
 		cout<<"(";
	 	inorder(s,l,s[l][h]);
	 }
	   if(s[l][h]==0){
	 		cout<<"A"<<s[l][h+1];
	    }
		 if(s[l][h]!=0){
		 inorder(s,s[l][h]+1,h);
		 cout<<")";
	 }
 }
int main()
{
    int num;
    scanf("%d",&num);
    int arr[100];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
     int s[5][5]={0};
    int temp[100][100];
    memset(temp,0,sizeof(temp));
    for(int len=1; len < num-1; len++){
            for(int i=1; i <num - len; i++){
                int j = i + len;
                temp[i][j] = INT_MAX;
                for(int k=i; k<=j-1; k++){
    temp[i][j]=min(temp[i][j],temp[i][k]+temp[k+1][j]+arr[i-1]*arr[k]*arr[j]);
          cout<<" k : "<<k<<endl;
            s[i][j] =k;
                }
            }
        }
        inorder(s,1,4);
        cout<<temp[1][num-1]<<endl;
}




/*
5
5 4 6 2 7

s[1][2] : 1
s[2][3] : 2
s[3][4] : 3
s[1][3] : 1
s[1][3] : 2
s[2][4] : 2
s[2][4] : 3
s[1][4] : 1
s[1][4] : 2
s[1][4] : 3
158

 */
 /*
#include<iostream>  (((A1A2)A3)A0)
using namespace std;
 void inorder(int s[][5],int l,int h){
 	if(s[l][h]!=0){
 		cout<<"(";
	 	inorder(s,l,s[l][h]);
	 }
	   if(s[l][h]==0){
	 		cout<<"A"<<s[l][h+1];
	    }
		 if(s[l][h]!=0){
		 inorder(s,s[l][h]+1,h);
		 cout<<")";
	 }
 }
int main()
{
    int n=5,i;
    int p[]={5,4,6,2,7};
    int m[5][5]={0};
    int s[5][5]={0};
    int j,q;
    for (int d=1; d<n-1; d++){
        for (int i=1; i<n-d; i++){
            j = i+d;
            m[i][j] = INT_MAX;
        for (int k=i; k<=j-1; k++){
          m[i][j]=min(m[i][j],m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]);
		           s[i][j] =k;
		           cout<<"s["<<i<<"]["<<j<<"] : "<<k<<endl;
                }
            }
        }
    cout<<m[1][n-1]<<" ";
    inorder(s,1,4);
    return 0;
}

/*
//Whenever i == j put M = 0 (Explanation provided above)
for (int i = 1; i < n; i++)
{
    M[i, i] = 0;
}

// 1. Possible values for the left index (i) of the sub
//    matrix chain go from (1) to (n - 1)
// 2. Possible values for the right index (j) of the sub
//    matrix chain go from the next position after (i)
//    to the last position (n)
// 3. Sub matrix chain between (i) and (j) is split
//    at position (k) which goes from (i) to (j-1)

for (int i = 1; i < n; i++)
for (int j = i + 1; j <= n; j++)
for (int k = i; k < j; k++)
{
    //Choose the value of (k) that gives the minimum number
    //of scalar multiplications so we keep updating the
    //number until we get the smallest one
    if (M[i, k] + M[k + 1, j] + P(i-1)P(k)P(j) < M[i, j])
    {
        //Once the (k) loop is finished then M[i, j]
        //holds the minimum number of scalar multiplications
        M[i, j] = M[i, k] + M[k + 1, j] + P(i-1)P(k)P(j);

        //Save the (k) value which is a mark that points to
        //the position where a parenthesis is going to be placed
        S[i, j] = k;
    }
}

PrintParenthesis(S, i, j)
{
    //When i == j this means a sub chain of only one
    //matrix so no need to print parenthesis instead
    //you just print the matrix name
    if (i == j)
    {
        Print Ai;
    }
    else
    {
        //Otherwise get the position at which the sub chain is split
        //then enclose the two smaller sub chains with parenthesis
        int k = S[i, j];

        Print "(";

        //Recursively apply the function on the left
        //side of the split around (k)
        PrintParenthesis(S, i, k);

        //Recursively apply the function on the right
        //side of the split around (k)
        PrintParenthesis(S, k + 1, j);

        Print ")";
    }
}
*/

//5        2 3 6 4 5
/*
#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>
#include <string>

using namespace std;

vector<int> rc;
vector< vector<int> > DP, splits;

string mult(int i, int j)
{
	if (i == j) {
		return to_string(i); // Basis
	} else {
		int k = splits[i][j];
		string X = mult(i, k);
		string Y = mult(k + 1, j);
		cout << "multiply " << X << " and " << Y << endl;
		return "(" + X + "*" + Y + ")";
	}
}

int main()
{
	int c; cin >> c;
	int n = c - 1;
	rc = vector<int>(c + 1, -1);
	DP = splits = vector< vector<int> >(c, vector<int>(c, 0));
	int x;

	// for every matrix i, rc[i] is row and rc[i+1] is column
	for (int i = 1; i <= c; i++) {
		cin >> x;
		rc[i] = x;
	}

	for (int w = n; w > 0; w--) {
		int p = n - w;
		for (int j = n; j > p; j--) {
			int i = j - p - 1;
			DP[i][j] = INT_MAX;
			for (int k = i; k < j; k++) {
				int ops = DP[i][k] + DP[k + 1][j] + rc[i] * rc[k + 1] * rc[j + 1];
				if (ops < DP[i][j]) {
					DP[i][j] = ops;
					splits[i][j] = k;

				}
			}
		}
	}

	cout << mult(1, n);
}

*/

/*

#include<stdio.h>
#include<limits.h>
// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
int MatrixChainOrder(int p[], int i, int j)
{
    if(i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
    for (k = i; k <j; k++)
    {
        count = MatrixChainOrder(p, i, k) +
                MatrixChainOrder(p, k+1, j) +
                p[i-1]*p[k]*p[j];
        if (count < min)
            min = count;
    }
    return min;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Minimum number of multiplications is %d ",
                          MatrixChainOrder(arr, 1, n-1));
    getchar();
    return 0;
}

*/
/*
// C++ program to print optimal parenthesization
// in matrix chain multiplication.
#include<bits/stdc++.h>
using namespace std;

// Function for printing the optimal
// parenthesization of a matrix chain product
void printParenthesis(int i, int j, int n,
                      int *bracket, char &name)
{
    // If only one matrix left in current segment
    if (i == j)
    {
        cout << name++;
        return;
    }

    cout << "(";

    // Recursively put brackets around subexpression
    // from i to bracket[i][j].
    // Note that "*((bracket+i*n)+j)" is similar to
    // bracket[i][j]
    printParenthesis(i, *((bracket+i*n)+j), n,
                     bracket, name);

    // Recursively put brackets around subexpression
    // from bracket[i][j] + 1 to j.
    printParenthesis(*((bracket+i*n)+j) + 1, j,
                     n, bracket, name);
    cout << ")";
}

// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
// Please refer below article for details of this
// function
// https://goo.gl/k6EYKj
void matrixChainOrder(int p[], int n)
{
   /* For simplicity of the program, one extra
       row and one extra column are allocated in
        m[][]. 0th row and 0th column of m[][]
        are not used
    int m[n][n];

    // bracket[i][j] stores optimal break point in
    // subexpression from i to j.
    int bracket[n][n];

    /* m[i,j] = Minimum number of scalar multiplications
    needed to compute the matrix A[i]A[i+1]...A[j] =
    A[i..j] where dimension of A[i] is p[i-1] x p[i]

    // cost is zero when multiplying one matrix.
    for (int i=1; i<n; i++)
        m[i][i] = 0;

    // L is chain length.
    for (int L=2; L<n; L++)
    {
        for (int i=1; i<n-L+1; i++)
        {
            int j = i+L-1;
            m[i][j] = INT_MAX;
            for (int k=i; k<=j-1; k++)
            {
                // q = cost/scalar multiplications
                int q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;

                    // Each entry bracket[i,j]=k shows
                    // where to split the product arr
                    // i,i+1....j for the minimum cost.
                    bracket[i][j] = k;
                }
            }
        }
    }

    // The first matrix is printed as 'A', next as 'B',
    // and so on
    char name = 'A';

    cout << "Optimal Parenthesization is : ";
    printParenthesis(1, n-1, n, (int *)bracket, name);
    cout << "nOptimal Cost is : " << m[1][n-1];
}

// Driver code
int main()
{
    int arr[] = {40, 20, 30, 10, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    matrixChainOrder(arr, n);
    return 0;
}


view plaincopy to clipboardprint?
//Whenever i == j put M = 0 (Explanation provided above)
for (int i = 1; i < n; i++)
{
    M[i, i] = 0;
}

// 1. Possible values for the left index (i) of the sub
//    matrix chain go from (1) to (n - 1)
// 2. Possible values for the right index (j) of the sub
//    matrix chain go from the next position after (i)
//    to the last position (n)
// 3. Sub matrix chain between (i) and (j) is split
//    at position (k) which goes from (i) to (j-1)

for (int i = 1; i < n; i++)
for (int j = i + 1; j <= n; j++)
for (int k = i; k < j; k++)
{
    //Choose the value of (k) that gives the minimum number
    //of scalar multiplications so we keep updating the
    //number until we get the smallest one
    if (M[i, k] + M[k + 1, j] + P(i-1)P(k)P(j) < M[i, j])
    {
        //Once the (k) loop is finished then M[i, j]
        //holds the minimum number of scalar multiplications
        M[i, j] = M[i, k] + M[k + 1, j] + P(i-1)P(k)P(j);

        //Save the (k) value which is a mark that points to
        //the position where a parenthesis is going to be placed
        S[i, j] = k;
    }
}


PrintParenthesis(S, i, j)
{
    //When i == j this means a sub chain of only one
    //matrix so no need to print parenthesis instead
    //you just print the matrix name
    if (i == j)
    {
        Print Ai;
    }
    else
    {
        //Otherwise get the position at which the sub chain is split
        //then enclose the two smaller sub chains with parenthesis
        int k = S[i, j];

        Print "(";

        //Recursively apply the function on the left
        //side of the split around (k)
        PrintParenthesis(S, i, k);

        //Recursively apply the function on the right
        //side of the split around (k)
        PrintParenthesis(S, k + 1, j);

        Print ")";
    }
}
*/
