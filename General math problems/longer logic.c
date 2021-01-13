#include<stdio.h>
int main()
{
    int a,b,d,min;
    scanf("%d%d",&a,&b);
    min=a>b ?b:a;
    for(d=2;d<min;d++)
        if(a%d==0 && b%d==0)
        break;
    if(d==min){
        printf("NO common denominators\n");
        //return 0;
    }
    printf("the lowest common denominators\n");
    return 0;
}
