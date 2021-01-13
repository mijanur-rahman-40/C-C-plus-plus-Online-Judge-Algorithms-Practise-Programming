

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2;
	cin >>str1>>str2;
	string ans="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	for(int i=1;i<=str1.length();i++){
		for(int j=1;j<=str2.length();j++){
          ans=min(ans,str1.substr(0,i)+str2.substr(0,j));
		}
	}
	cout << ans << endl;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str1,str2;
     cin>>str1>>str2;
     cout<<min(str1,str2)<<str1.substr(0,2);
}
*/
