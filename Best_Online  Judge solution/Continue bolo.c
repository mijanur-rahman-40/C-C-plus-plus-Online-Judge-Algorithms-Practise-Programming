
#include<stdio.h>
int main()
{
    int count,score,total=0;
    count=0;
    while(count<4){
        printf("Enter score:\n");
        scanf("%d",&score);
        if(score<0 || score>100)
            continue;
        total+=score;
        printf("Total =%d\n",total);
        count++;
    }
    return 0;
}

