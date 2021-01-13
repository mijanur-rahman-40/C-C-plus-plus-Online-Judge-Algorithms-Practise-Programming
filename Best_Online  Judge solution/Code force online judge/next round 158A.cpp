#include<cstdio>
using namespace std;
int main()
{
    char str[100];
    int i,n,k,a;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
     scanf("%d",&str[i]);
        if(i+1==k){
            a=str[i];
        }
    }
    int count=0;
    for(i=0;i<n;i++){
        if(str[i]>=a && str[i]>0){
            count++;
        }
    }
   printf("%d",count);
 return 0;
}
