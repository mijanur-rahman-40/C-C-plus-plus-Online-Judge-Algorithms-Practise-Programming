
#include<bits/stdc++.h>
using namespace std;
int Q[1000],frnt=-1,rear=-1,mat[100][100]={0};
int indeg[100]={0},visited[100]={0},n,e;
queue<int>q;


void Enqueue(int item)
{
    Q[++rear] = item;
}
int Dequeue()
{
    return Q[++frnt];
}
bool isEmpty()
{
    if(frnt == rear)
        return true;
    return false;
}
void TopologicalSort()
{
    int i, cnt, current;
    for(i=1;i<=n;i++){
        if(indeg[i] == 0)
            //Enqueue(i);
            q.push(i);
    }
    cnt = 0;
    while(!q.empty() && cnt < n){
        //current = Dequeue();
        current=q.front();
        visited[current] = 1;
        q.pop();
        for(i=1;i<=n;i++)
        {
            if(mat[current][i] == 1 && visited[i] == 0)
            {
                indeg[i]--;
                if(indeg[i] == 0)
                    //Enqueue(i);
                    q.push(i);
            }
        }
        printf("%d ", current);
        cnt++;
    }
}
int main()
{
    int i, j, a, b;
    scanf("%d %d", &n, &e);
    for(i=0;i<n;i++)
    {
        visited[i] = 0;
        indeg[i] = 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            mat[i][j] = 0;
    }

    for(i=1;i<=e;i++){
        scanf("%d %d", &a, &b);
        mat[a][b] = 1;
        indeg[b]++;
    }
    TopologicalSort();
    return 0;
}


/*
0 1 2
3 4 5
B E D F A C
1 4 3 5 0 2

    1 2 3 4 5 6

 1  0 0 0 0 0 0
 2  1 0 1 0 1 0
 3  0 0 0 0 0 0
 4  1 0 0 0 0 0
 5  0 0 0 1 0 1
 6  0 0 1 0 0 0



n=6 e=7

2 1
2 3
2 5
5 6
5 4
6 3
4 1
*/

/*
#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > Adj(1000);
int indeg[100]={0},visited[100]={0},node,edge,i;

queue<int>q;
void TopologicalSort(vector< vector<int> > Adj)
{
    int cnt, current;
    for(i=1;i<=node;i++){
        if(indeg[i] == 0)
            q.push(i);
    }
    cnt = 0;
    while(!q.empty() && cnt < node){
        current=q.front();
         Adj[current][i] == 1;
        visited[current] = 1;
        q.pop();
       for(i=0;i<Adj[current].size();i++){
            if(Adj[current][i] == 1 && visited[i] == 0)
            {
                indeg[i]--;
                if(indeg[i] == 0)
                    q.push(Adj[current][i]);
            }
       }
        printf("%d ", current);
        cnt++;
   }
    }

code a problem ase.
int main()
{
	cin>>node>>edge;
	for(int i=0;i<edge;i++){
		int u,v;
		cin>>u>>v;
		Adj[u].push_back(v);
		Adj[u][v]=1;
		indeg[v]++;
          printf("%d %d",indeg[i],Adj[u][v]);
	}
   // TopologicalSort(Adj);
    return 0;
}
*/



