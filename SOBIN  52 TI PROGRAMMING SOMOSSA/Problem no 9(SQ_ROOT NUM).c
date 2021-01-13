//#include<stdio.h>
//#include<math.h>
//int main()
//{
//     int n,c;
//  double b;
//    int t;
//    scanf("%d",&t);
//    while(t--){
//    scanf("%d",&n);
//   b=sqrt((double)n);
//   c=b;
//
//    if(c==b)
//        printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}

// OR UNDER TI THEKO

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n,t;
//    double sq_root;
//    scanf("%d",&t);
//    while(t--){
//    scanf("%d",&n);
//    sq_root=sqrt(n);
//    if(ceil(sq_root)==floor(sq_root))
//        printf("YES\n");
//    else
//        printf("NO\n");
//    }
//    return 0;
//}

//OR UNDER TI THEKO

#include<stdio.h>
#include<math.h>
int main()
{
      int num,sq_root,t;
      scanf("%d",&t);
      while(t--){
      scanf("%d",&num);
      sq_root=sqrt(num);
      if(sq_root*sq_root==num){
        printf("YES\n");
      }
      else
        printf("NO\n");
      }
      return 0;
   }
