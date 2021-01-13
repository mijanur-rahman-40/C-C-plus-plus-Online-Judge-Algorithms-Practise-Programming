
#include<stdio.h>
int main()
{
    int array[245],barray[856],carray[653];
    int i,j,n,m,t,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        }
        scanf("%d",&m);
        for(j=0;j<m;j++){
        scanf("%d",&barray[j]);
        }
        int c=0;
        for(i=0,j=0;i<n,j<m;i++,j++){
                    if(array[i]<barray[j]){
                    carray[c]=array[i];
                     c++;
                    }
                     else{
                        for(j=0;j<m;j++){
                        carray[c]=barray[j];
                        c++;
                    }
                     }
        }
        k=c;
        printf("%d ",carray[0]);
        for(i=1;i<k;i++){
            printf(" %d ",carray[i]);
        }
        printf("\n");
    }
    return 0;
}

/*

#include<cstdio>
using namespace std;
int main()
{
    int a[]={1,2,4,7,9,10};
    int b[]={1,2,4,7,8,9,10};
    int c[20];
    int i=0,j=0,k=0,n;
    while(true){

        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }

    }
    n=k;
    printf("%d",c[0]);
    for(i=1;i<n;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
*/
