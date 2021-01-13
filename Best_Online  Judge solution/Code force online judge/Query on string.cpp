#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    s2=s1;
    int q;cin>>q;
    while(q--)
    {
        int l,r,k;cin>>l>>r>>k;
        l--,r--;
        int len = r-l+1;
        //cout<<len<<endl;
           k=k%len;
           //cout<<k<<endl<<endl;
        for(int i=0;i<len;i++)
        {
             int index=((i+k)%len)+l;
             //cout<<index<<endl;
            s2[index]=s1[l+i];
        }
        for(int i=l;i<=r;i++)
            s1[i]=s2[i];
    }
    cout<<s1<<endl;
}

/*
abacaba
3
3 6 1  ->abbacaa.
1 4 1  ->aabbcaa
1 5 1  ->caabbaa



abacaba
1
1 5 1
aabacba
*/
