#include<bits/stdc++.h>
using namespace std;
long arr[2000005];
int main()
{
    int num;
    while(scanf("%d",&num) && num){
    for(int i=0; i<num; i++){
        scanf("%ld",&arr[i]);
    }
    sort(arr,arr+num);
    for(int i=0; i<num; i++){
        printf("%ld",arr[i]);
     if(num>i+1) printf(" ");
    }
    printf("\n");
    printf("")
    }
    return 0;
}
