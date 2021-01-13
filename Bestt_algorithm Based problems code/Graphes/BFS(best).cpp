
/*
#include<bits/stdc++.h>
using namespace std;
//#define MAX_SZ 100
const int MAX_SZ=100;
//#define Q_SZ 1000
const int Q_SZ=1000;
int mat[MAX_SZ][MAX_SZ]={0}, color[MAX_SZ]={0};// Q[Q_SZ], frnt = -1, rear = -1;
queue<int>Q;
/*void enqueue(int item)
{
     rear++;
    Q[rear] = item;
}
int dequeue()
{ int p;
     frnt++;
     p=Q[frnt];
    return p;
}
bool isEmpty()
{
    if(frnt == rear)
        return true;
    return false;
}

void bfs(int v, int e, int s)
{
    int current, i;
    //enqueue(s);
    Q.push(s);
    color[s] = 1;
    while(!Q.empty())
    {
       // current = dequeue();
       current=Q.front();
       Q.pop();
        for(i=0;i<v;i++)
        {
            if(mat[current][i] == 1 && color[i] == 0)
            {
                Q.push(i);
                //enqueue(i);
                color[i] = 1;
            }
        }
        printf("%d ", current);
        //color[current] = 2;
    }

  0 1 2 3 4 5
0 0 1 0 1 0 0
1 1 0 1 1 0 0
2 0 1 0 0 0 1
3 1 1 0 0 0 1
4 0 0 0 0 0 1
5 0 0 1 1 1 0

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
        for(j=0;j<v;j++)
            mat[i][j] = 0;
    }
    for(i=0;i<v;i++){
        color[i] = 0;
    }

    for(i=0;i<e;i++)
    {
        scanf("%d %d", &a, &b);
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    printf("Starting node: ");
    scanf("%d", &start);
    bfs(v, e, start);
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
1 0 2 3 5 4


0 1 0 1 0 0
1 0 1 1 0 0
0 1 0 0 0 1
1 1 0 0 0 1
0 0 0 0 0 1
0 0 1 1 1 0
*/



/*
#include <cstdio>
#include <vector>
#include <list>
#include <utility>

using namespace std;

void breadthFirstSearch(vector< list< int > > adjacencyList, int parent[], int level[])
{
    list<int>::iterator itr;
    int i, par, lev;
    bool flag = true;
    //'lev' represents the level to be assigned
    //'par' represents the parent to be assigned
    //'flag' indicates if graph is unexplored or not

    lev = 0;
    level[1] = lev;
    We start from node 1
     * So, Node 1 is at level 0
     * All immediate neighbours are at
     * level 1 and so on.


    while (flag) {
        flag = false;
        for (i = 1; i < adjacencyList.size(); ++i) {
            if (level[i] == lev) {
                flag = true;
                itr = adjacencyList[i].begin();
                par = i;

                while (itr != adjacencyList[i].end()) {
                    if (level[*itr] != -1) {
                        ++itr;
                        continue;
                    }

                    level[*itr] = lev + 1;
                    parent[*itr] = par;
                    ++itr;
                }
            }
        }

        ++lev;
    }
}

int main()
{
    int vertices, edges, v1, v2, weight;

    printf("Enter the Number of Vertices -\n");
    scanf("%d", &vertices);

    printf("Enter the Number of Edges -\n");
    scanf("%d", &edges);

    // Adjacency List is a vector of lists.
    vector< list<int> > adjacencyList(vertices + 1);

    printf("Enter the Edges V1 -> V2\n");

    for (int i = 1; i <= edges; ++i) {
        scanf("%d%d", &v1, &v2);

        // Adding Edges
        adjacencyList[v1].push_back(v2);
        adjacencyList[v2].push_back(v1);
    }

    printf("\nThe Adjacency List-\n");
    // Printing Adjacency List
    for (int i = 1; i < adjacencyList.size(); ++i) {
        printf("adjacencyList[%d] ", i);

        list<int>::iterator itr = adjacencyList[i].begin();

        while (itr != adjacencyList[i].end()) {
            printf(" -> %d", *itr);
            ++itr;
        }
        printf("\n");
    }

    int parent[vertices + 1];
    //Each element of Parent Array holds the Node value of its parent
    int level[vertices + 1];
    //Each element of Level Array holds the Level value of that node

    for (int i = 0; i <= vertices; ++i) {
        //Initialising our arrays
        parent[i] = 0;
        level[i] = -1;
    }

    breadthFirstSearch(adjacencyList, parent, level);

    //Level Array
    printf("\nLevel and Parent Arrays -\n");
    for (int i = 1; i <= vertices; ++i) {
        printf("Level of Node %d is %d, Parent is %d\n", i, level[i], parent[i]);
    }

    return 0;
}



*/
#include<bits/stdc++.h>
using namespace std;
//vector< vector<int> > Adj(1000);
vector<int>Adj[1000];
int visited[100]={0};
int parent[100];
//void bfs(vector< vector<int> > Adj,int root)
void bfs(int root)
{
	queue<int> q;
	q.push(root);
	visited[root] = 1;
	while(!q.empty()){
		int u=q.front();
		cout<<u<<"-->";
		q.pop();
		for(int i=0;i<Adj[u].size();i++){
			if(!visited[Adj[u][i]])
			{
				q.push(Adj[u][i]);
				visited[Adj[u][i]]=1;
				parent[Adj[u][i]]=u;
			}
		}
	}
}
/*
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
		//Adj[v].push_back(u);
	}

	//bfs(Adj,root);
	bfs(root);
return 0;
}


/*

#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
int edges,a,b;
vector<int>nodes[1000];
cout<<"Enter the no of edges"<<endl;
	cin>>edges;
	for(int i=0;i<edges;i++){
		cin>>a>>b;
		nodes[a].push_back(b);
		nodes[b].push_back(a);
	}

	cout<<endl;
	//Adj list representation
for(int i=0;i<1000;i++)
{
	if(!nodes[i].empty())
	{	cout<<"[ "<<i<<" ]"<<"-->";
		for(vector<int>::iterator it=nodes[i].begin();
				it!=nodes[i].end();++it)
		{
		cout<<*it<<"-->";
		}
		cout<<"NULL"<<endl;
	}
}

queue<int> que;
//initially que is empty
bool visited[1000];
// mark all the vertices as not visited
for(int i=0;i<1000;i++)
visited[i]=false;

int start;
cout<<"\nEnter the starting node"<<endl;
cin>>start;

//insert the starting node into the queue
que.push(start);
//mark the starting node as visited
visited[start]=true;


	cout<<"\nBFS Traversal\n";

while(!que.empty())
{
		//Dequeue a vertex from que and print it
		int front = que.front();
		cout<<front<<" ";
		que.pop();
// get all adjacent vertices of the dequeued vertex s
     // If an adjacent vertex has not been visited,
       //then mark it as visited
        // and enqueue it
	for(vector<int>::iterator it=nodes[front].begin();
		it!=nodes[front].end();++it)
		{
			if(visited[*it]==false)
			{
				visited[*it]=true;
				que.push(*it);
			}
		}
}

	cout<<endl;
	return 0;
}
*/



