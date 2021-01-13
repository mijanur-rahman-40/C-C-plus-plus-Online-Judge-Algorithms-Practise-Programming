#include<stdio.h>
int main()
{

    int i,x=0;

    for(i=1;i<11;++i){

        if(i&1) x+=i;
        else x-=2;

    printf("%d\n",x);
    continue;
}
  printf("\nx=%d",x);
    return 0;

}
