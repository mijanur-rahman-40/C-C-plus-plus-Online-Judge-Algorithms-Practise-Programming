#include <stdio.h>
#include <string.h>

int main()

{

    char num[10000];

    long long i,l,number,mod=0;

    int carry=0;

    scanf("%s%lld",num,&number);

    l=strlen(num);
    printf("Bhaagfol: ");
    for(i=0; i<l; i++)
    {
        mod=(mod*10+num[i]-'0');

        if(mod>=number)printf("%lld",mod/number);

        if(mod!=0) carry=1; // Keno ekhane carry rakhlam? Je bolte parbe tar jonno gift royeche!

        mod%=number;

        if(mod==0&&carry==0) printf("0");

        carry=0;

    }
    printf("\nBhaagshesh: %lld",mod);

    return 0;

}

