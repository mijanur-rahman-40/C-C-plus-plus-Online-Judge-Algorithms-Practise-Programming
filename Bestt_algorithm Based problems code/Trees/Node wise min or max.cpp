#include<bits/stdc++.h>
using namespace std;
const int mx=100000;
int arr[mx];
int tree[mx * 4];
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
    tree[node] =min(tree[Left],tree[Right]);
    printf("%d ",tree[node]);
}

int main()
{
     int num;
     scanf("%d",&num);
     for(int i=1;i<=num;i++){
          scanf("%d",&arr[i]);
     }
     build(1,1,num);
}

