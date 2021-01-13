#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
int main()
{
    string st;
    cin>>st;
    if(st.size()==1)
        cout<<st<<endl;
    else
    {
        for(int i=0;i<st.size();i++)
        {
            if(st[i]=='+')
                continue;
            else
            vec.push_back(st[i]-'0');
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i];
            if(i!=vec.size()-1)
                cout<<"+";
        }
       cout<<endl;
    }
    return 0;
}

/*

#include<cstdio>
#include<cstring>
#include <iostream>
#include<algorithm>
using namespace std;
char s[110];
int ans[80];
int main()
{
    int len,i,j;;
    scanf("%s",s);
    len=strlen(s);
    j=0;
    if(len==1)
        printf("%s\n",s);
    else
    {
        for(i=0;i<len;i++)
        {
            if(s[i]=='+')
                continue;
            else
                ans[j++]=s[i]-'0';
        }
        sort(ans,ans+j);
        for(i=0;i<j;i++)
        {
            printf("%d",ans[i]);
            if(i!=j-1)
                printf("+");
        }
        printf("\n");
    }
    return 0;
}


*/
