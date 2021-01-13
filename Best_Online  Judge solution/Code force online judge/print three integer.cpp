#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int a, b, x, t, tt, ttt;
    while(scanf("%d%d", &a, &b)==2){
        t = tt = ttt = 0;
        for(x=1; x<=6; x++){
            if(abs(a-x) < abs(b-x))  t ++;
            else if(abs(a-x) > abs(b-x))  ttt ++;
            else  tt ++;
        }
        printf("%d %d %d\n", t, tt, ttt);
    }
    return 0;
}

//CODE FORCE TRIANGLE
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int d[][3]={{0,1,2},{0,1,3},{0,2,3},{1,2,3}};
//int a[4];
//int fun(int *b){
//    if(a[b[0]]+a[b[1]]>a[b[2]]&&a[b[2]]+a[b[1]]>a[b[0]]&&a[b[0]]+a[b[2]]>a[b[1]])
//        if(a[b[0]]-a[b[1]]<a[b[2]]&&a[b[2]]-a[b[1]]<a[b[0]]&&a[b[0]]-a[b[2]]<a[b[1]])
//            return 1;
//    if(a[b[0]]+a[b[1]]==a[b[2]]||a[b[2]]+a[b[1]]==a[b[0]]||a[b[0]]+a[b[2]]==a[b[1]])
//        return 2;
//    return 0;
//}
//int main(){
//    int res,i;
//    while(~scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3])){
//        for(res=i=0;i<4;i++){
//            int k=fun(d[i]);
//            if(k==1){res=-1;printf("TRIANGLE\n");break;}
//            else if(k==2)res=k;
//        }
//        if(res==2)printf("SEGMENT\n");
//        else if(res==0)printf("IMPOSSIBLE\n");
//    }
//return 0;
//}


//((a+b>c && c+b>a && a+c>b)||(a-b<c && c-b<a && a-c<b))
//printf("TRIANGLE\n");
//else if(a+b==c || c+b==a || a+c>b)
//    printf("SEGMENT\n");
//else
//    printf("IMPOSSIBLE\n");
