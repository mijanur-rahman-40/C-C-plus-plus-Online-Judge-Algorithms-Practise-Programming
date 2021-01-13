// it is not efficient

#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int N;
    scanf("%d",&N);
    long arr[N+3];
    for(int i=1 ;i<=N; i++){
        scanf("%d",&arr[i]);
    }
    int query;
    scanf("%d",&query);
    while(query--){
        int L,R;
        scanf("%d%d",&L,&R);
        for(int i=L; i<=R; i++){
            mp[arr[i]]++;
        }
        cout<<mp.size()<<endl;
        mp.clear();
    }
    return 0;
}


/*

#include <bits/stdc++.h>
#define f first
#define s second

using namespace std;

pair <int, pair <int, int> > q[200001];
int n, m, a[100001], ans[200001];
int st[5*100001];
int cmp(pair <int, pair <int, int> > a, pair <int, pair <int, int> > b)
{
    if (a.s.f != b.s.f)
        return a.s.f < b.s.f;
    return a.f < b.f;
}
void update(int v, int l, int r, int x, int d)
{
    if (l == r)
    {
        st[v] = d;
        return;
    }
    int mid = (l + r) / 2;
    if (x <= mid)
        update(v * 2, l, mid, x, d);
    else
        update(v * 2 + 1, mid + 1, r, x, d);
    st[v] = st[v * 2] + st[v * 2 + 1];
}
int Find(int v, int A, int B, int l, int r)
{
    if (l > B || r < A)
        return 0;
    if (A == l && B == r)
        return st[v];
    int mid = (A + B) / 2;
    return Find(v * 2, A, mid, l, min(mid, r)) + Find(v * 2 + 1, mid + 1, B, max(mid + 1, l), r);
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
        scanf("%d %d", &q[i].f, &q[i].s.f), q[i].s.s = i;
    sort(q + 1, q + m + 1, cmp);
    int j = 1;
    map<int,int>used;
    for (int i = 1; i <= m; i++)
    {
        while(j <= q[i].s.f)
        {
            if (!used[a[j]])
            {
                update(1, 1, n, j, 1);
                used[a[j]] = j;
            }
            else
            {
                update(1, 1, n, used[a[j]], 0);
                update(1, 1, n, j, 1);
                used[a[j]] = j;
            }
            j++;
        }
        ans[q[i].s.s] = Find(1, 1, n, q[i].f, q[i].s.f);
    }
    for (int i = 1; i <= m; i++)
        printf("%d\n", ans[i]);

    return 0;
}
*/
