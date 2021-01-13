#include<stdio.h>
int main()
{
     char str[100];
     int tst,sum=0,i,len,j=1;
     scanf("%d",&tst);
     while(tst--){
          scanf("%s",str);
          len=strlen(str);
          for( i=0;i<strlen(str);i++){
               sum=sum+str[i]-'0';
          }
         printf("Case %d: ",j++);

         if(len%2==1 && sum%2==1){
           printf("Safe to push");
         }
        else if(len%2==0 && sum%2==0){
          printf("Safe to push");
        }
        else{
          printf("BOOM");
        }
        len=0;
        sum=0;
        printf("\n");
     }
     return 0;
}
