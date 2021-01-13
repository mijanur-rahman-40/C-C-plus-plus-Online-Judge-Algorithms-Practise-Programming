
#include<bits/stdc++.h>
using namespace std;
const int mx=100100;
int arr[mx];
 int tree1[mx * 4];
 int tree2[mx * 4];
void build(int node,int beg,int end)
{
    if (beg == end) {
        tree1[node] = arr[beg];
        tree2[node] = arr[beg];
        return;
    }
    int Left = node * 2;
  int Right = node * 2 + 1;
   int mid = (beg + end) / 2;
    build(Left, beg, mid);
    build(Right, mid + 1, end);
    tree1[node] = max(tree1[Left] , tree1[Right]);
    tree2[node] =min(tree2[Left] , tree2[Right]);
}
 int query_max(int node,int beg,int end,int i,int j)
{
    if (i > end || j < beg)
        return mx*(-1);
    if (beg >= i && end <= j)
        return tree1[node];
     int Left = node * 2;
     int Right = node * 2 + 1;
     int mid = (beg + end) / 2;
     int MX1= query_max(Left,beg, mid, i, j);
     int MX2= query_max(Right, mid + 1, end, i, j);
    return max(MX1,MX2);
}
 int query_min(int node,int beg,int end,int i,int j)
{
    if (i > end || j < beg)
        return mx;
    if (beg >= i && end <= j)
        return tree2[node];
     int Left = node * 2;
    int Right = node * 2 + 1;
     int mid = (beg + end) / 2;
     int MN1= query_min(Left,beg, mid, i, j);
    int MN2= query_min(Right, mid + 1, end, i, j);
    return min(MN1,MN2);
}
int main(){
 int tst,num,que,diff,m=1;
    scanf("%d",&tst);
    while(tst--){
            int ans=0;
        scanf("%d%d",&num,&que);
        for(int i=1;i<=num;i++){
            scanf("%lld",&arr[i]);
        }
        build(1,1,num);
        for(int j=1;j<=num-1;j++){
           int max1=query_max(1,1,num,j,j+que-1);
          //printf("%lld   ",max1);
            int min1=query_min(1,1,num,j,j+que-1);
             // printf("%lld     ",min1);
               int diff=(max1-min1);
          ans=max(diff,ans);
        }
        printf("Case %d: %d\n",m++,ans);
    }
    return 0;
}
