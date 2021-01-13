#include<stdio.h>
int main()
{
    int Num=100, Num1=0*100,  Num2=0100;
    if( Num>Num1 && Num>Num2)
        printf("Num =%d\n", Num);

    if( Num1>Num && Num1>Num2)
        printf("Num1 =%d\n", Num1);

    if( Num2>Num && Num2>Num1)
        printf("Num2 =%d\n", Num2);
        return 0;

}
//NUM=100

