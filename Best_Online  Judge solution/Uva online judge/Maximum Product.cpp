
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,j =1;
    while(scanf("%d",&num)==1){
        int arr[num+1];
        for(int i=0; i<num; i++){
            scanf("%d",&arr[i]);
        }
        long long int mx=0;
       long long int product = 1;
        for(int i=0; i<num; i++){
                long long int product = 1;
                for(int j=i; j<num; j++){
           product = product * arr[j];
           if(mx<=product){
            mx=product;
           }
        }
    }
        printf("Case #%d: The maximum product is %lld.\n",j++,mx);
         cout<<endl;
    }
}

/*
15
-3 -10 7 9 0 7 5 -9 5 0 2 -6 1 -2 -9
Case #2: The maximum product is 1890
13
5 -2 -9 -2 9 -6 0 4 -8 -8 -7 -4 8
57344
13
1 -8 -10 -4 -10 -1 -10 3 -2 4 -7 10 6
322560000
15
-3 8 7 -9 -7 7 -1 10 -10 7 3 -10 9 5 -4

*/
