

#include <stdio.h>
int main()
{
    int i,j,temp,number[1000];
     int n;
     int count;
     while(scanf("%d",&n)!=EOF){
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
        printf("Minimum exchange operations : %d\n", count);
   }
        return 0;
}
