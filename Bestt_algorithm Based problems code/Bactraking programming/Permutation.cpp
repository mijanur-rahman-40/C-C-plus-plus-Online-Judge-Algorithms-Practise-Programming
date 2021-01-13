
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int lev=-1,n;
int val[50], a[50];
int visit(int k)
{
    int i;
    val[k]=++lev;
   // printf("%d %d \n",lev,val[k]);
    if(lev==n){
        for(i=0;i<n;i++){
        printf("%d",a[val[i]]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
      if(val[i]==0)
         visit(i);
    }
    lev--;
    val[k]=0;

}

int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        val[i]=0;
        j=i+1;
        scanf("%d",&a[j]);
    }
    visit(0);
    //getch();
}

/*

#include<bits/stdc++.h>
using namespace std;
int used[20],number[20];

void permutation(int at,int n)
{
    if(at==n+1){
        for(int i=1; i<=n; i++){
            cout<<number[i];
        }
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++){
        if( !used[i] ){
            used[i]=1;
            number[at]=i;
            permutation(at+1,n);
            used[i]=0;
        }
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
       cin>>number[i];
    }
    memset(used,0,sizeof(used));
    permutation(1,num);
}
*/
