#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sort(a,a+n);
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
