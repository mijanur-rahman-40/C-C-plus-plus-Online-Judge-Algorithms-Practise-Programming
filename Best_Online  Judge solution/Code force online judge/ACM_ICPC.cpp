#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[1000],sum=0;
     for(int i=0;i<6;i++){
          cin>>arr[i];sum+=arr[i];
     }
     if(sum%2==1){
          printf("NO\n");
          return 0;
     }
     for(int i=0;i<6;i++){
          for(int j=i+1;j<6;j++){
               for(int k=j+1;k<6;k++){
                    if(sum/2==arr[i]+arr[j]+arr[k]){
                         printf("YES\n");
                    return 0;
               }
          }
     }
}
 printf("NO\n");
              return 0;

}


































/*
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int a[6],x[6010];

int main() {
    int s=0;
    for(int i=0;i<6;++i){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    if(s%2){
        puts("NO");
        return 0;
    }
    for(int i=0;i<6;++i){
        for(int j=i+1;j<6;++j){
            for(int k=j+1;k<6;++k){
                if(s/2==a[i]+a[j]+a[k]){
                    puts("YES");
                    return 0;
                }
            }
        }
    }
    puts("NO");
    return 0;
}

*/
