#include<bits/stdc++.h>
using namespace std;
int temp1[51],arr2[51];
int main()
{
    int num3;
    scanf("%d",&num3);

    for(int i=0; i<num3; i++){
        scanf("%d",&arr2[i]);
        temp1[arr2[i]] = 0;
    }
    vector<int>vec5;
     for(int i=num3-1; i>=0; i--){
          if(temp1[arr2[i]] == 0){
            temp1[arr2[i]] = 1;
            vec5.push_back(arr2[i]);
          }

     }
     cout<<vec5.size()<<endl;
     cout<<vec5[vec5.size()-1];
     for(int i=vec5.size()-2; i>=0; i--){
        cout<<" "<<vec5[i];
     }
     cout<<endl;
}
