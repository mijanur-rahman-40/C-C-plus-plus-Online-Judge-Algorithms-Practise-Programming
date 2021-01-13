#include <stdio.h>
int main()
{
    long long num, rev, temp, count, tst,remainder;
    while(scanf("%lld", &tst) && tst>0){
        while(tst--){
                count=0;
            scanf("%lld", &num);
            while(1){
            temp=num;
            rev=0;
            while(num!=0){
                    remainder=num%10;
                rev=rev*10+remainder;
                num=num/10;
            }
            if(rev==temp){
                printf("%lld %lld\n", count, rev);
                break;
            }
            else
                num=temp+rev;
                count++;
            }
        }
    }
    return 0;
}
//#include <cstdio>
//int main()
//{
//    int kase;
//    long long int n,count,sum,r,d;
//    scanf("%d",&kase);
//    while (kase--)
//    {
//        scanf("%lld",&n);
//        d=num;
//        count=0;
//        while (1)
//        {
//            sum=0;
//            while (d>0)
//            {
//                r=d%10;
//                sum=sum*10+r;
//                d=d/10;
//            }
//            if (num==sum)
//                break;
//            else
//            {
//                d=sum+num;
//                num=sum+num;
//                count++;
//            }
//        }
//        printf("%lld %lld\n",count,num);
//    }
//    return 0;
//}
//
