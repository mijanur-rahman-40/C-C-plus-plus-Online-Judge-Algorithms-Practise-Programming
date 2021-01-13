
t

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e,i,j,u,v,k=0;    //n: number of vertices, e: number of edge
    cin>>n>>e;
    vector< pair<int,int> > EdgeList[2*e];
    for(i=0;i<e;i++)
    {
        cin>>u>>v;  //(u,v) pair of vertices such that there is an edge between u and v.
        EdgeList[k].push_back(make_pair(u,v));  //Insert pair(u,v) at index k
        EdgeList[k+1].push_back(make_pair(v,u));    //Insert pair(v,u) at index k+1
        k+=2;

        /*caution: This is an unweighted and undirected graph representation.
        so if there is an edge between u & v then there is also an edge between v & u but this is not true incase of
        directed graph*/
    }
    //Display the content of EdgeList
    for(i=0;i<2*e;i++)
    {
        for(j=0;j<EdgeList[i].size();j++)
            cout<<"("<<EdgeList[i][j].first<<","<<EdgeList[i][j].second<<")";
        cout<<endl;
    }
}
