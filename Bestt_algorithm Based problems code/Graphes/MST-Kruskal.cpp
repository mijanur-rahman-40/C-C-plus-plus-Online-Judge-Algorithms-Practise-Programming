#include<iostream>
#include<queue>
#include<vector>
#define sz 200005
using namespace std;
int par[sz];
priority_queue< pair<int, pair<int,int> > ,vector< pair<int, pair<int,int> > >,greater< pair<int,pair<int,int> > > >pq;

int find_set(int node)
{
    if(par[node] == node)
        return node;
    return par[node] = find_set(par[node]);
}
int kruskal()
{
    vector < pair<int, pair<int,int> > > ans;
    int c, u, v,tot=0,x,y;
    while(!pq.empty())
    {
        c = pq.top().first;
        u = pq.top().second.first;
        v = pq.top().second.second;
        x = find_set(u);
        y = find_set(v);
        if(x!=y)
        {
            ans.push_back({c, {u,v} });
            par[x] = y;
            tot+=c;
        }
        pq.pop();
    }
    for (int i = 0; i<ans.size(); i++)
    {
        cout<<i<<":"<<ans[i].first<<" -> ("<<ans[i].second.first << "," <<ans[i].second.second << ")"<<endl;
    }
    return tot;
}

int main()
{
    int n,m,x,y,z;
    cin>>n>>m;
    for (int i = 0; i<=n; i++)
        par[i]=i;
	for (int i = 0; i<m; i++)
    {
        cin>>x>>y>>z;
        pq.push({z,{x,y}});
    }
    cout<<"Total Cost of MST = "<<kruskal()<<"\n";
    return 0;
}

/* Sample Input -
6 8
1 2 1
1 3 1
1 5 1
2 4 3
2 5 2
3 6 2
4 6 3
5 6 5


12 17
0 1 2
0 4 3
1 2 3
1 5 1
2 3 1
2 6 2
3 7 5
4 5 4
4 8 4
5 3 6
5 9 2
6 10 4
6 7 3
7 11 3
8 9 3
9 10 3
10 11 1
*/

