#include <bits/stdc++.h>

using namespace std;

const int MAX = 100005;
long long val, tree[4*MAX], lazy[4*MAX], arr[MAX];

void build(int node, int b, int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return ;
    }
    int left = node<<1, right = left+1, mid = (b+e)/2;
    build(left, b, mid);
    build(right, mid+1, e);
    tree[node] = tree[left]+tree[right];
    return ;
}

void refresh(int node, int b, int e, ll value)
{
    tree[node] += (e-b+1)*value;
    if(b!=e)
    {
        lazy[node*2] += value;
        lazy[node*2+1] += value;
    }
    lazy[node] = 0;
    return ;
}

void update(int node, int b, int e, int i, int j, long long value)
{

    if(lazy[node])
        refresh(node, b, e, lazy[node]);
    if(b>j || e<i)
        return ;
    if(b>=i && e<=j)
    {
        refresh(node, b, e, value);
        return ;
    }
    int left = node<<1, right = left+1, mid = (b+e)/2;
    update(left, b, mid, i, j, value);
    update(right, mid+1, e, i, j, value);
    tree[node] = tree[left] + tree[right];
    return ;
}

long long query(int node, int b, int e, int i, int j)
{
    if(j<b || i > e) return 0;
    if(lazy[node])
        refresh(node, b, e, lazy[node]);
    if(b>=i && e<=j)
    {
        return tree[node];
    }
    int left = node<<1, right = left+1, mid = (b+e)/2;
    return query(left, b, mid, i, j) + query(right, mid+1, e, i, j);
}

int main()
{
    return 0;
}






















