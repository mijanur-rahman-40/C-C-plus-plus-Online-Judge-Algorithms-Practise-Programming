#include<iostream>
#include<queue>

using namespace std;

int mat[100][100],visited[100],indeg[100],n,e;
queue<int> q;

void topologicalsort()
{
    int cnt,cur;
    for(int i=0;i<n;++i)
    {
        if(indeg[i]==0)
            q.push(i);
    }
    cnt=0;
    while(!q.empty() && cnt<n)
    {
        cur=q.front();
        q.pop();
        visited[cur]=1;
        cout<<cur<<" ";
        for(int i=0;i<n;++i)
        {
            if(mat[cur][i]&&visited[i]==0)
            {
                indeg[i]--;
                if(indeg[i]==0)
                    q.push(i);
            }
        }
        cnt++;
    }
}

int main()
{
    cin>>n>>e;
    for(int i=0; i<n; ++i)
    {
        visited[i]=0;
        indeg[i]=0;
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            mat[i][j]=0;
        }
    }
    for(int i=0; i<e; ++i)
    {
        int a,b;
        cin>>a>>b;
        mat[a-1][b-1]=1;
        indeg[b-1]++;
    }
    topologicalsort();
    return 0;
}
