//code ta problem ase pari na

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    int mod;
    for(;;){
    scanf("%d%d",&a,&b);
    scanf("%d",&c);
    if(c==3 || c==1){
        d=b-a;
    mod=d%(int)(pow(10,9)+7);
    }
    else{
        d=a+b;
    mod=d%(int)(pow(10,9)+7);
    }
    printf("%d\n",mod);
}
    return 0;
    }
