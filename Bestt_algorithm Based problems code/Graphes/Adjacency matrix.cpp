//for undirected
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t_node,node1,node2,edge;
     int Adjmat[100][100]={0};
     cin>>t_node;
     //>>edge;
     while(cin>>node1>>node2){
     //for(int i=0;i<edge;i++){
               //cin>>node1>>node2;
          Adjmat[node1][node2]=1;
     }
     for(int i=0;i<t_node;i++){
          for(int j=0;j<t_node;j++){
               printf("%d ",Adjmat[i][j]);
          }
          printf("\n");
     }
     return 0;
}

n=6  e=12
1 2
1 3
2 1
2 4
3 1
3 4
4 2
4 3
4 5
5 4
5 6
6 5
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t_node,node1,node2;
     int Adjmat[100][100]={0};
     cin>>t_node;
     while(cin>>node1>>node2){
          Adjmat[node1][node2]=1;
     }
     for(int i=1;i<=t_node;i++){
          for(int j=1;j<=t_node;j++){
               printf("%d ",Adjmat[i][j]);
          }
          printf("\n");
     }
     return 0;
}
/*
5
1 2
1 3
1 4
2 3
3 2
4 4
5 2
*/
/*
//for directed weted graph
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t_node,node1,node2,wet;
     int Adjmat[100][100]={0};
     cin>>t_node;
     while(cin>>node1>>node2>>wet){
          Adjmat[node1][node2]=wet;
     }
     for(int i=1;i<=t_node;i++){
          for(int j=1;j<=t_node;j++){
               printf("%d ",Adjmat[i][j]);
          }
          printf("\n");
     }
     return 0;
}

5
1 2 5
1 3 4
1 4 6
2 3 8
3 2 9
4 4 1
5 2 3
*/
