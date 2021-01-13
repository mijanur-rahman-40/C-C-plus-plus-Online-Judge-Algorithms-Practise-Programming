#include<iostream>
using namespace std;
int subarr[1000];
int j;
int main()
{
    int a,b,c,i;
    cin>>a;
    cin>>b;
    for(i=0;i<b;i++){
        cin>>j;
        subarr[j]=1;
    }
    cin>>c;
    for(i=0;i<c;i++){
       cin>>j;
        subarr[j]=1;
    }
    int flag=1;
    for(i=1;i<=a;i++){
        if(subarr[i]==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"I become the guy."<<endl;
    }
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
#include<stdio.h>
int main()
{
    int array[1000];
    int i,n,a;
    int flag=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&array[i]);
    }
    for(i=1;i<=a;i++){
        if(array[i]==i)
           flag=1;
           break;
    }
    if(flag==0)
        printf(" not Found\n");
    else
        printf(" found\n");

    return 0;
}
