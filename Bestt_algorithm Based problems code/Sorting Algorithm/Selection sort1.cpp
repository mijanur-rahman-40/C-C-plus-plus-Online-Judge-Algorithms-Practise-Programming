
#include<bits/stdc++.h>
using namespace std;
void selectsort(int arr[], int n)
{
	int pos_min,temp;
	for (int i=0; i < n; i++)
	{
	   pos_min = i;
		for (int j=i+1; j < n; j++)
		{
		if (arr[j] < arr[pos_min])
                   pos_min=j;
		}
            if (pos_min != i)
            {
                 temp = arr[i];
                 arr[i] = arr[pos_min];
                 arr[pos_min] = temp;
            }
	}
	}
int main()
{
    int arr[1000],length;
    while(
          scanf("%d",&length) && length){
        for(int i=0;i<length;i++){
            scanf("%d",&arr[i]);
        }
        selectsort(arr,length);
        for(int i=0;i<length;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
/*


#include <stdio.h>

//Selection Sort function to Sort Integer array list
int *selectionSort(int array[],int n)
{
    int j,temp,i;

    //Iterate start from first element
    for (i = 0; i < n; i++)
    {
        //Iterate and compare till it satisfies condition
        for(j = i+1; j < n; j++)
        {
            if(array[i] > array[j])
            {//Swaping operation
                temp = array[i];
                array[i]   = array[j];
                array[j] = temp;
            }
        }
    }
    //return Sorted array
    return array;
}

int main()
{
    //declaring variables
    int array[1000],n,i;

    //Number of elements in array form user input
    printf("Enter the number of element you want to Sort : ");
    scanf("%d",&n);

    //code to ask to enter elements from user equal to n
    printf("Enter Elements in the list : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    //calling selectionSort function defined above and gettting
    //sorted array in sortArray variable
    int *sortArray = selectionSort(array,n);

    //print sorted array
          printf("Sorted list : ");
    for(i = 0; i < n; i++ )
    {
        printf("%d\t",sortArray[i]);
    }
}
*/
