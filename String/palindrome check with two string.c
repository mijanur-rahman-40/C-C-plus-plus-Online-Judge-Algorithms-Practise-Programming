#include<stdio.h>
int main()
{
 int i,j,k;
 char A[50],B[50];

 printf("ENTER ANY STRING\n");
 scanf("%[^\n]",&A);

 printf("entered string =%s",A);

 for(i=0;A[i]!='\0';i++)
 {
 k=i;
 }

 for(i=0,j=k;A[i]!='\0',j>=0;i++,j--)
 {
 B[i]=A[j];
 }

 B[i]='\0';
 printf("\nreverse of string=%s",B);

 for(i=0;A[i]!='\0';i++)
 {
 if(A[i]!=B[i])
 {
 printf("\nstring is not palindrome\n");
 break;
 }

 if(A[i]==B[i])
 continue;
 }

 if(A[i]=='\0')
 printf("\nstring is palindrome\n");

 return 0;
}
