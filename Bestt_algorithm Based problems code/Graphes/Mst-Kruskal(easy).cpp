/*
#include<bits/stdc++.h>
using namespace std;
#define MX 100

struct edgeStructure
{
    int u;
    int v;
    int w;
};

bool operator < (edgeStructure lhs, edgeStructure rhs)
{
    return lhs.w < rhs.w;
}

bool cmp(const edgeStructure &lhs, const edgeStructure &rhs)
{
    if(lhs.u != rhs.u)
        return lhs.u < rhs.u;
    else
        return lhs.w < rhs.w;
}


int parent[MX];
int rankParent[MX];


vector<edgeStructure> edgeVector;

void initializeSet(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        parent[i] = i;
        rankParent[i] = 0;
    }
}


int findParent(int x)
{
    if(x != parent[x])
        return parent[x] = findParent(parent[x]);
    else
        return x;
}


void unionSet(int x, int y)
{
    int px = findParent(x);
    int py = findParent(y);
    if(px == py) return;

    ///cout << px << " " << py << endl;
    if(rankParent[px] < rankParent[py])
        parent[px] = py;
    else if(rankParent[px] > rankParent[py])
        parent[py] = px;
    else
    {
        parent[py] = px;
        rankParent[px]++;
    }


}


int kruskal(int n)
{
    initializeSet(n);

    sort(edgeVector.begin(), edgeVector.end());

    int sz = edgeVector.size();

    int ans = 0;
    for(int i = 0 ; i < sz ; i++)
    {
        if(findParent(edgeVector[i].u) != findParent(edgeVector[i].v))
        {
            //union
            unionSet(parent[edgeVector[i].u] , parent[edgeVector[i].v]);
            //cout << edgeVector[i].u << " " << edgeVector[i].v << endl;
            ans+=edgeVector[i].w;
        }
    }
    //cout << endl;
    return ans;
}


int main()
{
    freopen("kruskal.txt", "r", stdin);
    int vertex, edge;
    cin >> vertex >> edge;

    for(int i = 0 ; i < edge ; i++)
    {
        edgeStructure e;
        cin >> e.u >> e.v >> e.w;
        edgeVector.push_back(e);
    }
    //cout << "MST" << endl;
    cout << "MST Cost " << kruskal(vertex) << endl;
}




#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
void main()
{
 clrscr();
 printf("nntImplementation of Kruskal's algorithmnn");
 printf("nEnter the no. of verticesn");
 scanf("%d",&n);
 printf("nEnter the cost adjacency matrixn");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
    cost[i][j]=999;
  }
 }
 printf("nThe edges of Minimum Cost Spanning Tree arenn");
 while(ne<n)
 {
  for(i=1,min=999;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(cost[i][j]<min)
    {
     min=cost[i][j];
     a=u=i;
     b=v=j;
    }
   }
  }
  u=find(u);
  v=find(v);
  if(uni(u,v))
  {
   printf("n%d edge (%d,%d) =%dn",ne++,a,b,min);
   mincost +=min;
  }
  cost[a][b]=cost[b][a]=999;
 }
 printf("ntMinimum cost = %dn",mincost);
 getch();
}
int find(int i)
{
 while(parent[i])
  i=parent[i];
 return i;
}
int uni(int i,int j)
{
 if(i!=j)
 {
  parent[j]=i;
  return 1;
 }
 return 0;
}

*/

// problem in code

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
const int MAX = 1e4 + 5;
int id[MAX], nodes, edges;
pair <long long, pair<int, int> > p[MAX];

void initialize()
{
    for(int i = 0;i < MAX;++i)
        id[i] = i;
}

int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

/*

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}
void hodaie(int x)
{

}


*/

long long kruskal(pair<long long, pair<int, int> > p[])
{
    int x, y;
    long long cost, minimumCost = 0;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost += cost;
        }
    }
    return minimumCost;
}

int main()
{
    int x, y;
    long long weight, minimumCost;
    initialize();
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    // Sort the edges in the ascending order
    sort(p, p + edges);
    minimumCost = kruskal(p);
    cout << minimumCost << endl;
    return 0;
}

