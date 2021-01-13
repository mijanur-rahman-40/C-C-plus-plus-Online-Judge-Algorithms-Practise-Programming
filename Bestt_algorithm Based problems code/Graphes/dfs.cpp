#include<bits/stdc++.h>
using namespace std;
int color[100001],parent[100001];
map< int, vector< int > >m;
void dfs(int n)
{
    color[n]=1;
    for(__typeof(m[n].begin())it=m[n].begin();it!=m[n].end();it++)
    {
        if(color[*it]==0)
        {
            parent[*it]=n;
            dfs(*it);
        }
    }
    cout<<n<<endl;
}
int main()
{
    int n,e,a,b;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        m[a].push_back(b);
        m[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(color[i]==0)
          dfs(i);
    }
return 0;
}
