#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[6]={3,6,1,2,5};
    sort(num,num+5);
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    cout<<upper_bound(num,num+5,3)-num<<endl;
        cout<<upper_bound(num,num+5,4)-num<<endl;
    return 0;

}
