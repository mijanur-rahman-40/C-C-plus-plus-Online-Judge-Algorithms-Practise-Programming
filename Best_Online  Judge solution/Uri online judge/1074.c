#include<stdio.h>
int main()
{
    int t,num,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&num);
        if(num==0){
            printf("NULL\n");
        }
      else  if((num*(-1))%2==1 && num<0){
            printf("ODD NEGATIVE\n");
        }
        else if((num*(-1))%2==0 && num<0){
            printf("EVEN NEGATIVE\n");
        }
      else  if(num%2==1 ){
            printf("ODD POSITIVE\n");
        }
        else  if(num%2==0 ){
            printf("EVEN POSITIVE\n");
        }

    }
    return 0;
}
