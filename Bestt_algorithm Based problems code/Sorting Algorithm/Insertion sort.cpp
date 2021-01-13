#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int length){
	 	int j, temp;

	for (int i =1; i <= length; i++){
		j = i;

		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}
int main()
{
    int arr[1000],length;
    while(
          scanf("%d",&length)&& length){
        for(int i=0;i<length;i++){
            scanf("%d",&arr[i]);
        }
        insertion_sort(arr,length);
        for(int i=0;i<length;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
