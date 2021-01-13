#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num,arr[1000],flag=0;
     scanf("%d",&num);
          for(int i=0;i<num;i++){
                    int m,n;
               scanf("%d%d",&m,&n);
            if(m!=n)
               flag=1;
          }
     if(flag==1){
      printf("Happy Alex\n");
     }
      else
      printf("Poor Alex\n");
     return 0;
}
