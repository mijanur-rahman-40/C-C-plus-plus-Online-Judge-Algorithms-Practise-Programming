
#include<bits/stdc++.h>
using namespace std;
 int arr1[100005];int num; long int j;
int main()
{
     //ios_base::sync_with_stdio(0);
     cin>>num;
    long long int sum=0;
     for( int i=0;i<num;i++){
          cin>>j;
          sum+=j;
     }
     for( int i=0;i<num;i++){
          cin>>arr1[i];
     }
     sort(arr1,arr1+num);
          if(arr1[num-1]+arr1[num-2]>=sum)
          printf("YES\n");
     else
          printf("NO\n");
     return 0;

}
