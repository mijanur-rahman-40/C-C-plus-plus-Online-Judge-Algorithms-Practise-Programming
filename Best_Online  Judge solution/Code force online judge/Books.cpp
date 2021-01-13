
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,cap;
    scanf("%d %d",&num,&cap);
   long int arr[num];
    for(int i=0; i<num; i++){
        scanf("%ld",&arr[i]);
    }
    int sum = 0,coun = 0,temp = 0,j = 0;
    for(int i=0; i<num; i++){
        sum = sum + arr[i];
            coun++;
            while(sum>cap)
            {
                sum -= arr[j];
                j++;
                coun--;
             }
            temp = max(temp,coun);
    }
    cout<<temp<<endl;
}
