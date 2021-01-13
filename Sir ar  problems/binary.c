#include<stdio.h>

int main()
{
      int d[20],j;
      int decimal,i=0;
        printf("Enter the decimal number : \n");
      scanf("%d",&decimal);
      while(decimal>0)
      {
           d[i]=decimal%2;
           i++;
           decimal=decimal/2;
      }
      for( j=i-1;j>=0;j--)
      {
            printf("%d",d[j]);
      }
      printf("\nThe binary version of %d ",decimal);
      getch();
 }
