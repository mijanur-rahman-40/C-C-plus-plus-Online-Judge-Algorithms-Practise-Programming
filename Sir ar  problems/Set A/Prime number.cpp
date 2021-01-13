#include<stdio.h>
main()
{
int n,j;
   printf("Enter a number to check if it is a prime or not:");
    scanf("%d",&n);

     for(j=2;j<=n-1;j++)
   {

    if(n%j==0)
   {
         printf(" No\n",n);
     break;
  }
           }
  if(n==1)
        printf("No\n",n);
       if(j==n)
             printf("Yes\n",n);

  return 0;

}

