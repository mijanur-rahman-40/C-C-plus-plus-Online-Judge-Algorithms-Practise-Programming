#include<bits/stdc++.h>
using namespace std;

// sum denotes the current sum of the subset
// currindex denotes the index we have reached in
// the given array
void distSumRec(int arr[], int n, int sum,
                int currindex, unordered_set<int> &s)
{
    if (currindex > n)
        return;

    if (currindex == n)
    {
        s.insert(sum);
        return;
    }

    distSumRec(arr, n, sum + arr[currindex],
                            currindex+1, s);
    distSumRec(arr, n, sum, currindex+1, s);
}

// This function mainly calls recursive function
// distSumRec() to generate distinct sum subsets.
// And finally prints the generated subsets.
void printDistSum(int arr[], int n)
{
    unordered_set<int> s;
    distSumRec(arr, n, 0, 0, s);

    // Print the result
    for (auto i=s.begin(); i!=s.end(); i++)
        cout << *i << " ";
}

// Driver code
int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printDistSum(arr, n);
    return 0;
}
