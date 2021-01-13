#include<stdio.h>
#include<stdlib.h>
void  swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("a=%x b=%x\n",a,b);

}
int main(){
int x,y;
scanf("%d%d",&x,&y);
printf("x=%d y=%d\n",x,y);
swap(&x,&y);
printf("new x=%d new y=%d\n",x,y);
return 0;
}
