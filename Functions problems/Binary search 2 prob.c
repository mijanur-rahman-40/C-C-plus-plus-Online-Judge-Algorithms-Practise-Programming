#include<stdio.h>

int Bsearch(int a[],int T,int n)
{
    int lo=1,hi=n;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(a[mid]==T)
            return mid;

    else if(a[mid]<T)
        lo=mid+1;
    else
        hi=mid-1;
        return -1;
}


    int i,m,j,c;
    int b[1000];
    while(scanf("%d",&a)==1){
        for(i=0;i<j;i++){
            scanf("%d",&b[i]);
        scanf("%d",&m);
        }
      c= Bsearch(b,T,m);
        if(c==-1)
            printf("not found");
   else
    printf("found of %d\n",j);
   }
   return 0;
}
