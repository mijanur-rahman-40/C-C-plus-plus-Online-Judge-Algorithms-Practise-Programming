#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int num=0;
        int x=0,y=0;
        while(num!=n)
        {
            num+=1;
            if(num%3==0)
                y+=1;
            else if(num%3==1)
                x+=1;
            else if(num%3==2)
                y+=1;

        }

        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
