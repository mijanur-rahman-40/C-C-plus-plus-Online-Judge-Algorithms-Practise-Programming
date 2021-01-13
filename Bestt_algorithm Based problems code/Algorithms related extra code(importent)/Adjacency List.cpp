#include<iostream>
#include<vector>


using namespace std;

vector<int>edges[100000];
vector<int>cost[100000];

int main()
{
    int edg,nod;
    cin>>nod>>edg;
    for(int i=1; i<=edg; ++i)
    {
        int nod1,nod2,cst;
        cin>>nod1>>nod2>>cst;
        edges[nod1].push_back(nod2);
        edges[nod2].push_back(nod1);
        cost[nod1].push_back(cst);
        cost[nod2].push_back(cst);
    }
    return 0;
}
