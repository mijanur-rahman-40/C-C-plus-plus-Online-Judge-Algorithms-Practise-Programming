#include <cstdio>
int main()
{
    int t, n;
    while(scanf("%d", &t) == 1){
        int num[1001]={0}, Max = 0, Ans = 0;
        for(int i = 0; i < t; i++){
            scanf("%d", &n);
            num[n]++;
            if(num[n] > Max)    Max = num[n];
        }
        for(int i = 0; i <= 1000; i++)
            if(num[i])  Ans++;
        printf("%d %d\n", Max, Ans);
    }
    return 0;
}

