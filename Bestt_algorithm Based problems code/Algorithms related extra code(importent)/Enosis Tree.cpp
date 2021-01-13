#include <bits/stdc++.h>

using namespace std;

struct obj{
    int id;
    int parent_id;
    string name; // name of the object
    obj(){parent_id=-1;} // -1 means no parent
};
const int MAX = 105;
vector<int> tree[MAX];
vector<obj> objs;
vector<int> roots;
map<int,string>names;

void build_tree(){
    // objs will be given to you, you need to construct
    // the tree from it.
    for(int i=0; i<(int)objs.size(); i++){
        obj o = objs[i];
        names[o.id] = o.name; // this will be required when you want to print the name
        if(o.parent_id != -1){
            tree[ o.parent_id ].push_back(o.id);
        } else roots.push_back(o.id);
    }
    //tree construction done.
}

void dfs(int u, int p){
    // here you will be doing the GUI operation, don't panic.
    // to get the name of the object containing id 'u' you
    // can use the map "names". To get the name of the object
    // write the following line.
    // string name = names[u];
    for(int i=0; i<(int)tree[u].size(); i++){
        int v = tree[u][i];
        if(v != p)
            dfs(v, u);
    }
    // this function ends here.
}

int main(){
    build_tree();
    for(int i=0; i<(int)roots.size(); i++){
        dfs(roots[i],-1);
    }
    //done
    return 0;
}
