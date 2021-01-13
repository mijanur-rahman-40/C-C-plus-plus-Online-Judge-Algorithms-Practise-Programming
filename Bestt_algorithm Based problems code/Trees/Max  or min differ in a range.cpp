#include <bits/stdc++.h>

    using namespace std;

    const int N = 1e5;  // limit for array size
    int n;  // array size
    int t[2 * N];
    int t_ans[2*N];

    void build1() {  // build the tree
      for (int i = n - 1; i > 0; --i) t[i] = max(t[i<<1],t[i<<1|1]);
    }

    void build2() {  // build the tree
      for (int i = n - 1; i > 0; --i) t_ans[i] = t[i<<1] - t[i<<1|1];
    }

    void modify(int p, int value) {  // set value at position p
      for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
    }

    int query(int l, int r) {  // sum on interval [l, r)
      int res = 0;
      for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l&1) res = max(res,t[l++]);
        if (r&1) res = max(res,t[--r]);
      }
      return res;
    }

    int query2(int l, int r) {  // sum on interval [l, r)
      int res = 0;
      for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l&1) res = max(res, t_ans[l++]);
        if (r&1) res = max(res, t_ans[--r]);
      }
      return res;
    }

    int main() {
      cin>>n;
      for (int i = 0; i < n; ++i) {
        scanf("%d", t + n + i);
      }
      build1();
      build2();

      /*
      For testing purpose only
      for(int i=0; i<2*n; i++) {
        cout<<t[i]<<" ";
      }
      cout<<endl;
      for(int i=0; i<2*n; i++) {
        cout<<t_ans[i]<<" ";
      }
      cout<<endl;
      */
      int q;
      cin>>q;
      for(int i=0; i<q; i++) {
        int l,r;
        cin>>l>>r;
        cout<<query2(l,r+1)<<endl;
      }

      return 0;
    }



    #include<bits/stdc++.h>
#define mx 100005
using namespace std;
long long int arr[mx];
long long int max_tree[mx*3];
long long int min_tree[mx*3];
void init(long long int node,long long int b,long long int e){
    if(b==e)
        {
            max_tree[node]=arr[b];
            min_tree[node]=arr[b];
            return;
        }
        long long int left = node*2;
        long long int right = node*2+1;
        long long int mid=(b+e)/2;
        init(left,b,mid);
        init(right,mid+1,e);
        max_tree[node]=max(max_tree[left],max_tree[right]);
        min_tree[node]=min(min_tree[left],min_tree[right]);
}
long long int max_query(long long int node,long long int b,long long int e,long long int i,long long int j)
{
    if(e<i || b>j)
        return 0;
    if(b>=i && e<=j)
    {
        return max_tree[node];
    }
    long long int left = node*2;
    long long int right = node*2+1;
    long long int mid=(b+e)/2;
    long long int q1=max_query(left,b,mid,i,j);
    long long int q2=max_query(right,mid+1,e,i,j);
    return max(q1,q2);
}
long long int min_query(long long int node,long long int b,long long int e,long long int i,long long int j)
{
    if(e<i || b>j)
        return 10000000;
    if(b>=i && e<=j)
    {
        return min_tree[node];
    }
    long long int left = node*2;
    long long int right = node*2+1;
    long long int mid=(b+e)/2;
    long long int q1=min_query(left,b,mid,i,j);
    long long int q2=min_query(right,mid+1,e,i,j);
    return min(q1,q2);
}
int main(){
    long long int t,n,q,diff;
    scanf(“%lld”,&t);
    for(long long int i=1;i<=t;i++){
            long long int ans=0;
        scanf(“%lld %lld”,&n,&q);
        for(long long int j=1;j<=n;j++)
        {
            scanf(“%lld”,&arr[j]);
        }
        init(1,1,n);
        q–;
        for(long long int k=1;k<=n-q;k++)
        {
            long long int max1=max_query(1,1,n,k,k+q);
            long long int min1=min_query(1,1,n,k,k+q);
            long long int diff=(max1-min1);
            //cout<<diff<<endl;
            //ans=max(ans,diff);
            if(ans<diff)
                ans=diff;
            //cout<<“ans “<<ans<<endl;
        }
        printf(“Case %lld: %d\n”,i,ans);
    }
    return 0;
}

