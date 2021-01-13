#include<bits/stdc++.h>
using namespace std;
int row;
bool vis[201][201];
char arr[201][201];
int dx[]={1,1,0,-1,-1,0};
int dy[]={0,1,1,0,-1,-1};
void BFS(int i,int j)
{
    vis[i][j] == 1;
    queue<pair<int,int> >Q;
    Q.push(make_pair(i,j));
    while(!Q.empty())
    {
        int u = Q.front().first;
        int v = Q.front().second;
       Q.pop();
        for(int i=0; i<6; i++){
            int x = u + dx[i];
            int y = v + dy[i];
            if((x>=0 && x<row) && (y>=0 && y<row) && arr[x][y] == 'w'){
                if(!vis[x][y]){
                    vis[x][y] = 1;
                    Q.push(make_pair(x,y));
               }
            }
        }
    }
}
int main()
{
    int j=1;
    while(scanf("%d",&row) && row ){
        for(int i=0; i<row; i++){
            for(int j=0; j<row; j++){
                cin>>arr[i][j];
            }
        }
        memset(vis,0,sizeof(vis));
         for(int i=0; i<row; i++){
               if(arr[i][0] == 'w' && !vis[i][0]){
                 BFS(i,0);
               }
            }
            int flag = 0;
        for(int i=0; i<row; i++){
                if(vis[i][row-1] == 1){
                    flag = 1;
                    break;
                }
         }
         if(flag ==1){
            printf("%d W\n",j++);
         }
         else
            printf("%d B\n",j++);
    }
    return 0;
}


/*
b b w b
w w b w
b b w b
b w w w
*/
