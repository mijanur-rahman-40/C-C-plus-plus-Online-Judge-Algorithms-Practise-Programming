#include<stdio.h>
int main()
{
    int i;
    i=1;
    printf("Using postfix(i++) i= %d\n",i++);
    printf("Value after increment is: %d\n",i);
    i=1;
    printf("Using prefix (++i) var =%d\n",++i);
    printf("Value after increment is: %d\n",i);
    return 0;
}
