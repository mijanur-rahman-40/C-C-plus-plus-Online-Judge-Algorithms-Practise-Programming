#include<stdio.h>
int find_largest(int [],int n);
int main()
{
    	int arr[30],n,largest,i;
    	//printf("Enter the size of the array maximum up to 30: ");
	scanf("%d",&n);
	//printf("Enter the %d integer numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
    	largest = find_largest(arr,n);
    	printf("\nThe largest element is: %d\n",largest);
	return 0;

}
int find_largest(int arr1[],int size1)
{
    	int temp_larg,i;
    	temp_larg=arr1[0];
    	for(i=1;i<size1;i++)
            	{
    			if(arr1[i]>temp_larg)
    				temp_larg=arr1[i];
    		}
    	return(temp_larg);
}
