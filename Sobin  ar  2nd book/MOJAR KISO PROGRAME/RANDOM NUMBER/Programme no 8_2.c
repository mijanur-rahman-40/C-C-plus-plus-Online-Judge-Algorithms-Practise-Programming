#include<stdio.h>
#include<stdlib.h>
int main()

{
    int i;
    for(i=0;i<5;i++){
        printf("%d\n",rand());
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>//required to use 'rand()'
#include <time.h>//required to use 'srand(time(NULL))'


int main()
{
srand(time(NULL));//required for "randomness"

 int r;
 r=rand()%6;//generate a number between 0 and 5
 printf("%i",r);

return 0;
}
