#include<stdio.h>
int main()
{
    int num;
    char ch;
    double d_num;
    float f_num;
    //lu is mean unsigned long
    printf("%lu\n",sizeof(int));
    printf("Size of int :%d\n",sizeof(num));
    printf("Size of char :%d\n",sizeof(char));
    printf("Size of char :%d\n",sizeof(ch));
    printf("Size of char :%d\n",sizeof(double));
    printf("Size of double :%d\n",sizeof(d_num));
    printf("Size of char :%d\n",sizeof(float));
    printf("Size of float :%d\n",sizeof(f_num));
    return 0;

}
