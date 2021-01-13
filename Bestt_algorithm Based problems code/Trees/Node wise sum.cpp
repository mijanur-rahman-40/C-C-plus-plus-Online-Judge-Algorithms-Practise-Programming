#include<bits/stdc++.h>
using namespace std;
const int mx=100000;
int arr[mx];
int tree[mx *4];
void build(int node, int beg, int end)
{
    if (beg== end) {
        tree[node] = arr[beg];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (beg + end) / 2;
   build(Left, beg, mid);
    build(Right, mid + 1, end);
    tree[node] = tree[Left] + tree[Right];
     printf(" %d ",tree[node]);
}
int main()
{
    int n;
    cin >> n;
          for(int i=1;i<=n;i++){
        cin>> arr[i];
          }
          build(1, 1, n);

    return 0;
}
