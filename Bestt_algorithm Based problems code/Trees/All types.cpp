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
    tree[node] = tree[Left] + tree[Right];
}
int query(int node, int beg, int end, int i, int j)
{
    if (i > end || j < beg)
        return 0; //বাইরে চলে গিয়েছে
    if (beg >= i && end <= j)
        return tree[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (beg + end) / 2;
    int p1 = query(Left, beg, mid, i, j);
    int p2 = query(Right, mid + 1, end, i, j);
    return p1 + p2; //বাম এবং ডান পাশের যোগফল
}
void update(int node, int beg, int end, int i, int newvalue)
{
    if (i > end || i< beg)
        return; //বাইরে চলে গিয়েছে
    if (beg >= i && end <= i) { //রিলেভেন্ট সেগমেন্ট
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (beg + end) / 2;
    update(Left, beg, mid, i, newvalue);
    update(Right, mid + 1, end, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main()
{
    int num=6;
    for(int i=1;i<=num;i++){
          cin>> arr[i];
    }
    build(1, 1, num);
    update(1, 1, num, 3,4);
    cout << query(1, 1, num, 1, 3) << endl;
    update(1, 1, num, 2, 5);
    cout << query(1, 1, num, 2, 5) << endl;
    return 0;
}
/*

1 3 5 2 7 8
8
18
*/
