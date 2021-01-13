#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k;
printf("Enter the two integer numbers :");
scanf("%d%d",&i,&j);
if(i>j){
K=i;
else
K=j;
again:if(K%i==0 && K%j==0)
printf("The GCD of %d and %d is %d", i,j,k);
}
else
{
K=K+1;
goto again;
}
getch();
}
