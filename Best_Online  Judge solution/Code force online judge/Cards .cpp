
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>pai[101];
    int sum;
    scanf("%d",&sum);
    for(int i=0; i<sum; i++){
            int j;
    scanf("%d",&j);
        pai[i].first = j;
        pai[i].second = i+1;
    }
    sort(pai,pai+sum);
    int i,j;
     for(i=0,j=sum-1; i<sum/2; j--,i++){
            cout<<pai[i].second<<" "<<pai[j].second<<endl;
     }
}
