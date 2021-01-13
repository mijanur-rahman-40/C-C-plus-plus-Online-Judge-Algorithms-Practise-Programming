/*
#include<bits/stdc++.h>
using namespace std;
int dist[1000][1000];
int mat[1000][1000];
struct node{
  int x,y,cost;
  bool operator < (const node& p) const{
      return cost > p.cost;
  }

};
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
void dijkstra(int i,int j,int row,int col)
{
    priority_queue< node > Q;
    dist[i][j] = mat[i][j];
    node obj;
    obj.x = i;
    obj.y = j;
    obj.cost = mat[i][j];
    Q.push(obj);
    while(!Q.empty())
    {
        node u= Q.top();
        Q.pop();
        for(int i=0; i<4; i++){
            int n_x = u.x + dx[i];
            int n_y = u.y + dy[i];
            if((n_x>=0 && n_x<row) && (n_y>=0 && n_y<col))
            {
                if(mat[n_x][n_y] + u.cost < dist[n_x][n_y])
                {
                    node v;
                    v.x = n_x;
                    v.y = n_y;
                    v.cost = mat[n_x][n_y] + u.cost;
                    dist[n_x][n_y] = mat[n_x][n_y] + u.cost;
                    Q.push(v);
                }
            }
        }
    }

}

int main()
{
    int tst;
    cin>>tst;
    while(tst--){
        int row,col;

        cin>>row>>col;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf("%d",&mat[i][j]);
            }
        }
        memset(dist,1000000,sizeof(dist));
        dijkstra(0,0,row,col);
        printf("%d\n",dist[row-1][col-1]);
    }
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int dist[1000][1000];
int mat[1000][1000];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
typedef pair<int,int>pai1;
typedef pair<int,pai1>pai2;
void dijkstra(int i,int j,int row,int col)
{
    priority_queue< pai2,vector< pai2 >,greater<pai2> > Q;
    dist[i][j] = mat[i][j];
    Q.push(make_pair(dist[i][j],pai1(i,j)));
    while(!Q.empty())
    {
        int u1 = Q.top().second.first;
        int u2 = Q.top().second.second;
        int cost = Q.top().first;
        Q.pop();
        for(int i=0; i<4; i++){
            int n_x = u1 + dx[i];
            int n_y = u2 + dy[i];
            if((n_x>=0 && n_x<row) && (n_y>=0 && n_y<col))
            {
                if(mat[n_x][n_y] + cost < dist[n_x][n_y])
                {
                    dist[n_x][n_y] = mat[n_x][n_y] + cost;
                    Q.push(make_pair(dist[n_x][n_y],pai1(n_x,n_y)));
                }
            }
        }
    }

}

int main()
{
    int tst;
    cin>>tst;
    while(tst--){
        int row,col;

        cin>>row>>col;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf("%d",&mat[i][j]);
            }
        }
        memset(dist,1000000,sizeof(dist));
        dijkstra(0,0,row,col);
        printf("%d\n",dist[row-1][col-1]);
    }
    return 0;
}

/*
2
4
5
0 3 1 2 9
7 3 4 9 9
1 7 5 5 3
2 3 4 2 5
/
