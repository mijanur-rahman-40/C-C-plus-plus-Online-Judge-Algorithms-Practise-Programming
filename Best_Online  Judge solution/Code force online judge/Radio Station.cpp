/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>mp;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string str1,ip;
        cin>>str1>>ip;
        mp[ip]=str1;
    }

    for(int i=0;i<m ;i++){
        string str1,ip;
        cin>>str1>>ip;
        ip.pop_back();
        cout<<str1<<" "<<ip<<"; #"<<mp[ip]<<endl;
    }
}
*/
/*
for(int i=0;i<m;i++){
		string l,r;cin>>l>>r;
		r=r.substr(0,r.size()-1);
		cout<<r<<endl;
		cout<<l<<' '<<r<<"; #"<<mp[r]<<"\n";
	}
}
*/
//nesar code bole ase
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec[1000];
    int num1,num2;
    cin>>num1>>num2;
    for(int i=0;i<num1;i++){
            string str1,str2;
        cin>>str1>>str2;
       // vec.push_back(vector <string>() );
        vec[i].push_back(str1);
    }
    for(int i=0;i<num2;i++){
        string str1,ip;
        cin>>str1>>ip;
       ip.pop_back();
       cout<<str1<<" "<<ip<<"; #"<<vec[ip]<<endl;
    }
}
