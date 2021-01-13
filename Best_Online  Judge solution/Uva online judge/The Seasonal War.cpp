


#include<bits/stdc++.h>
using namespace std;
int vis[30][30];
char arr[30][30];
int row,u,v;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
void bfs(int i,int j)
{
    queue<pair<int,int> >Q;
    int x,y;
    Q.push(make_pair(i,j));
    while(!Q.empty())
    {
        //pair<int,int>p=q.front();
        //u=p.first;

        int u=Q.front().first;
        int v=Q.front().second;
        Q.pop();
        for(int i=0;i<8;i++){
            x=u+dx[i];
            y=v+dy[i];
                         cout<<"x = "<<x<<" y = "<<y<<endl;
             if(x>=0 && x<row && y>=0 && y<row){
                if(!vis[x][y]){
                    vis[x][y]=1;
                    if(arr[x][y]=='1')
                        Q.push(make_pair(x,y));
                }
            }
        }
    }
}

int main()
{
    int j=1;
    while(scanf("%d",&row)==1){
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
               cin>>arr[i][j];
                vis[i][j]=0;
            }
        }
        int coun=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                if(!vis[i][j]){
                    vis[i][j]=1;
                    if(arr[i][j]=='1')
                    {
                        coun++;
                        bfs(i,j);
                    }
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",j++,coun);
    }
    return 0;
}

/*
6
100100
001010
000000
110000
111000
010100

8
01100101
01000001
00011000
00000010
11000011
10100010
10000001
01100000
*/


