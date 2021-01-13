#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    vector<int>vec;
    while(num>0)
    {
        if(num>=11){
            num = num - 11;
            vec.push_back(11);
        }
        else if(num>=10){
            num = num - 10;
            vec.push_back(10);
        }
        else if(num>=1){
            num = num - 1;
            vec.push_back(1);
        }
    }
    sort(vec.begin(),vec.end());
    cout<<vec[0];
    for(int i=1; i<vec.size(); i++){
        cout<<" "<<vec[i];
    }
    cout<<endl;
    return 0;
}
