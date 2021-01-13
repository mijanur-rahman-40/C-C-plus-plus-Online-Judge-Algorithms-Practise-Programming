#include<bits/stdc++.h>
using namespace std;
int n,k=0;
map<int,vector<int> >m;
set<int>s;
int A[1000001];
void dfs()
{
    for(int i=1;i<=n;i++)
    {
        if(A[i]==0)
        {
            A[i]=-1;
            for(__typeof(m[i].begin())it=m[i].begin();it!=m[i].end();it++)
            {
                A[*it]--;
            }
            cout<<i<<endl;
            k++;
            if(k==n)
                return ;
            dfs();
        }
    }
}
int main()
{
    int e,a,b;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        m[a].push_back(b);
        s.insert(a);
        s.insert(b);
        A[b]++;
    }
    dfs();
    if(k<n)
        cout<<"there is no work can be done from now"<<endl;
    return 0;
}
