#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stt;
    scanf("%d",&stt);
    while(stt--){
         long long  int a,b;
    scanf("%lld%lld",&a,&b);
    if(a%b == 0) cout<<":wink:"<<endl;
    else cout<<":kick:"<<endl;
    }
    return 0;
}

/*
#include <stdio.h>;

int main()
{
    int  num1 = 1000000000;
    long long num2;// = 1000000000;
    scanf("%lld",&num2);
    long long num3;
    num3 = 100000000000LL;
    long long num4 = ~0;

    printf("%u %u %u", sizeof(num1), sizeof(num2), sizeof(num3));
    printf("%d %ld %lld %llu", num1, num2, num3, num4);

     printf("%d %lld %lld %llu", num1, num2, num3, num4);
    return 0;
}
*/
