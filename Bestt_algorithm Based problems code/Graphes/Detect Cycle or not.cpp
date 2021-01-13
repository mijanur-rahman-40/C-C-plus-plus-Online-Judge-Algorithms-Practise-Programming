#include<bits/stdc++.h>
using namespace std;
int node;
vector<int>adj[100];
vector<char> color;
vector<int> parent;
int cycle_start, cycle_end;

bool dfs(int v) {
    color[v] = 1;
    for (int i=0; i<adj[v].size(); i++) {
        if (color[adj[v][i]] == 0) {
            parent[adj[v][i]] = v;
            if (dfs(adj[v][i])){
                return true;
            }
           }
        else if (color[adj[v][i]] == 1) {
            cycle_end = v;
            cycle_start =
            adj[v][i];
            return true;
        }
    }
    color[v] = 2;
    return false;
}

void find_cycle() {
    color.assign(node, 0);
    parent.assign(node, -1);
    cycle_start = -1;

    for (int v = 0; v < node; v++){
        if (dfs(v))
            break;
    }

    if (cycle_start == -1) {
        cout << "Acyclic" << endl;
    } else {
        vector<int> cycle;
        cycle.push_back(cycle_start);
        for (int v = cycle_end; v != cycle_start; v = parent[v])
            cycle.push_back(v);
        cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());

        cout << "Cycle found: ";
        for (int v : cycle)
            cout << v << " ";
        cout << endl;
    }
}
int main()
{
    int edge;
    scanf("%d%d",&node,&edge);
    for(int i=0; i<edge; i++){
     int u,v;
     scanf("%d%d",&u,&v);
       adj[u].push_back(v);
      }
    find_cycle();
    return 0;
}


/*
5 6
0 1
1 2
2 3
1 3
4 3
0 4
*/
