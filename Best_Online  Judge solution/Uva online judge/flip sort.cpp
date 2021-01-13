#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        int count=0;
        while(n>0){
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i+1],arr[i]);
                count++;
            }
        }
        n--;
        }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
