
//for undirected graph
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tnode,tedge,node1,node2;
     cin>>tnode>>tedge;
     vector< list<int> >adjlist(tnode);
     vector< list<int> >:: iterator it;
    // while(cin>>node1>>node2)
    for(int i=0;i<tedge;i++)
          {
          cin>>node1>>node2;
          adjlist[node1].push_back(node2);
     }
     int j=0;
    for(it=adjlist.begin();it!=adjlist.end();it++)
     {
        cout<<j<<" ->";
        list<int>li=*it;
        list<int>::iterator iter;
        for(iter=li.begin();iter!=li.end();iter++)
        {
          cout<<*iter<<" ";
        }
        cout<<endl;
        j++;
    }
}

5
0 1
0 4
1 0
1 2
1 3
1 4
2 1
2 3
3 1
3 2
3 4
4 0
4 1
4 3


0 1
0 4
4 2
4 7
8 5
2 5
7 8
7 6
2 6
2 3
*/

//for directed graph

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tnode,tedge,node1,node2;
     cin>>tnode>>tedge;
     vector< list<int> >adjlist(tnode+1);
     vector< list<int> >:: iterator it;
    // while(cin>>node1>>node2)
    for(int i=0;i<tedge;i++)
          {
          cin>>node1>>node2;
          adjlist[node1].push_back(node2);
     }
     int j=0;
    for(it=adjlist.begin();it!=adjlist.end();it++)
     {
        cout<<j<<" ->";
        list<int>li=*it;
        list<int>::iterator iter;
        for(iter=li.begin();iter!=li.end();iter++)
        {
          cout<<*iter<<" ";
        }
        cout<<endl;
        j++;
    }
}

/*
n=6 e=7
6 7
0 1
0 4
1 4
1 2
2 3
3 1
4 3

*/


//for directed weighted graph
/*
#include<bits/stdc++.h>
using namespace std;
     class edge
     {
     private:
          int nodeid,weight;
          public:
          edge(int id,int wet)
          {
               nodeid=id;
               weight=wet;
          }
          int getnodeid()
          {
               return nodeid;
          }
          int getweight()
          {
               return weight;
          }
     };
     int main()
     {
         int tnode,tedge,node1,node2,wet;
         cin>>tnode;//>>tedge;
         vector< list<edge> >adjlist(tnode);
       vector<list<edge> >::iterator it;
     while(cin>>node1>>node2>>wet)
    //for(int i=0;i<tedge;i++)
          {
          //cin>>node1>>node2>>wet;
          adjlist[node1-1].push_back(edge(node2,wet));
          }
     int j=1;
    for(it=adjlist.begin();it!=adjlist.end();it++)
     {
        cout<<"list of Adj for node"<<"("<<j<<")"<<" ->";
        list<edge>li=*it;
        list<edge>::iterator iter;
        for(iter=li.begin();iter!=li.end();iter++)
        {
          cout<<"["<<(*iter).getnodeid()<<","<<(*iter).getweight()<<"]";
        }
        cout<<endl;
        j++;
    }
    return 0;
     }
*/
/*
node=5 edge=14
5 14
1 2 2
1 4 5
2 1 2
2 3 14
2 4 5
2 5 4
3 2 14
3 5 34
4 1 5
4 2 5
4 5 58
5 2 4
5 3 34
5 4 58

list of Adj for node(1) ->[2,2][4,5]
list of Adj for node(2) ->[1,2][3,14][4,5][5,4]
list of Adj for node(3) ->[2,14][5,34]
list of Adj for node(4) ->[1,5][2,5][5,58]
list of Adj for node(5) ->[2,4][3,34][4,58]
*/
/*

#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
int main()
{
    int ve, ed,v1,v2,wet;
    printf("Vertex and Edges:\n");
    scanf("%d%d",&ve,&ed);
    vector< list< pair<int, int> > >adjL(ve+1);
    printf("v1 v2 wet:\n");
    for(int i=1;i<=ed;++i) {
        scanf("%d%d%d",&v1,&v2,&wet);
        adjL[v1].push_back(make_pair(v2,wet));
    }
   list< pair<int, int> >::iterator itr;
      for(int i=1;i<adjL.size();++i) {
          printf("adjL(%d)->",i);
         for(itr=adjL[i].begin();itr!=adjL[i].end();itr++){
            printf("[%d,%d] ",(*itr).first,(*itr).second);
        }
        printf("\n");
  }
    return 0;
}


 // Adjacency List is a vector of list.
    // Where each element is a pair<int, int>
    // pair.first -> the edge's destination
    // pair.second -> edge's weight

*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int>edges[MAX];
vector<int>cost[MAX];
int main()
{
int node,edge;
printf("node: edge:\n");
  scanf("%d%d",&node,&edge);
    for(int i=1;i<=edge;i++)
  {
    int x,y,w;
     scanf("%d%d%d",&x,&y,&w);
   edges[x].push_back(y);
    //edges[y].push_back(x);  for bidirectional graph
       cost[x].push_back(w);
}
    for(int j=1;j<=node;j++){
          printf("list of Adj for node (%d):",j);
      int size=edges[j].size();
    for(int i=0;i<size;i++){
        printf("[%d,%d] ",edges[j][i],cost[j][i]);
   }
    printf("\n");
}
return 0;
}


/*
list of Adj for node (1):[2,5] [4,8]
list of Adj for node (2):
list of Adj for node (3):[2,6] [4,7]
list of Adj for node (4):

1 2 5
3 2 6
1 4 8
3 4 7
*/





