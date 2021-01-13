#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int i = 1; i<=num; i++){
        int j;
        cin>>j;
    if(j % 2 == 0){
        cout<<j-1;
    }
    else
        cout<<j;
        cout<<" ";
    }
    return 0;
}
