
/*
#include<stdlib.h>
#include<stdio.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    // create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there
       are any
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there
       are any
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

// UTILITY FUNCTIONS
//Function to print an array
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

//Driver program to test above functions
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;
int arr[50];
 void merge(int low,int mid,int high);
  void merge_sort(int low,int high)
{
    int mid;
       if(low<high)
 {
  mid=low+(high-low)/2;
 //This avoids overflow when low, high are too large
  merge_sort(low,mid);
   printf("low= %d    mid= %d\n\n",low,mid);
  printf("after first merge sort\n\nmid+1= %d     high= %d\n",mid+1,high);
     merge_sort(mid+1,high);
      printf("after first merge sort1\n\n low= %d   mid= %d    high= %d\n",low,mid,high);
  merge(low,mid,high);

 }
}
void merge(int low,int mid,int high)
{
 int hi,lo,mi,brr[50],i;
 hi=low;
 lo=low;
 mi=mid+1;
 while((hi<=mid)&&(mi<=high)){
         if(arr[hi]<=arr[mi]){
             brr[lo]=arr[hi];
            hi++;
          }
         else{
             brr[lo]=arr[mi];
           mi++;
           }
            lo++;
           }
           if(hi>mid){
            for(i=mi;i<=high;i++){
              brr[lo]=arr[i];
          lo++;
            }
        }
      else{
        for(i=hi;i<=mid;i++){
              brr[lo]=arr[i];
            lo++;
          }
          }
 for(i=low;i<=high;i++){
     arr[i]=brr[i];
 }
}
int main()
{
 int num,i;
 cout<<"THE NUMBER OF ELEMENTS you want to sort:"<<endl;
 cin>>num;
 cout<<"Please Enter the "<< num <<" numbers:"<<endl;
 for(i=1;i<=num;i++)
 {
  cin>>arr[i] ;
 }
      merge_sort(1,num);
 cout<<"So, the sorted list is :"<<endl;
 for(i=1;i<=num;i++){
 cout<<arr[i]<<"  ";
 }
 cout<<endl;
return 0;
}

/*
//Program of sorting using merge sort without recursion
#include<stdio.h>
#define MAX 30
int main()
  {
      int arr[MAX],temp[MAX],i,j,k,n,size,l1,h1,l2,h2;
           printf("Enter the number of elements : ");
       scanf("%d",&n);
        for(i=0;i<n;i++){
         scanf("%d",&arr[i]);
        }
            //l1 lower bound of first pair and so on
            for(size=1; size < n; size=size*2 )
          {

        l1=0;
         k=0; //Index for temp array
          while( l1+size < n)
          {
           h1=l1+size-1;
          l2=h1+1;
             h2=l2+size-1;
             if( h2>=n )/ / h2 exceeds the limlt of arr
            h2=n-1;
             //Merge the two pairs with lower limits l1 and l2
         i=l1;
          j=l2;
         while(i<=h1 && j<=h2 )
          {
         if( arr[i] <= arr[j] )
                     temp[k++]=arr[i++];
       else
                 temp[k++]=arr[j++];
         }
         while(i<=h1){
           temp[k++]=arr[i++];
         }
          while(j<=h2){
                  temp[k++]=arr[j++];
          }
        //Merging completed/
         l1=h2+1;
          //Take the next two pairs for merging
          } //End of while
          for(i=l1; k<n; i++) //any pair left
              temp[k++]=arr[i];
                   for(i=0;i<n;i++)
                        arr[i]=temp[i];
                  printf("\nSize=%d \nElements are : ",size);
                 for( i = 0 ; i<n ; i++)
          printf("%d ", arr[i]);
           }
           //End of for loop
          printf("Sorted list is :\n");
           for( i = 0 ; i<n ; i++)
          printf("%d ", arr[i]);
         printf("\n");
}

*/
