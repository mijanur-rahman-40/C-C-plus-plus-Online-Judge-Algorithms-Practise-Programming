#include <bits/stdc++.h>

using namespace std;

const int MAX = 100005;
long long tree[MAX*4], a[MAX], N=10000;

void build(int node, int b, int e){
    if(b == e){
        tree[node] = a[b];
        return ;
    }
    int l = node<<1, r = l + 1, mid = (b+e)/2;
    build(l, b, mid);
    build(r, mid+1, e);
    tree[node] = tree[l] + tree[r];
}

void update(int node, int b, int e, int i, long long v){
    if(b > i || e < i)
        return ;
    if(b == i && e == i){
        tree[node] = v;
        return ;
    }
    int l = node<<1, r = l+1, mid = (b+e)/2;
    update(l, b, mid);
    update(r, mid+1, e);
    tree[node] = tree[l] + tree[r];
}

int query(int node, int b, int e, int i, int j){
    if(b > j || e < i)
        return 0;
    if(b >= i && e <= j)
        return tree[node];
    int l = node<<1, r = l + 1, mid = (b+e)/2;
    return query(l, b, mid, i, j) + query(r, mid+1, e, i, j);
}

int main(){
    for(int i=1; i<=N; i++) a[i] = rand();
    build(1,1,N);
    return 0;
}


