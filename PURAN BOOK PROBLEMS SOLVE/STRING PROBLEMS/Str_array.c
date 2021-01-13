#include<stdio.h>
int main()
{
   char *city_name[25]={"sylhet","barisal"};
   int i;
   for(i=0;i<2;i++){
      printf("\ncity name[%d] is %s.",i+1,city_name[i]);

   }
   return 0;
}
