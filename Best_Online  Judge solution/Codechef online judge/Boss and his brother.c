/*problem ase code*/

#include<stdio.h>
int main()
{
    int tst;
    long int a,b;
    scanf("%d",&tst);
    while(tst--){
        scanf("%ld%ld",&a,&b);
       long int c;
        c=(a*(a+1)/2);
        if(c>=b){
            printf("%ld\n",b);
        }
        else {
            printf("-1\n");
    }
    }
    return 0;
}
