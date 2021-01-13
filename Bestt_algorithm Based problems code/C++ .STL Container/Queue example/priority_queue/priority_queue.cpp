#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
  // priority_queue<long>max_s;
   priority_queue<long,vector<long>,greater<long> >max_s;
    int t,k;
    long n;
    cin>> t;
    while(t--)
    {
        cin>> k;
        if(k==1)
        {
            cout<<"Push =";
            cin>> n;
            max_s.push(n);
        }
        else if(k==2)
        {
            cout<<"Pop =";
            if(!max_s.empty())
                max_s.pop();
        }
        else if(k==3)
            cout<<"Top ="<< max_s.top()<< endl;
    }
    return 0;
}
