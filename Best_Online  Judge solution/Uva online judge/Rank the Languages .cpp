

#include<bits/stdc++.h>
using namespace std;
char arr[300][300];
int color[300][300];
int dx[] = {-1,0,0,1};
int dy[] = {0,1,-1,0};
int row,col; char ch;
map<char,int>mp;
map<char,int>::iterator it;
bool sortbysec(const pair<char,int> &a,
              const pair<char,int> &b)
{
    return a.second > b.second;
}
void BFS(int i,int j)
{
    int x,y;
    ch = arr[i][j];
    mp[arr[i][j]]++;
    queue<pair<int,int> >Q;
    Q.push(make_pair(i,j));
    color[i][j] = 1;
    while(!Q.empty())
    {
       int  u = Q.front().first;
       int  v = Q.front().second;
        Q.pop();
        for(int i=0; i<4; i++){
            x = u + dx[i];
            y = v + dy[i];
            if((x>=0 && x<row ) && (y>=0 && y<col)){
                if(color[x][y]==0)
                {
                     if(arr[x][y] == ch){
                    color[x][y] = 1;
                  Q.push(make_pair(x,y));
                     }
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
        scanf("%d%d",&row,&col);
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>arr[i][j];
            }
        }
       memset(color,0,sizeof(color));
         for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                    if(!color[i][j]){
                    color[i][j] = 1;
                        BFS(i,j);
                    }
             }
         }
         int i=0;
          pair<char,int>pai[mp.size()];

         for(it = mp.begin(); it!= mp.end(); it++){
          pai[i].first  = it->first;
          pai[i].second =  it->second;
          i++;
         }
         cout<<"World #"<<j++<<endl;
         sort(pai,pai+mp.size(),sortbysec);
         for(int i=0; i<mp.size(); i++){
            cout<<pai[i].first<<": "<<pai[i].second<<endl;
         }
         mp.clear();
    }
    return 0;
}
