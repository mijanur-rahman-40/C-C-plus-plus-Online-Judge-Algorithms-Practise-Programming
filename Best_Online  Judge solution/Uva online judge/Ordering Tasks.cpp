
#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
int mat[101][101];
int vis[101];
int indeg[1101];
int node,edge;

void topologicalsort()
{
    int cont=0,cur;
    queue<int>Q;
    for(int i=1; i<=node; ++i)
    {
        if(indeg[i]==0)
            Q.push(i);
    }
    while(!Q.empty() && cont<node)
    {
        cur=Q.front();
        Q.pop();
        vis[cur]=1;
        vec.push_back(cur);
        for(int i=1; i<=node; ++i)
        {
            if(mat[cur][i] && vis[i]==0)
            {
                indeg[i]--;
                if(indeg[i]==0)
                    Q.push(i);
            }
        }
        cont++;
    }
}
int main()
{
    while(scanf("%d%d",&node,&edge) == 2){
            if(node == 0 && edge == 0)
            break;
   memset(mat,0,sizeof(mat));
     memset(indeg,0,sizeof(indeg));
       memset(vis,0,sizeof(vis));

    for(int i=1; i<=edge; ++i)
    {
        int a,b;
        cin>>a>>b;
        mat[a][b]=1;
        indeg[b]++;
    }
    topologicalsort();
    cout<<vec[0];
    for(int i=1; i<=vec.size()-1; i++){
            printf(" %d",vec[i]);
    }
    cout<<endl;
    vec.clear();
    }
    return 0;
}



