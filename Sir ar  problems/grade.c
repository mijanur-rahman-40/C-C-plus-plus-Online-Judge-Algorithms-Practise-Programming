#include<stdio.h>
int main()
{

    int marks,T,i,b=0;
    scanf("%d",&T);
    while(b<T)
    {
        scanf("%d",&marks);
        printf("Case %d:",++b);

        if(marks>=80 && marks<=100)
        {
            printf(" A+\n");
        }
        else if(marks<=79 && marks>=75)
        {
            printf(" A\n ");
        }
        else if(marks<=74 && marks>=70)
        {
            printf(" A-\n");
        }
        else if(marks<=69 && marks>=65)
        {
            printf(" B+\n");
        }
        else if(marks<=64 && marks>=60)
        {
            printf(" B\n");
        }
        else if(marks<=59 && marks>=55)
        {
            printf(" B-\n");
        }
        else if(marks<=54 && marks>=50)
        {
            printf(" C\n");
        }
        else if(marks<=49 && marks>=45)
        {
            printf(" D\n");
        }
        else if(marks<=44 && marks>=0)
        {
            printf(" F\n");
        }
    }
    return 0;
}
