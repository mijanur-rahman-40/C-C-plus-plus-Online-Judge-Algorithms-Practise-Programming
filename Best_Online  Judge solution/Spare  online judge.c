//#include<stdio.h>
//int main()
//{
//    int n,i=1,t,n1;
//    scanf("%d",&t);
//    int count=0;
//    int count1=0;
//    while(t--){
//    scanf("%d",&n);
//    if(n==1){count=0;
//    int count1=0;
//        printf("Case :%d %d\n",i,n-1);
//        i++;
//    }
//     else  if(n%2==0){
//            while(n>1){
//                n=n/2;
//                count1++;
//                n1=n;
//                if(n1%3==0){
//                    count1++;
//                }
//                else{
//                    n=n1/2;
//                count1++;
//            }
//            }
//        printf("Case :%d %d\n",i,count1);
//        i++;
//    }
//
//       else if(n%2!=0){
//            while(n>1){
//                     n1=n;
//                    if(n%3==0){
//                            n=n/3;
//                    count++;
//                    }
//
//               else if(n1>1){
//                n=n1-1;
//                count++;
//                n1=n;
//                if(n1%3==0 && n1%2==0){
//                n1=n1/3;
//                count++;
//                n1=n1/2;
//                count++;
//            }
//               }
//           else {
//
//                n=n1/2;
//            count++;
//            }
////            else
////                n=n1/2;
////            count++;
//              // }
//       }
//         printf("Case :%d %d\n",i,count);
//         i++;
//        }
//    }
//    return 0;
//}

//Exact solution
#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b,c) ((a) < (b)) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c))

int min_steps(int num);
int main(void) {
        int num;
  for(;;){
        printf("Enter the number: ");
        scanf("%d", &num);

        printf("The minimum number of steps to go down to 1 is: %d\n", min_steps(num));
  }
        return 0;
}

int min_steps(int num)
{
        int x = num, y = num, z = num;

        if (num <= 1) return 0;

        if (num%2 == 0) {
                x = min_steps(num/2);
        }

        if (num%3 == 0) {
                y = min_steps(num/3);
        }

        z = min_steps(num-1);

        return 1+ (MIN(x,y,z));
}

