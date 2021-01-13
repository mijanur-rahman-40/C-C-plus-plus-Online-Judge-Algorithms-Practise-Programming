#include<stdio.h>
#include<math.h>
int main()
{
    int t,x1,x2,y1,y2,r;
    scanf("%d",&t);
    int l;
    while(t--){
        scanf("%d%d",&x1,&y1);
        scanf("%d",&r);
        scanf("%d%d",&x2,&y2);
       l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
       if(r<l)
        printf("The point is not inside the circle\n");
       else
        printf("The point is inside then circle\n");
    }
    return 0;
}
