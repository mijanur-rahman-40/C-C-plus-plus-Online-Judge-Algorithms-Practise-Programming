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
printf("%d is not prime.\n",n);
break;
}
  }
  if(j==n)
  printf("%d is prime.\n",n);
  printf("")
}
