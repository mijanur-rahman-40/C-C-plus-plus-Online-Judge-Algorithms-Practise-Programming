#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,k=0; cin>>num;
    vector<int>vec;
    for(int i=1; i<=num; i++)
    {
        k=0;
        for(int j=1; j<=num; j++){
            int temp; cin>>temp;
            if(temp==1 || temp==3)
            {
                k=1;
            }
         }
    if(k==0)
    {
        vec.push_back(i);
    }
}
    cout<<vec.size()<<endl;
    for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";
}
cout<<endl;
}
