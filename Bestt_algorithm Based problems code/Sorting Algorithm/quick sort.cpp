/*

 C implementation QuickSort
#include<stdio.h>

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // pi is partitioning index, arr[p] is now
           at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void array(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    array(arr, n);
    return 0;
}

*/

/*
#include<stdio.h>
void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last){
            i++;
         }
         while(number[j]>number[pivot]){
            j--;
         }
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main(){
   int i, count, number[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
*/


/*

#include<bits/stdc++.h>
using namespace std;
int quick_sort(int arr[],int start,int end)
{
     int i,j, pivot;
     int moveptr_right=1;
     pivot=arr[start];
     i=start;
     j=end;
     while(i<j){
               if(moveptr_right==1){
           if(arr[j]<pivot){
               arr[i]=arr[j];
               i++;
               moveptr_right=0;
          }
          else{
             j--;
          }
               }
               else{
          if(arr[i]>pivot){
               arr[j]=arr[i];
               j--;
               moveptr_right=1;
          }
          else{
               i++;
          }
        }
     }
     arr[j]=pivot;
     return j;
 }
 int divide(int arr[],int start,int end)
{
     int pivot;
     if(start>=end){
          return 0;
     }
     else{
          pivot=quick_sort(arr,start,end);
          divide(arr,start,pivot-1);
          divide(arr,pivot+1,end);
     }
}
int main()
{
    int num,arr[1000];
    while(scanf("%d",&num) && num){
     for(int i=0;i<num;i++){
          scanf("%d",&arr[i]);
     }
     divide(arr,0,num-1);
          for(int i=0;i<num;i++){
          printf("%d ",arr[i]);
     }
     printf("\n");
    }
    return 0;
}

*/





