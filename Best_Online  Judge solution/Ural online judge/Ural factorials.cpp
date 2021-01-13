#include<stdio.h>
int main()
{
    long int n,j=0,i;
    long sum=1;
    char st[100];
    scanf("%ld\n",&n);
    scanf("%s",st);
    for(i=0;st[i]!='\0';i++){
        if(st[i]=='!')
            j++;
    }
    for(i=n;i>=1;i=i-j){
        sum=sum*i;
    }
    printf("%ld\n",sum);
    return 0;

}
