#include<stdio.h>
double find_ave(int[],int n);
int main()
{
    	int arr[30],i,n;
    	double ave;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
    	ave = find_ave(arr,n);
    	printf("%lf\n",ave);
	return 0;

}
double find_ave(int arr1[],int size)
{
    double ave1,sum=0;
    int i;
    	for(i=0;i<size;i++)
            	{
    			sum=sum+arr1[i];

    			ave1=sum/size;
            	}
    	return(ave1);
}
