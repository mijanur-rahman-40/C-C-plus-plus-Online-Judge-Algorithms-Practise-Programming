#include<stdio.h>
int main()
{
    int i,x;
    int n[100];
    scanf("%d",&x);
    for(i=0;i<x;i++){
     scanf("%d\n",&n[i]);
}
    for(i=0;i<x;i++){
    printf("%d\t",n[i]);
    }
    return 0;
}


