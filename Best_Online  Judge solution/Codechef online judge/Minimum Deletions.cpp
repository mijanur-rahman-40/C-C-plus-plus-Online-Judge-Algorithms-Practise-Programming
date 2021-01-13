#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--)
    {
        int num;
        scanf("%d",&num);
        int arr[num];
        for(int i=0; i<num; i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+num);
        int temp = arr[0];
        for(int i=1; i<num; i++){
            temp = __gcd(temp,arr[i]);
        }
        if(temp == 1)
            cout<<"0"<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
