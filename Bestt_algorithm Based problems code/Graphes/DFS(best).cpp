
#include<bits/stdc++.h>
using namespace std;
#define MAX_SZ 100
stack<int>st;
int mat[MAX_SZ][MAX_SZ]={0}, color[MAX_SZ]={0}, STK[MAX_SZ], top = -1;

void push(int item)
{
     top++;
    STK[top] = item;
}
int pop()
{
     int p=STK[top];
     top--;
       return p;
}
bool isEmpty()
{
    if(top == -1)
        return true;
    return false;
}


void dfs(int v, int e, int s)
{
    int current, i;
    st.push(s);
    color[s] = 1;
    while(!st.empty()){
        current = st.top();
        st.pop();
        //printf("%d",current);
        for(i=0;i<v;i++){
            if(mat[current][i] == 1 && color[i] == 0)
            {
                st.push(i);
                color[i] = 1;
            }
        }
        printf("%d ", current);

/*
  0 1 2 3 4 5
0 0 1 0 1 0 0
1 1 0 1 1 0 0
2 0 1 0 0 0 1
3 1 1 0 0 0 1
4 0 0 0 0 0 1
5 0 0 1 1 1 0

        color[current] = 2;
    }
}
int main()
{
    int i, j, v, e, a, b, start;
    printf("Total Vertices:");
    scanf("%d", &v);
    printf("Total Edges:");
    scanf("%d", &e);
    /*
    for(i=0;i<v;i++){
        for(j=0;j<v;j++){
            mat[i][j] = 0;
        }
    }
    for(i=0;i<v;i++){
        color[i] = 0;
    }*/
    /*
    for(i=0;i<e;i++)
    {
        scanf("%d %d", &a, &b);
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    printf("Starting node: ");
    scanf("%d", &start);
    dfs(v, e, start);
    return 0;
}
*/
/*
1 2
1 3
2 4
4 3
3 2
for input
0 1
0 3
1 3
1 2
3 5
2 5
5 4
for adjmat
0 1
1 0
0 3
3 0
1 3
3 1
1 2
2 1
3 5
5 3
2 5
5 2
5 4
4 5
ans Starting node: 1
 1 3 5 4 2 0


0 1 0 1 0 0
1 0 1 1 0 0
0 1 0 0 0 1
1 1 0 0 0 1
0 0 0 0 0 1
0 0 1 1 1 0
*/

/*
#include<bits/stdc++.h>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define SIZE 100

int adj[SIZE][SIZE];
int colour[SIZE];
int parent[SIZE];
int dis[SIZE];
int fin[SIZE];
int time = 0;

void dfs(int vertex);
void dfsVisit(int u , int vertex);

int main()
{
    freopen("input.txt" , "r" , stdin);
    int vertex;
    int edge;
    cin >> vertex >> edge;
    cout << "Vertex is : " << vertex <<endl;
    cout << "Edge is : " << edge <<endl;

    int node1,node2;
    for(int i = 0 ; i< edge ; i++)
    {
        //cout << "Enter 2 Nodes : ";
        cin >> node1 >> node2;
        adj[node1][node2] = 1;
        adj[node2][node1] = 1;

    }
    for(int i = 0 ; i < vertex ; i++)
    {
        for(int j = 0 ; j < vertex ; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    dfs(vertex);
}


void dfs(int vertex)
{
    for(int i = 0 ; i < vertex ; i++)
        colour[i] = WHITE;
    time = 0;
    cout << "DFS is ";
    for(int i = 0 ; i<vertex ; i++)
    {
        if(colour[i] == WHITE)
        {
            dfsVisit(i , vertex);
        }
    }
}

void dfsVisit(int u , int vertex)
{
    colour[u] = GRAY;
    dis[u] = time++;
    for(int i = 0 ; i<vertex ; i++)
    {
        if(adj[u][i] == 1)
        {
            int v = i;
            if(colour[v] == WHITE)
            {
                parent[v] = u;
                dfsVisit(v , vertex);
            }
        }
    }
    colour[u] = BLACK;
    fin[u] = time++;
    cout << u << " ";

}
*/

#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > Adj(1000);
int visited[100]={0};
int parent[100];
void bfs(vector< vector<int> > Adj,int root)
{
	stack<int>S;
	S.push(root);
	visited[root]=1;
	while(!S.empty()){
		int u=S.top();
		cout<<u<<"-->";
		S.pop();
		for(int i=0;i<Adj[u].size();i++){
			if(!visited[Adj[u][i]])
			{
				S.push(Adj[u][i]);
				visited[Adj[u][i]]=1;
				parent[Adj[u][i]]=u;
			}
		}
	}
}
/*
node = 6, edge = 7, start = 0
0 1
0 3
1 3
1 2
3 5
2 5
5 4

starting node 0   0-->1-->3-->2-->5-->4-->
starting node 1   1-->0-->3-->2-->5-->4-->*/

int main()
{
	int node,edge,root;
	cin>>node>>edge;
	printf("Starting node: ");
        cin>>root;
	for(int i=0;i<edge;i++){
		int u,v;
		cin>>u>>v;
		Adj[u].push_back(v);
		Adj[v].push_back(u);
	}

	bfs(Adj,root);
return 0;
}
/*
1 2
1 5
5 3
5 8
8 7
3 7
8 9
9 6
3 6
3 4
adj list:
1 ->2 5
2 ->
3 ->7 6 4
4 ->
5 ->3 8
6 ->
7 ->
8 ->7 9
9 ->6
0-->5-->8-->9-->6-->7-->3-->4-->2-->

*/


















