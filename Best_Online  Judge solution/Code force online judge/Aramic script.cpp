#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
map<string,int>mp1;
void count_individuality(string str)
{
    for(int i=0; i<str.size(); i++){
        mp[str[i]]++;
    }
    map<char,int>::iterator it;
    string str1 ="";
    for(it = mp.begin(); it!=mp.end(); it++){
        str1 += it->first;
    }
    mp1[str1]++;
    mp.clear();
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
            string str;
            cin>>str;
        count_individuality(str);
    }
    cout<<mp1.size()<<endl;
}

/*

5
aa ba abb aaa a
*/
