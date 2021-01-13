#include<bits/stdc++.h>
using namespace std;
int arr_change(int target,int p[])
{
    for(int i=0; i<target; i++){
        p[i] = p[i]*2;
    }
}
int main()
{
    int parent[100];
    int target;
    scanf("%d",&target);
    for(int i=0; i<target; i++){
        scanf("%d",&parent[i]);
    }
    arr_change(target,parent);
    for(int i=0; i<target; i++){
        printf("%d ",parent[i]);
    }
    return 0;
}
