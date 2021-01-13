#include<stdio.h>
int main() {
    char str[100];
    while(scanf("%s", str) == 1) {
        int sum = 0, i;
        for(i = 0; str[i]; i++) {
                sum += str[i]-'a'+1;
        }
        printf("sum=%d\n",sum);
    }
        return 0;
    }
