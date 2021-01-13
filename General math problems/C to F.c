/* Program to convert Celcious temparature to Farenheit */
#include <stdio.h>
main(){
float C, F;
printf("Enter temparature in Celcious :");
scanf("%f", &C);
F = 9*C/5+32;
printf("The temparature in Farenheit is : %.2f", F);
}
