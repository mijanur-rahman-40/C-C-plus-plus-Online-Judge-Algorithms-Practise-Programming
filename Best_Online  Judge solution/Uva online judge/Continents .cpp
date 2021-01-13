
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
        for(int i=0;i<8;i++)
        {
            new_x=x+dx[i];
            new_y=y+dy[i];
          if(new_x>=0 && new_x<row && new_y>=0 && new_y<col)
            {
                if(!visited[new_x][new_y])
                {
                    visited[new_x][new_y]=1;
                    if(arr[new_x][new_y]=='l')
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
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                cin>>arr[i][j];
                visited[i][j]=0;
            }
        }
        int count=0;
        for(int i=1;i<=row;i++){
            for(int j=3;j<=col;j++){
                if(!visited[i][j]){
                    visited[i][j]=1;
                    if(arr[i][j]=='l')
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
