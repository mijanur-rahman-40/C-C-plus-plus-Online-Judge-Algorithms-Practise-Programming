#include <stdio.h>

int main() {

    int start, end, i, j, n;

    scanf("%d", &n);

    start = n;
    end = n;

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= (2 * n) - 1; j++) {
            if(j >= start && j <= end) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        start--;
        end++;
    }
    start = 3;
    end = (2 * n) - 1;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= (2 * n) - 1; j++) {
            if(j >= start && j <= end) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        start++;
        end--;
    }
}

