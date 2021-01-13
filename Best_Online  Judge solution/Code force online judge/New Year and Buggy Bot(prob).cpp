#include <bits/stdc++.h>

using namespace std;

const int maxn=1e2+10;

int N,M,K;
int arr[maxn];
char str[maxn][maxn];
char mov[maxn];
int idx[maxn];
int dir[4][2]={0,1,1,0,-1,0,0,-1};
bool bfs(int x,int y){
  for(int i=1;i<=K;i++){
    x+=dir[idx[mov[i]]][0];
    y+=dir[idx[mov[i]]][1];
    if(x<1||x>N||y<1||y>M)return 0;
    if(str[x][y]=='#')return 0;
    if(str[x][y]=='E')return 1;
  }
  return 0;
}

int main(){
  scanf("%d%d",&N,&M);
  for(int i=1;i<=3;i++)idx[i]=i;
  int sx=0,sy=0;
  for(int i=1;i<=N;i++){
    scanf("%s",str[i]+1);
    for(int j=1;j<=M;j++){
      if(str[i][j]=='S'){
        sx=i;sy=j;
      }
    }
  }
  scanf("%s",mov+1);
  K=(int)strlen(mov+1);
  for(int i=1;i<=K;i++){
    mov[i]-='0';
  }
  int ans=0;
  do{
    ans+=bfs(sx,sy);
  }while(next_permutation(idx,idx+4));
  printf("%d\n",ans);
}
