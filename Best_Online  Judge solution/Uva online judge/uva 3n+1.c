#include<stdio.h>
int main(){
   int i,n,j,k,count;
   long int max;
     while(scanf("%d%d",&i,&j)==2 && i>0&&j>0){
printf("%d %d",i,j);
   max=0;
    if(i>j){
        k=i;
        i=j;
        j=k;
    }
    while(i<=j){
    count=1;
    n=i;
       while(n!=1)
  {
     if(n%2==0){
    n=n/2;
   }
    else{
    n=3*n+1;
     }
    count++;
}
if(count>max){
    max=count;
}
    i++;
}
   printf(" %ld\n",max);
}
return 0;
}



#include<iostream>
using namespace std;
int t3n1(int n){
    int num=1;
    while(n!=1){
        if(n%2)
            n=3*n+1;
        else
            n=n/2;
        num++;
    }
    return num;
}
int work(int n,int m){
    int max=0,tmp;
    for(int i=n;i<=m;i++)
        if(max<(tmp=t3n1(i)))
            max=tmp;
    }
    return max;
}
int main(){
    int n,m;
    while(cin>>n>>m){
        if(n>m){
            cout<<n<<' '<<m<<' '<<work(m,n)<<endl;
        }
        else
            cout<<n<<' '<<m<<' '<<work(n,m)<<endl;
    }
    return 0;
}
