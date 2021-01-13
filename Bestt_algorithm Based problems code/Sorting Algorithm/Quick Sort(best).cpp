#include<bits/stdc++.h>
using namespace std;
int arr[100],pivot;
int Partion(int low,int high)
{
    int i,j;
    pivot = arr[low];
    i = low,j = high;
    while(i<j)
    {
        do
          {
            i++;
        }while(arr[i]<=pivot);
        do
         {
             j--;
        }while(arr[j]>pivot);
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void QuickSort(int low,int high)
{
    int j;
    if(low<high)
    {
        j = Partion(low,high);
        QuickSort(low,j);
        QuickSort(j+1,high);

    }
}
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    //arr[num] = 10000;
    QuickSort(0,num);
     for(int i=0; i<num; i++){
        printf("%d ",arr[i]);
    }
}



