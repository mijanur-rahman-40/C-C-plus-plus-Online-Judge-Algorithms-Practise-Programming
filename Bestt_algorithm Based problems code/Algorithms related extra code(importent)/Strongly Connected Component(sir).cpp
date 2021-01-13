#include<iostream>
#include<stack>
int visited[100],mat[100][100],mat2[100][100],n,e,start,cnt;

using namespace std;

stack<int>stk;

void DFS(int cur)
{
    cout<<cur<<" ";
    for(int i=0;i<n;++i)
    {
        if(mat[cur][i]==1 && visited[i]==0)
        {
            visited[i]=1;
            cnt++;
            DFS(i);
            stk.push(i);
        }
    }
}

void DFS2(int cur)
{
    cout<<cur<<" ";
    for(int i=0;i<n;++i)
    {
        if(mat2[cur][i]==1 && visited[i]==0)
        {
            visited[i]=1;
            DFS2(i);
        }
    }
}
void SCC()
{
    int cur;
    for(int i=0;i<n;++i)
    {
        visited[i]=0;
    }
    while(!stk.empty())
    {
        cur=stk.top();
        stk.pop();
        if(visited[cur]==0)
        {
            visited[cur]=1;
            DFS2(cur);
            cout<<endl;
        }
    }
}

int main()
{
    int a,b;
    cin>>n>>e;
    for(int i=0;i<n;++i)
    {
        visited[i]=0;
        for(int j=0;j<n;++j)
        {
            mat[i][j]=0;
        }
    }
    for(int i=0;i<e;++i)
    {
        cin>>a>>b;
        mat[a][b]=1;
        mat2[b][a]=1;
    }
    cin>>start;
    visited[start]=1;
    cnt=1;
    DFS(start);
    stk.push(start);
    for(int i=0;i<n;++i)
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            cnt++;
            DFS(i);
            stk.push(i);
        }
    }
    return 0;
}
/*
8 14
0 1
1 2
2 3
3 2
3 7
7 7
2 6
6 7
6 5
5 6
1 5
1 4
4 5
4 0
*/
