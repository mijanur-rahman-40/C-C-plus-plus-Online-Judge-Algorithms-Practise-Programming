#include<stdio.h>
   int find_max(int ara[],int b)
   {
       int max,i,c=11;
      max=ara[0];
       for(i=0;i<c;i++){
       if(ara[i]>max){
        max=ara[i];

       }
   }
   return max;
   }
   int main()
{
    int ara[1000]={-100,0,53,22,83,23,89,-132,201,3,85},n;
    //int n=11;
    int max=find_max(ara,n);
    printf("%d\n",max);
    return 0;

}
