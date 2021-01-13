#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int A[100101];
long long int s=0,i=2,k=1;
while(i!=100101)
{
    s=s+i;
    A[k]=s;
    i++;
    k++;
}
    long long int a,b;
    cin>>a;
    while(a--)
    {
        cin>>b;
     cout<<A[b]<<endl;
    }
    return 0;
}

