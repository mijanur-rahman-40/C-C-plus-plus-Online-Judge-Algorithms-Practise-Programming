 #include<stdio.h>
 int binary(int a[],int n,int m,int l,int u){

     int mid,c;

     if(l<=u){
          mid=(l+u)/2;
          if(m==a[mid]){
              c=1;
          }
          else if(m<a[mid]){
              return binary(a,n,m,l,mid-1);
          }
          else
              return binary(a,n,m,mid+1,u);
     }
     else
       return c;
}

int main(){

    int a[10],i,t,x,y,l,u;

    scanf("%d",&t);

    for(i=0;i<t;i++){
         scanf("%d",&a[i]);
    }

    scanf("%d",&x);

    l=0,u=t-1;
    y=binary(a,t,x,l,u);
    if(y==0)
         printf(" Number is not found.",x);
    else
         printf(" %d Number is found.",x);

    return 0;
 }

