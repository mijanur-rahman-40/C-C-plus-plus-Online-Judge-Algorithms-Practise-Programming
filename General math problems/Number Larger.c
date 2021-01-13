#include<stdio.h>
main(){
int x, y, z;
printf("Input three integer numbers: ");
scanf("%d %d %d",&x, &y, &z);
if (x>y)  //when x>y
{
if(x>z)
printf("%d is the largest number",x);
else
printf("%d is the largest number",z);
}
else // when x<y
{
if (y>z)
printf("%d is the largest number",y);
else
printf("%d is the largest number",z);
}
return 0;
}
