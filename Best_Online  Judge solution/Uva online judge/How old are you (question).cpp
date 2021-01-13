/*  nesar code a prob ase
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int d1,m1,y1,d2,m2,y2;
     int tst,i;
     while(scanf("%d",&tst)==1){

          for(i=1;i<=tst;i++){
                printf("\n");
          scanf("%d/%d/%d",&d1,&m1,&y1);
           scanf("%d/%d/%d",&d2,&m2,&y2);
     if(y2>y1 ||(y2==y1 && m1<m2)|| (y2==y1 && m1==m2 && d1<d2)){
          printf("Case #%d: Invalid birth date\n",i);
     }
     else if(y1>y2 && y1-y2>130){
          printf("Case #%d: Check birth date\n",i);
     }
     else if(y1>y2 && y1-y2<130 && (d1!=28 || d2!=29)){
          printf("Case #%d: %d\n",i,y1-y2);
     }
     else if((y1>y2 && d1==28 && m1==m2)|| (y1>y2 && d1==29 && m1==m2)){
          printf("Case #%d: 0\n",i);
     }
     }
     }
     return 0;
}
*/
#include <cstdio>
using namespace std;
int main()
{
    int t,day,month,year,cDay,cMonth,cYear,i,age;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d/%d/%d",&cDay,&cMonth,&cYear);
            scanf("%d/%d/%d",&day,&month,&year);
            if(cDay<day)
                month+=1;
            if(cMonth<month)
                year+=1;
            age=cYear-year;
            if(age<0)
                printf("Case #%d: Invalid birth date\n",i);
            else if(age>130)
                printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %d\n",i,age);
        }
    }
    return 0;
}

