#include <bits/stdc++.h>
using namespace std;
#define lang long long
long long  gcd(lang a,lang b) {
    while(b!=0) { //b>0
        a=a%b;
        swap(a,b);
    }
    return a;
}
/*
long long  gcd (lang a,lang b) {
int c=__gcd(a,b);
    return c;
}
*/
int main ()
 {
      lang arr[1000];
    while (scanf("%ld",&arr[0])==1) {
        if(arr[0]==0)
          break; //End of test case
        int j=1;
           while(scanf("%lld", &arr[j])==1){//Take input
            if (arr[j] == 0 ){
               break;
            }
            else{
               j++;
            }
        }
        lang ans= 0;
        for ( long int i=1;i<j;i++){
            int dif=abs(arr[i]-arr[i-1]);
           ans=gcd(ans,dif);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
