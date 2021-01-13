#include <stdio.h>
int main()
{
    int i, j, a,tast,n, num[30];

   while(scanf("%d", &n)==1){
        if(n==0)
        break;
    for (i = 0; i < n; ++i)
        scanf("%d", &num[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i]= num[j];
                num[j] = a;
            }
        }
    }
    for (i = 0; i < n; ++i)
        printf("%d\n", num[i]);
}
        return 0;

}
