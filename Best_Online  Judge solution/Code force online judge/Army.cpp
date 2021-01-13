#include<stdio.h>
int main()
{

    int n, ranka,rankb,year,i;
    int array[100];
    while(scanf("%d",&n)==1)
    {
        array[0] = 0;
        scanf("%d", &array[1]);
        for(i=2; i<=n-1; i++){
            scanf("%d", &year);
            array[i] = array[i-1] + year;
        }
        scanf("%d%d", &ranka, &rankb);
        printf("%d\n", array[rankb-1] - array[ranka-1]);
    }
    return 0;
}
