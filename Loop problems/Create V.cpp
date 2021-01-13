#include<bits/stdc++.h>
using namespace std;
int  main()
{
     int size,i,j,s=1;
     for(size=5;size>=1;size--)
     {
          for(i=1;i<=size;i++)
          {
               printf("*");
          }
          for(j=s;j>1;j--)
          {
               printf(" ");
          }
          for(i=size;i>=1;i--)
          {
               printf("*");
          }
          printf("\n");
          s++;
     }
     return 0;
}
