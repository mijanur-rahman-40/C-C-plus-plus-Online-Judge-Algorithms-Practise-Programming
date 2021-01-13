#include<bits/stdc++.h>
using namespace std;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
char ch[101][101];
int ro_co;
void BFS(int i,int j)
{
    queue<pair<int,int> >Q;
    Q.push(make_pair(i,j));
    while(!Q.empty())
    {
        int u= Q.front().first;
        int v= Q.front().second;
        Q.pop();
        for(int i=0; i<4; i++){
            int x = u + dx[i];
            int y = v + dy[i];
            if((x>0 && x<=ro_co) || (y>0 && y<=ro_co))
            {
                if(ch[x][y] == 'x' || ch[x][y ]== '@'){
                    ch[x][y] = 1;
                    Q.push(make_pair(x,y));
                }
            }
        }
    }
}
int main()
{
    int tst,j=1;
    scanf("%d",&tst);
    while(tst--){
        scanf("%d",&ro_co);
        for(int i=0; i<ro_co; i++){
            for(int j=0; j<ro_co; j++){
                cin>>ch[i][j];
            }
        }
        int coun = 0;
        for(int i=0; i<ro_co; i++){
            for(int j=0; j<ro_co; j++){
                    if(ch[i][j] == 'x'){
                    coun++;
                    BFS(i,j);
                    }
            }
        }
   cout<<"Case "<<j++<<": "<<coun<<endl;
    }
}
