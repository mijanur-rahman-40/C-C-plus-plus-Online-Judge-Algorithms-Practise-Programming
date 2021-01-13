#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int>gq;

    for(int i=1;i<=10;i++){
        gq.push_back(i*2);
    }
    // erase the 5th element
    gq.erase(gq.begin()+4);

    // erase the first 5 elements:
    gq.erase(gq.begin(),gq.begin()+5);

    cout<<"gquiz contains :";
    for(int i=0;i<gq.size();++i)
        cout<<gq[i]<<'\t';

    return 0;
}
