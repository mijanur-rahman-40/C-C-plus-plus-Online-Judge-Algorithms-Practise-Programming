/*
#include<bits/stdc++.h>
using namespace std;
bool is_prime(long long num){
    if(num == 2) return true;
    if(num%2 == 0) return false;
    for(int i=3; i*i<=num; i+=2){
        if(num%i == 0) return false;
    }
    return true;
}
int main()
{
    long long number;
    while(scanf("%lld",&number)==1){
    if(is_prime(number)){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    }
}
*/
//prime number
/*
#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
bool flag[maxn];
vector<int >prime;
void sieve()
{
    flag[1]=1;
    prime.push_back(2);
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3; i<=maxn; i+=2){
        if(flag[i]==0){
            prime.push_back(i);
        }
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}

int main()
{
   sieve();
   cout<<"Number  of primes "<<prime.size()<<endl;
   for(int i=0; i<300; i++){
    cout<<" "<<i<<" "<<prime[i]<<endl;
   }
   return 0;
}
*/

// Binary search
/*
#include<bits/stdc++.h>
using namespace std;
int b_search(int arr[],int l,int r,int sr)
{
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == sr){
            return mid;
        }
        if(arr[mid]<sr){
            l =mid +1;
        }
        else
            r = mid-1;
    }
    return 0;
}
int main()
{
  int arr[100];
  int num,sear;
  cin>>num;
  for(int i=0; i<num; i++){
    cin>>arr[i];
  }
  cin>>sear;
  int index = b_search(arr,0,num-1,sear);
  if(index == 0){
    cout<<"Number did not found"<<endl;
  }
  else
    cout<<"Number "<<sear<<" in "<<index+1<<" position"<<endl;
}

*/
/*
//DFS
#include<bits/stdc++.h>
using namespace std;
vector<int>dfs[100];
int node,edge;
int vis[100] = {0};
void DFS(int start){
    vis[start] = 1;
    stack<int>st;
    st.push(start);
    while(!st.empty())
    {
        int u = st.top();
        st.pop();
        cout<<u<<"-->";
        for(int i=0; i<dfs[u].size(); i++){
            int v = dfs[u][i];
            if(!vis[v]){
                st.push(v);
                vis[v] = 1;
            }
        }
    }
}
int main()
{
    cin>>node>>edge;
    cout<<"Starting node : ";
    int start;
    cin>>start;
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        dfs[u].push_back(v);
        dfs[v].push_back(u);
    }
    DFS(start);
    return 0;
}
*/

/*
node = 6, edge = 7, start = 0
0 1
0 3
1 3
1 2
3 5
2 5
5 4
*/
//BFS
/*
#include<bits/stdc++.h>
using namespace std;
vector<int>bfs[100];
int node,edge;
int vis[100] = {0};
void BFS(int start){
    vis[start] = 1;
    queue<int>st;
    st.push(start);
    while(!st.empty())
    {
        int u = st.front();
        st.pop();
        cout<<u<<"-->";
        for(int i=0; i<bfs[u].size(); i++){
            int v = bfs[u][i];
            if(!vis[v]){
                st.push(v);
                vis[v] = 1;
            }
        }
    }
}
int main()
{
    cin>>node>>edge;
    cout<<"Starting node : ";
    int start;
    cin>>start;
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        bfs[u].push_back(v);
        bfs[v].push_back(u);
    }
    BFS(start);
    return 0;
}

*/

//Dijkstra
/*
#include<bits/stdc++.h>
using namespace std;
const int Max = 500005;
vector<pair<int,int> >adj[Max];
bool vis[Max] = {false};
const int INF = INT_MAX;
int dis[Max];
void dijkstra_path(int start,int node)
{
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >Q;
    fill(dis, dis+node+1, INF);
    dis[start] =  0;
    Q.push(make_pair(dis[start],start));
    while(!Q.empty())
    {
       int u = Q.top().second;
       Q.pop();
       for(int i=0; i<adj[u].size(); i++)
       {
           int ver = adj[u][i].first;
           int wet = adj[u][i].second;
           if(!vis[ver] && dis[u] + wet < dis[ver])
           {
               dis[ver] = dis[u] + wet;
               Q.push(make_pair(dis[ver],ver));
           }
       }
    }
    for(int i=0; i<node; i++){
        cout<<dis[i]<<" ";
    }
}
int main()
{
    int node,edge;
    scanf("%d%d",&node,&edge);
    for(int i=0; i<edge; i++)
    {
        int u,v,wet;
        scanf("%d%d%d",&u,&v,&wet);
        adj[u].push_back(make_pair(v,wet));
        adj[v].push_back(make_pair(u,wet));
    }
    int start;
    cout<<"Starting node : ";
    cin>>start;
    dijkstra_path(start , node);
  return 0;
}
*/

#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;
int main(){
    int m,x,y,z,n;
    cin>>n>>m;
    int G[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            if(i == j)
                G[i][j] = 0;
            else
                G[i][j] = INF;
        }

    for(int i=0; i<m; i++){
        cin>>x>>y>>z;
        G[x][y]=z;
        G[y][x]=z;
    }
    for(int k=0; k<n; k++)  {
        for(int i=0; i<n; i++)  {
          for(int j=0; j<n; j++)  {
            G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
          }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
5 6

0 1 2
1 4 5
0 3 1
3 2 3
2 4 1
1 2 4
*/
