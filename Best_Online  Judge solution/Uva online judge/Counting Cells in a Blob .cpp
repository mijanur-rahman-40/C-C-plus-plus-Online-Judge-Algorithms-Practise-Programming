
#include<bits/stdc++.h>
using namespace std;
int vis[50][50];
char arr[50][50];
int row,col=0,u,v;;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
int bfs(int i,int j,int row,int col)
{
    queue<pair<int,int> >Q;
    int x,y;int coun1 = 1;
    Q.push(make_pair(i,j));
    while(!Q.empty())
    {
        int u=Q.front().first;
        int v=Q.front().second;
        Q.pop();
        for(int i=0;i<8;i++){
            x=u+dx[i];
            y=v+dy[i];
             if(x>=0 && x<row && y>=0 && y<col){
                if(!vis[x][y]){
                    vis[x][y]=1;
                    if(arr[x][y] =='1'){
                        coun1++;
                        Q.push(make_pair(x,y));
                    }
                }
            }
        }
    }
    return coun1;
}

int main()
{
    int tst;
    scanf("%d",&tst);
    getchar();
    getchar();
    bool flag = false;
    while(tst--){
        string str, temp = "";
    int row = 0,col;
    if(flag) printf("\n"); flag = true;
    while(getline(cin,str)){
        if(str.size() == 0){
            break;
        }
        else{
            temp +=str;
        col = str.size();
        row++;
        }
    }
    int siz=0;
    while(siz != temp.size()){
      for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            arr[i][j] = temp[siz];
            vis[i][j] = 0;
            siz++;
        }
      }
    }
    int ans = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(!vis[i][j]){
                    vis[i][j] = 1;
                    if(arr[i][j] =='1'){
                        ans = max(ans,bfs(i,j,row,col));
                    }
                }
            }
        }
    printf("%d\n",ans);
       }
    return 0;
}





/*

11000000
01101100
00101000
10101100
00111000
01001000
16


1


11000
01100
00101
10001
01011
*/
