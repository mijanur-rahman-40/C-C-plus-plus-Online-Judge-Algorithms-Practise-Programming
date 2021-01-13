#include <stdio.h>
int main()
{
    int i,j,temp,number[101];
     int n;
     int count,tst,k=1;
     scanf("%d",&tst);
     while(tst--){
     scanf("%d",&n);
     count=0;
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    for (i = 0; i < n; ++i){
        for (j =i+1; j < n; ++j){
            if (number[i] > number[j]){
                temp =  number[i];
                number[i] = number[j];
                number[j] = temp;
                count++;
            }
        }
    }
        printf("case %d: %d\n",k++,count);
   }
        return 0;
}

