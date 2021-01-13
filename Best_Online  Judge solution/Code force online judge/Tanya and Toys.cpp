#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        int j;
        scanf("%d",&j);
        mp[j]++;
    }
    vector<int>vec;
    int temp,flag = 0;
    temp = m;
    for(int i=1; i<=temp; i++){
        if(!mp.count(i) && m>0){
               flag = 1;
            m = m - i;
            if(m>=0 || m>=i){
            vec.push_back(i);
            }
            else
                break;
        }
    }
    if(flag == 0){
        cout<<"0"<<endl;
        return 0;
    }
    cout<<vec.size()<<endl<<vec[0];
    for(int i=1; i<vec.size(); i++){
        cout<<" "<<vec[i];
    }
}
