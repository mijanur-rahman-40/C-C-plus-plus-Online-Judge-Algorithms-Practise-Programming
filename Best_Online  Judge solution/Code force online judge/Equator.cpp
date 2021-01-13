#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num+2];
    long sum = 0,sum1 = 0;
    for(int i=1; i<=num; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
      int i;
      for( i=1; i<=num; i++){
          sum1+=arr[i];
          if(2*sum1>=sum  ){
            break;
          }
      }
      cout<<i<<endl;
}
