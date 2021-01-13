//#include<stdio.h>
//int  main()
//{
//    int a,b;
//    scanf("%d%d",&a,&b);
//    if(a>=b){
//        printf("O JOGO DUROU %d HORA(S)\n",(24-a+b));
//    }
//    else{
//        printf("O JOGO DUROU %d HORA(S)\n",b-a);
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
