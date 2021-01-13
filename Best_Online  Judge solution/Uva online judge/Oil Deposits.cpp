/*

#include<bits/stdc++.h>
using namespace std;
char grid[110][110];
map < pair < int,int >, int > visit;
pair<int,int>MP;
int n,m;
int adjx[]={1,1,1,0,-1,-1,-1,0};
int adjy[]={-1,0,1,1,1,0,-1,-1};

void dfs(int a,int b)
{
    int x,y;
    visit[MP(a,b)]=1;
    for(int i=0;i<8;i++)
        {
            x= a+adjx[i];
            y= b+adjy[i];
            //cout<<x<<" "<<y<<endl;
          if(grid[x][y]=='@' && !visit[MP(x,y)])
          dfs(x,y);
        }
}

int main()
{
    while(cin>>n>>m){
        if(n==0 && m==0)
               break;
        CLR(grid);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>grid[i][j];
            }
        }
        visit.clear();
        int cnt=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(grid[i][j]=='@' && !visit[MP(i,j)]){
                    cnt++;
                    dfs(i,j);
                }
        cout<<cnt<<endl;
    }
}
*/

#include<bits/stdc++.h>
using namespace std;
char arr[100][100];
int visited[100][100];
int row,col;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
void bfs(int x,int y)
{
    queue<pair<int,int> >q;
    int new_x,new_y;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
        pair<int,int>p=q.front();
        q.pop();
        x=p.first;
        y=p.second;
        for(int i=0;i<8;i++){
            new_x=x+dx[i];
            new_y=y+dy[i];
          if(new_x>=0 && new_x<row && new_y>=0 && new_y<col){
                if(!visited[new_x][new_y]){
                    visited[new_x][new_y]=1;
                    if(arr[new_x][new_y]=='1')
                        q.push(make_pair(new_x,new_y));
                }
            }
        }
    }
}

int main()
{
    while(cin>>row>>col){
        if(row==0 && col==0)
            break;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>arr[i][j];
                visited[i][j]=0;
            }
        }
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(!visited[i][j]){
                    visited[i][j]=1;
                    if(arr[i][j]=='1')
                    {
                        count++;
                        bfs(i,j);
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

