
#include<bits/stdc++.h>
using namespace std;
void Counting_sort(int arr[],int k,int n)
{
	int brr[15],crr[100]={0};
	//memset(crr,0,sizeof(crr));
	for(int j=1;j<=n;j++){
		crr[arr[j]]=crr[arr[j]]+1;
	}
	for(int i=1;i<=k;i++){
		crr[i]=crr[i]+crr[i-1];
	}
	for(int j=n;j>=1;j--){
		brr[crr[arr[j]]]=arr[j];
		crr[arr[j]]=crr[arr[j]] - 1;
	}
	printf("The Sorted array is : ");
	for(int i=1;i<=n;i++){
		printf(" %d ",brr[i]);
	}
	printf("\n");
}
int main()
{
	int n,i,k=0,arr[15];
	while(scanf("%d",&n) && n){
	printf("Enter the elements to be sorted :\n");
	for (i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>k){
		     k=arr[i];
            }
	}
	Counting_sort(arr,k,n);
	}
	return 0;
}
/*
#include <stdio.h>
#include <string.h>
#define RANGE 255

// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[])
{
    // The output character array that will have sorted arr
    char output[strlen(arr)];

    // Create a count array to store count of inidividul
    // characters and initialize count array as 0
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));

    // Store count of each character
    for(i = 0; arr[i]; ++i)
        ++count[arr[i]];

    // Change count[i] so that count[i] now contains actual
    // position of this character in output array
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i-1];

    // Build the output character array
    for (i = 0; arr[i]; ++i)
    {
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }

    // Copy the output array to arr, so that arr now
    // contains sorted characters
    for (i = 0; arr[i]; ++i)
        arr[i] = output[i];
}

// Driver program to test above function
int main()
{
    char arr[] = "geeksforgeeks";//"applepp";

    countSort(arr);

    printf("Sorted character array is %sn", arr);
    return 0;
}


*/






/*
Counting sort is a sorting technique based on keys between a specific range.
It works by counting the number of objects having distinct key values (kind of hashing).
Then doing some arithmetic to calculate the position of each object in the output sequence.

Let us understand it with the help of an example.

For simplicity, consider the data in the range 0 to 9.
Input data: 1, 4, 1, 2, 7, 5, 2
  1) Take a count array to store the count of each unique object.
  Index:     0  1  2  3  4  5  6  7  8  9
  Count:     0  2  2  0   1  1  0  1  0  0

  2) Modify the count array such that each element at each index
  stores the sum of previous counts.
  Index:     0  1  2  3  4  5  6  7  8  9
  Count:     0  2  4  4  5  6  6  7  7  7

The modified count array indicates the position of each object in
the output sequence.

  3) Output each object from the input sequence followed by
  decreasing its count by 1.
  Process the input data: 1, 4, 1, 2, 7, 5, 2. Position of 1 is 2.
  Put data 1 at index 2 in output. Decrease count by 1 to place
  next data 1 at an index 1 smaller than this index.
Recommended: Please solve it on “PRACTICE ” first, before moving on to the solution.
Following is C implementation of counting sort.
*/
// C Program for counting sort

