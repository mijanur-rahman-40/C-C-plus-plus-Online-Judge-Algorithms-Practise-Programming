
#include<bits/stdc++.h>
using namespace std;
const int mx=100000;
int arr[mx];
int tree[mx * 3];
void build(int node, int beg, int end)
{
    if (beg == end) {
        tree[node] = arr[beg];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (beg + end) / 2;
    build(Left, beg, mid);
    build(Right, mid + 1, end);
    tree[node] = max(tree[Left] , tree[Right]);  //min or max
}
int query(int node, int beg, int end, int i, int j)
{
    if (i > end || j < beg)
        return -1000;
    if (beg >= i && end <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (beg + end) / 2;
    int min1= query(Left,beg, mid, i, j);
    int min2= query(Right, mid + 1, end, i, j);
    return max(min1,min2);  //min or max
}

int main()
{
    int num,i,j,query1;
    scanf("%d%d",&num,&query1);
    for(int i=1;i<=num;i++){
            scanf("%d",&arr[i]);
    }
     build(1,1,num);
     while(query1--){
     scanf("%d%d",&i,&j);
    printf("%d\n",query(1, 1, num, i, j));
    }
    return 0;
}



