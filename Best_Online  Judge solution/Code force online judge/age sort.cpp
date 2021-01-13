#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int array[100000],i,n,test;

    while(scanf("%d",&n)==1&&n){
    for(i=0;i<n;i++){

        scanf("%d",&array[i]);
    }
    sort(array,array+n);
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
           test=i;
            }
            printf("%d\n",array[test+1]);

    }

    return 0;
}



//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//#define Num 2000020
//int age[Num];
//
//int main()
//{
//    int n,test;
//    while(scanf("%d",&n)==1&&n)
//    {
//        for(int i=0;i<n;i++)
//            scanf("%d",&age[i]);
//
//            sort(age,age+n);
//
//        for(int i=0;i<n-1;i++)
//            {
//                printf("%d ",age[i]);
//                test=i;
//            }
//            printf("%d\n",age[test+1]);
//
//    }
//    return 0;
//}
