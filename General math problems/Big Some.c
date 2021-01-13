/* Finding sum of the series 1 + 2 + 3 ... + N   */
#include<stdio.h>
#include<conio.h>
void main()
{
int i , N;
long Sum=0;
printf("\nEnter last number of the series: ");
scanf("%d", &N);
printf("1 + 2 + 3  ... + %d= ", N);
for (i=1;i<=N; i= i+1 ) // Condition
{
Sum = Sum +i;
}   // End of  for
printf("%d", Sum);
getch();
}
