#include<bits/stdc++.h>
using namespace std;
int main()
{
     pair<int,int>pai[55];
     int team,position;
     cin>>team>>position;
     for(int i=0;i<team;i++){
               cin>>pai[i].first>>pai[i].second;
               pai[i].first*=-1;
     }
     int coun=0;
     sort(pai,pai+team);
//     for(int i=0;i<team;i++){
//          cout<<pai[i].first<<" "<<pai[i].second<<endl;
//     }
     for(int i=0;i<team;i++){
          if(pai[i]==pai[position-1]){
               coun++;
          }
     }
     cout<<coun<<endl;
     return 0;
}
