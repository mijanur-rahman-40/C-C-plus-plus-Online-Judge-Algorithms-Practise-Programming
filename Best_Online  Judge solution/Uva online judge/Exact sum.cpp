/*#include<cstdio>
#include<math.h>

int main()
{
    int tst,arr[10000];
    for(; ;){
      scanf("%d",&tst);
        for(int i=1;i<=tst;i++){
           scanf("%d",&arr[i]);
        }
        int taka;
        scanf("%d",&taka);
        int a,b,d,i,j;
        for( i=1; i<=tst; i++){
            for(j=1; j<=tst; j++){

                if(taka==arr[i]+arr[j] && i!=j){
                        if(arr[i]>arr[j]){
                            if(arr[i]-arr[j]<d){
                                a=arr[i];
                                b=arr[j];
                                d=arr[i]-arr[j];
                            }
                        }
                        else{
                            if(arr[j]-arr[i]<d){
                                a=arr[i];
                                b=arr[j];
                                d=arr[j]-arr[i];
                            }
                      }
                }
            }
        }
    printf("Peter should buy books whose prices are %d and %d.",a,b);
    }
return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int books;
    while(scanf("%d",&books)==1){
        int min = 1000001;
        int price,a,b,v[10000];
        for(int i = 0; i < books; i++){
            scanf("%d",&v[i]);

        }
        int taka;
        scanf("%d",&taka);
        sort(v,v+books);
        for(int i = 0; i < books; i++){
            for(int j = i+1; j < books; j++){
                if(v[i]+v[j] ==taka  && abs(v[i] - v[j]) < min){
                    a = v[i];
                    b= v[j];
                    min= abs(v[i] - v[j]);
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",a,b);
    }
    return 0;
}

