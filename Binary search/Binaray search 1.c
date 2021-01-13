#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
  while (l <= r)
  {
    int m =l+(r-1)/2;
    if (arr[m] == x)
        return m;
    if (arr[m] < x)
        l = m + 1;
    else
         r = m - 1;
  }
  return -1;
}
int main(void)
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x=2;
   int result = binarySearch(arr,0,n-1,x);
   if(result == -1)
    printf("Element is not present in array");
   else
   printf("Element is present at 2 position %d", result+1);

   return 0;
}

/*
#include<stdio.h>
int main()
{
    int ara[]={1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int low_index=0,high_index=15,mid_index,num=97;

    while(low_index<=high_index){
        mid_index=(low_index+high_index)/2;
        if(num==ara[mid_index]){
            break;
     //index bolte bujacce aray bitorer man
        }
        if(num<ara[mid_index]){
            high_index=mid_index-1;

        }
        else{
            low_index=mid_index+1;

        }
        if(low_index>high_index){
            printf("%d is not in the array\n",num);
        }

        else
            printf("%d is found in the array .It is the %d th element of the array .\n ",ara[mid_index],mid_index);

    }

    return 0;

}
#include <stdio.h>

// A recursive binary search function. It returns location of x in
// given array arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        // If the element is present at the middle itself
        if (arr[mid] == x)  return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);

        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
   }

   // We reach here when element is not present in array
   return -1;
}

int main(void)
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 10;
   int result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
   return 0;
}



#include <stdio.h>

int RecursiveBinarySearching(int arr[], int low, int high, int element)
{
      int middle;
      if(low > high)
      {
            return -1;
      }
      middle = (low + high) / 2;
      if(element > arr[middle])
      {
            RecursiveBinarySearching(arr, middle + 1, high, element);
      }
      else if(element < arr[middle])
      {
            RecursiveBinarySearching(arr, low, middle - 1, element);
      }
      else
      {
            return middle;
      }
}

int main()
{
      int count, element, limit, arr[50], position;
      printf("\nEnter the Limit of Elements in Array:\t");
      scanf("%d", &limit);
      printf("\nEnter %d Elements in Array: \n", limit);
      for(count = 0; count < limit; count++)
      {
            scanf("%d", &arr[count]);
      }
      printf("\nEnter Element To Search:\t");
      scanf("%d", &element);
      position = RecursiveBinarySearching(arr, 0, limit - 1, element);
      if(position == -1)
      {
            printf("\nElement %d Not Found\n", element);
      }
      else
      {
            printf("\nElement %d Found at Position %d\n", element, position + 1);
      }
      return 0;
}
*/



