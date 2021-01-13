/*
#include<bits/stdc++.h>
using namespace std;
bool isSubsetSum(int set[], int n, int sum)
{
    // The value of subset[i][j] will be true if there is a
    // subset of set[0..j-1] with sum equal to i
    bool subset[n+1][sum+1];

    // If sum is 0, then answer is true
    for (int i = 0; i <= n; i++)
      subset[i][0] = true;

    // If sum is not 0 and set is empty, then answer is false
    for (int i = 1; i <= sum; i++)
      subset[0][i] = false;

     // Fill the subset table in botton up manner
     for (int i = 1; i <= n; i++)
     {
       for (int j = 1; j <= sum; j++)
       {
         if(j<set[i-1])
         subset[i][j] = subset[i-1][j];
         if (j >= set[i-1])
           subset[i][j] = subset[i-1][j] ||
                                 subset[i - 1][j-set[i-1]];
       }
     }

        // uncomment this code to print table
     for (int i = 0; i <= n; i++)
     {
       for (int j = 0; j <= sum; j++){
          printf ("%4d", subset[i][j]);
       }
       printf("\n");
     }

     return subset[n][sum];
}

// Driver program to test above function
int main()
{
  int set[] = {1,2,4};
  int sum = 3;
  int n = sizeof(set)/sizeof(set[0]);
  if (isSubsetSum(set, n, sum) == true)
     printf("Found a subset with given sum");
  else
     printf("No subset with given sum");
  return 0;
}



#include <stdio.h>

// Returns true if there is a subset of set[] with sun equal to given sum
bool isSubsetSum(int set[], int n, int sum)
{
   // Base Cases
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;

   // If last element is greater than sum, then ignore it
   if (set[n-1] > sum)
     return isSubsetSum(set, n-1, sum);

    else, check if sum can be obtained by any of the following
      (a) including the last element
      (b) excluding the last element
   return isSubsetSum(set, n-1, sum) ||
                        isSubsetSum(set, n-1, sum-set[n-1]);
}

// Driver program to test above function
int main()
{
  int set[] = {3, 34, 4, 12, 5, 2};
  int sum = 9;
  int n = sizeof(set)/sizeof(set[0]);
  if (isSubsetSum(set, n, sum) == true)
     printf("Found a subset with given sum");
  else
     printf("No subset with given sum");
  return 0;
}


*/
/*

#include <stdio.h>
#include <stdlib.h>

#define ARRAYSIZE(a) (sizeof(a))/(sizeof(a[0]))

static int total_nodes;
// prints subset found
void printSubset(int A[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%*d", 5, A[i]);
    }

    printf("n");
}

// inputs
// s            - set vector
// t            - tuplet vector
// s_size       - set size
// t_size       - tuplet size so far
// sum          - sum so far
// ite          - nodes count
// target_sum   - sum to be found
void subset_sum(int s[], int t[],
                int s_size, int t_size,
                int sum, int ite,
                int const target_sum)
{
    total_nodes++;
    if( target_sum == sum )
    {
        // We found subset
        printSubset(t, t_size);
        // Exclude previously added item and consider next candidate
        subset_sum(s, t, s_size, t_size-1, sum - s[ite], ite + 1, target_sum);
        return;
    }
    else
    {
        // generate nodes along the breadth
        for( int i = ite; i < s_size; i++ )
        {
            t[t_size] = s[i];
            // consider next level node (along depth)
            subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
        }
    }
}

// Wrapper to print subsets that sum to target_sum
// input is weights vector and target_sum
void generateSubsets(int s[], int size, int target_sum)
{
    int *tuplet_vector = (int *)malloc(size * sizeof(int));

    subset_sum(s, tuplet_vector, size, 0, 0, 0, target_sum);

    free(tuplet_vector);
}

int main()
{
    int weights[] = {10, 7, 5, 18, 12, 20, 15};
    int size = ARRAYSIZE(weights);

    generateSubsets(weights, size, 35);
    printf("Nodes generated %dn", total_nodes);
    return 0;
}


// C++ program to count all subsets with
// given sum.
#include <bits/stdc++.h>
using namespace std;

// dp[i][j] is going to store true if sum j is
// possible with array elements from 0 to i.
bool** dp;

void display(const vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

// A recursive function to print all subsets with the
// help of dp[][]. Vector p[] stores current subset.
void printSubsetsRec(int arr[], int i, int sum, vector<int>& p)
{
    // If we reached end and sum is non-zero. We print
    // p[] only if arr[0] is equal to sun OR dp[0][sum]
    // is true.
    if (i == 0 && sum != 0 && dp[0][sum])
    {
        p.push_back(arr[i]);
        display(p);
        return;
    }

    // If sum becomes 0
    if (i == 0 && sum == 0)
    {
        display(p);
        return;
    }

    // If given sum can be achieved after ignoring
    // current element.
    if (dp[i-1][sum])
    {
        // Create a new vector to store path
        vector<int> b = p;
        printSubsetsRec(arr, i-1, sum, b);
    }

    // If given sum can be achieved after considering
    // current element.
    if (sum >= arr[i] && dp[i-1][sum-arr[i]])
    {
        p.push_back(arr[i]);
        printSubsetsRec(arr, i-1, sum-arr[i], p);
    }
}

// Prints all subsets of arr[0..n-1] with sum 0.
void printAllSubsets(int arr[], int n, int sum)
{
    if (n == 0 || sum < 0)
       return;

    // Sum 0 can always be achieved with 0 elements
    dp = new bool*[n];
    for (int i=0; i<n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }

    // Sum arr[0] can be achieved with single element
    if (arr[0] <= sum)
       dp[0][arr[0]] = true;

    // Fill rest of the entries in dp[][]
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] ||
                                       dp[i-1][j-arr[i]]
                                     : dp[i - 1][j];
    if (dp[n-1][sum] == false)
    {
        printf("There are no subsets with sum %d\n", sum);
        return;
    }

    // Now recursively traverse dp[][] to find all
    // paths from dp[n-1][sum]
    vector<int> p;
    printSubsetsRec(arr, n-1, sum, p);
}

// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 10;
    printAllSubsets(arr, n, sum);
    return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int set[100];
    int sum,num;  scanf("%d",&num);
    for(int i=0; i<num; i++){
        scanf("%d",&set[i]);
    }
    scanf("%d",&sum);
    bool subset[100][100];
    for(int i=0; i<=num; i++){
        subset[i][0] = true;
    }
     for(int i=1; i<=sum; i++){
        subset[0][i] = false;
    }
    for(int i=1; i<=num; i++){
        for(int j= 1; j<=sum; j++){
            if(j<set[i-1])
            {
                subset[i][j] = subset[i-1][j];
            }
            if(j>=set[i-1])
                subset[i][j] = subset[i-1][j] || subset[i-1][j-set[i-1]];
        }
    }
    if(subset[num][sum] ==  true){
        cout<<"Sum is possible for this set"<<endl;
    }
    else
        cout<<"Sum is not possible for this set"<<endl;
        cout<<"Print the table"<<endl;

       for(int i=0; i<=num; i++){
        for(int j=1; j<=sum; j++){
            cout<<subset[i][j]<<" ";
          }
        cout<<endl;
       }
        cout << "Printing the subset:\n";
    if (subset[num][sum]){
        int j = sum;
        for (int i=num; i>=1; i--) {
            if (!subset[i-1][j]){
                cout << "Pick set[" << i-1 << "] = " << set[i-1] << "\n";
                j -= set[i-1];
            }
        }
    }
}
