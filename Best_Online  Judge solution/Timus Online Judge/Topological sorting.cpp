
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> >subjects;
vector<int>plan(1005);
int flag = 0;
int main()
{
  int m,n;
  cin>>n>>m;
  for(int i=0; i<m; i++){
    int x,y;
    cin>>x>>y;
    subjects.push_back({x,y});
  }
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    plan[x] = i;
  }
  for(int i=0; i<m; i++){
    if(plan[subjects[i][0]]>plan[subjects[i][1]]){
        flag = 1;
        break;
    }
  }
  if(flag) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  return 0;
}
/*
5 6
1 3
1 4
3 5
5 2
4 2
1 2
1 2 4 5 3
*/
