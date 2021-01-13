#include<stdio.h>
int max1(int ara[],int n)

{
    int y,i;
    //int i,n=11;
   for(i=0;i<n;i++){
        y=99999999;
        if(ara[i]<y)
            y=ara[i];
   }
return(y);

}
 int main()
{
    int ara[]={-100,0,53,22,83,23,89,-132,201,3,85};
    int n=11;
    int max;
   max=max1(ara,n);
    printf("%d\n",max);
  return 0;

}
//#include <stdio.h>
//#include <conio.h>
//max(int [],int);
//void main()
//{
//	int a[]={10,5,45,12,19};
//	int n=5,m;
//
//	m=max(a,n);
//	printf("\nMAXIMUM NUMBER IS %d",m);
//	getch();
//}
//max(int x[],int k)
//{
//	int t,i;
//	t=x[0];
//	for(i=1;i<k;i++)
//        {
//		if(x[i]>t)
//			t=x[i];
//	}
//	return(t);
//}

