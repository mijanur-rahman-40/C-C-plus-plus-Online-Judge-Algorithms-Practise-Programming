#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int sum_B=0,sum_C=0;
    cin>>num;
    for(int i=0; i<num; i++)
    {
        int j;  cin>>j;
        if(j<0)
        {
            sum_C+=j;
        }
        else
            sum_B+=j;
    }
    cout<<sum_B-sum_C<<endl;
}
