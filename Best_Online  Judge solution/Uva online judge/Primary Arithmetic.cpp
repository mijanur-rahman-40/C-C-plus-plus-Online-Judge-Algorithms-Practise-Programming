#include<bits/stdc++.h>
using namespace std;
long int arr1[12],arr2[12];
int main()
{
    long int num1,num2;
    while(scanf("%ld%ld",&num1,&num2)==2){
          if(num1==0 && num2==0){
            return 0;
          }
          else{
//                for(int i=0;i<12;i++){
//                    arr1[i]=0;
//                }
//                for(int i=0;i<12;i++){
//                    arr2[i]=0;
//                }
        memset(arr1,0,sizeof(arr1));
         memset(arr2,0,sizeof(arr2));
             int coun=0,sum=0,i=0,j=0;
             while(num1!=0){
               arr1[i]=num1%10;
               num1=num1/10;
               i++;
            }
            while(num2!=0){
                 arr2[j]=num2%10;
               num2=num2/10;
               j++;
            }
         for(int k=0;k<max(i,j);k++){
            sum=sum+arr1[k]+arr2[k];
         if(sum>=10){
            coun++;
            sum=1;
        }
        else{
            sum=0;
        }
       }
      if(coun==0){
   printf("No carry operation.\n");
      }
      else if(coun==1){
  printf("1 carry operation.\n");
      }
      else{
   printf("%d carry operations.\n",coun);
      }
        }
    }
    return 0;
}
