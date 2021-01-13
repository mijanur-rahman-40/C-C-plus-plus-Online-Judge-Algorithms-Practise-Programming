#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<char,int> &a, const pair<char,int> &b)
{
    return a.second<b.second;
}

int main()
{
    pair<char,int>pai[10];
    char ch = 'a';
    for(int i=0; i<10; i++)
    {
        pai[i].first= ch + i;
        pai[i].second= i-2;
    }
    sort(pai,pai+10,sortbysec);
    //sort(pai.begin(),pai.end());
    //sort(pai,pai+10);
    for(int i=0; i<10; i++){
        cout<<pai[i].first<<" "<<pai[i].second<<endl;
    }
    return 0;
}
