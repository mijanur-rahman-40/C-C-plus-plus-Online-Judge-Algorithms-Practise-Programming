#include<stdio.h>
#define MAX 200
int n,adj[MAX][MAX];
int front = -1,rear = -1,queue[MAX];
void main()
{
 int i,j = 0,k;
 int topsort[MAX],indeg[MAX];
 create_graph();
 printf(“The adjacency matrix is:n”);
 display();
 for(i=1;i<+n;i++)
 {
  indeg[i]=indegree(i);
  if(indeg[i]==0)
   insert_queue(i);
 }
 while(front<=rear)
 {
  k=delete_queue();
  topsort[j++]=k;
  for(i=1;i<=n;i++)
  {
   if(adj[k][i]==1)
   {
    adj[k][i]=0;
    indeg[i]=indeg[i]-1;
    if(indeg[i]==0)
     insert_queue(i);
   }
  }
 }
 printf("Nodes after topological sorting are:n");
 for(i=0;i<=n;i++)
  printf("%d",topsort[i]);
 printf("n");
}
create_graph()
{
 int i,max_edges,origin,destin;
 printf("n Enter number of vertices:");
 scamf("%d",&n);
 max_edges = n * (n - 1);
 for(i = 1;i <= max_edges;i++)
 {
  printf("n Enter edge %d (00 to quit):",i);
  scanf("%d%d",&origin,&destin);
  if((origin == 0) && (destin == 0))
  {
   printf("Invalid edge!!n");
   i–;
  }
  else
   adj[origin][destin] = 1;
 }return;
}
display()
{
 int i,j;
 for(i = 0;i <= n;i++)
 {
  for(j = 1;jrear)
  {
   printf(“Queue Underflow”);
   return;
  }
  else
  {
   del_item = queue[front];
   front = front + 1;
   return del_item;
  }
 }
 int indegree(int node)
 {
  int i,in_deg = 0;
  for(i = 1;i <= n;i++)
   if(adj[i][node] == 1)
    in_deg++;
  returnin_deg;
 }





 Topological Sorting
Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge uv, vertex u comes before v in the ordering. Topological Sorting for a graph is not possible if the graph is not a DAG.
For example, a topological sorting of the following graph is “5 4 2 3 1 0”. There can be more than one topological sorting for a graph. For example, another topological sorting of the following graph is “4 5 2 3 1 0”. The first vertex in topological sorting is always a vertex with in-degree as 0 (a vertex with no in-coming edges).

graph

Topological Sorting vs Depth First Traversal (DFS):
In DFS, we print a vertex and then recursively call DFS for its adjacent vertices. In topological sorting, we need to print a vertex before its adjacent vertices. For example, in the given graph, the vertex ‘5’ should be printed before vertex ‘0’, but unlike DFS, the vertex ‘4’ should also be printed before vertex ‘0’. So Topological sorting is different from DFS. For example, a DFS of the shown graph is “5 2 3 1 0 4”, but it is not a topological sorting

Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.

Algorithm to find Topological Sorting:
We recommend to first see implementation of DFS here. We can modify DFS to find Topological Sorting of a graph. In DFS, we start from a vertex, we first print it and then recursively call DFS for its adjacent vertices. In topological sorting, we use a temporary stack. We don’t print the vertex immediately, we first recursively call topological sorting for all its adjacent vertices, then push it to a stack. Finally, print contents of stack. Note that a vertex is pushed to stack only when all of its adjacent vertices (and their adjacent vertices and so on) are already in stack.

Following are C++ and Java implementations of topological sorting. Please see the code for Depth First Traversal for a disconnected Graph and note the differences between the second code given there and the below code.

C++JavaPython
// A C++ program to print topological sorting of a DAG
#include<iostream>
#include <list>
#include <stack>
using namespace std;

// Class to represent a graph
class Graph
{
    int V;    // No. of vertices'

    // Pointer to an array containing adjacency listsList
    list<int> *adj;

    // A function used by topologicalSort
    void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);
public:
    Graph(int V);   // Constructor

     // function to add an edge to graph
    void addEdge(int v, int w);

    // prints a Topological Sort of the complete graph
    void topologicalSort();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

// A recursive function used by topologicalSort
void Graph::topologicalSortUtil(int v, bool visited[],
                                stack<int> &Stack)
{
    // Mark the current node as visited.
    visited[v] = true;

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            topologicalSortUtil(*i, visited, Stack);

    // Push current vertex to stack which stores result
    Stack.push(v);
}

// The function to do Topological Sort. It uses recursive
// topologicalSortUtil()
void Graph::topologicalSort()
{
    stack<int> Stack;

    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to store Topological
    // Sort starting from all vertices one by one
    for (int i = 0; i < V; i++)
      if (visited[i] == false)
        topologicalSortUtil(i, visited, Stack);

    // Print contents of stack
    while (Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

// Driver program to test above functions
int main()
{
    // Create a graph given in the above diagram
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout << "Following is a Topological Sort of the given graph n";
    g.topologicalSort();

    return 0;
}
