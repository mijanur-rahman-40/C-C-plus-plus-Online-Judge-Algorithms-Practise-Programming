#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+num);
        cout<<arr[(num-1)/2]<<endl;
}
