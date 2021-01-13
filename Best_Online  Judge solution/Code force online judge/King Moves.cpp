
#include<bits/stdc++.h>
using namespace std;
int dx[]={1,1,1,0,-1,-1,-1,0};
int dy[]={-1,0,1,1,1,0,-1,-1};
int main()
{
    char ch[2];
    scanf("%s",ch);
    int a = ch[0]-97+1;
    int b = ch[1]-48;
    int coun = 0;
    for(int i=0; i<8; i++){
        int x = a + dx[i];
        int y = b + dy[i];
        if(( x>=1 && x<=8 ) && ( y>=1 && y<=8 )){
            coun++;
        }
    }
  cout<<coun<<endl;
}
