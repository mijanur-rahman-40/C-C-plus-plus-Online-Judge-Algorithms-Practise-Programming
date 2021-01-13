#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a+b;
    int c,n,m;
    if(sum%2==0){
        c=sum/2;
        n=a-c;
        m=b-c;
        if(n<0){
            n=(-1)*n;
        }
        if(m<0){
            m=(-1)*m;
        }
    }
    else{
        c=sum/2+1;
        n=a-c;
        m=b-c;
        if(n<0){
            n=(-1)*n;
        }
        if(m<0){
            m=(-1)*m;
        }
    }
    printf("%d\n",n*(n+1)/2+m*(m+1)/2);
    return 0;
}
