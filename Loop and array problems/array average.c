
    #include <stdio.h>
int main()
{
    int avg = 0;
    int sum =0;
    int x=0;

    /* Array- declaration – length 20*/
    int num[20];

    /* for loop for receiving inputs from user and storing it in array*/
    for (x=1; x<=5;x++)
    {
        printf("enter the integer number %d =", x);
        scanf("%d", &num[x]);

//    for (x=1; x<=5;x++)
//    {
        sum = sum+num[x];
    //}
    }
    avg = sum/5;
    printf("%d", avg);
    return 0;
}
